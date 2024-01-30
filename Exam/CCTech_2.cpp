/*
2. Calculate the largest area of the shape formed using given set of points.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>  // Include the cmath header for std::abs

using namespace std;

class Coordinate {
public:
    int x, y;

    Coordinate(int _x, int _y) : x(_x), y(_y) {}
};

double computePolygonArea(const vector<Coordinate>& polygon) {
    int numVertices = polygon.size();
    if (numVertices < 3) return 0.0;

    double area = 0.0;
    for (int i = 0; i < numVertices; i++) {
        int j = (i + 1) % numVertices;
        area += static_cast<double>(polygon[i].x * polygon[j].y - polygon[j].x * polygon[i].y);
    }

    return std::abs(area) / 2.0; 
}

double findLargestArea(const vector<Coordinate>& points) {
    int numPoints = points.size();
    double largestArea = 0.0;

    for (int i = 0; i < numPoints; i++) {
        for (int j = i + 1; j < numPoints; j++) {
            for (int k = j + 1; k < numPoints; k++) {
                vector<Coordinate> polygon = {points[i], points[j], points[k]};
                double area = computePolygonArea(polygon);
                largestArea = max(largestArea, area);
            }
        }
    }

    return largestArea;
}

int main() {
    vector<Coordinate> points = {Coordinate(1, 1), Coordinate(2, 3), Coordinate(3, 2), Coordinate(4, 4), Coordinate(5, 1), Coordinate(6, 3)};
    
    double largestArea = findLargestArea(points);
    
    cout << "The largest area of the shape formed by the points is: " << largestArea << endl;

    return 0;
}
