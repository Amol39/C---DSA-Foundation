/*
3. Which one point needs to be removed so that shape formed from remaining data is largest.
*/

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

class Coordinate {
public:
    int x, y;

    Coordinate(int _x, int _y) : x(_x), y(_y) {}
};

int calculateCrossProduct(const Coordinate& p0, const Coordinate& p1, const Coordinate& p2) {
    return (p1.x - p0.x) * (p2.y - p0.y) - (p2.x - p0.x) * (p1.y - p0.y);
}

double calculatePolygonArea(const vector<Coordinate>& polygon) {
    int numVertices = polygon.size();
    if (numVertices < 3) return 0.0;

    double area = 0.0;
    for (int i = 0; i < numVertices; i++) {
        int j = (i + 1) % numVertices;
        area += static_cast<double>(polygon[i].x * polygon[j].y - polygon[j].x * polygon[i].y);
    }

    return fabs(area) / 2.0;
}

double findLargestArea(const vector<Coordinate>& points) {
    int numPoints = points.size();
    if (numPoints < 3) return 0.0;

    double largestArea = 0.0;

    for (int i = 0; i < numPoints; i++) {
        for (int j = i + 1; j < numPoints; j++) {
            vector<Coordinate> remainingPoints;
            for (int k = 0; k < numPoints; k++) {
                if (k != i && k != j) {
                    remainingPoints.push_back(points[k]);
                }
            }

            int numRemainingPoints = remainingPoints.size();

            vector<Coordinate> convexHull;
            for (int k = 0; k < numRemainingPoints; k++) {
                while (convexHull.size() >= 2 && calculateCrossProduct(convexHull[convexHull.size() - 2], convexHull.back(), remainingPoints[k]) <= 0) {
                    convexHull.pop_back();
                }
                convexHull.push_back(remainingPoints[k]);
            }

            double area = calculatePolygonArea(convexHull);
            largestArea = max(largestArea, area);
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
