/*
4. Calculate a point which is equidistant from each point of the shape.
*/


#include <iostream>
#include <vector>

using namespace std;

class Coordinate {
public:
    int x, y;

    Coordinate(int _x, int _y) : x(_x), y(_y) {}
};

Coordinate calculateCenter(const vector<Coordinate>& coordinates) {
    int numCoordinates = coordinates.size();
    if (numCoordinates == 0) {
        return Coordinate(0, 0);
    }

    int sumX = 0, sumY = 0;
    for (const Coordinate& coord : coordinates) {
        sumX += coord.x;
        sumY += coord.y;
    }

    int centerX = sumX / numCoordinates;
    int centerY = sumY / numCoordinates;

    return Coordinate(centerX, centerY);
}

int main() {
    vector<Coordinate> coordinates = {Coordinate(1, 1), Coordinate(2, 3), Coordinate(3, 2), Coordinate(4, 4), Coordinate(5, 1), Coordinate(6, 3)};

    Coordinate center = calculateCenter(coordinates);

    cout << "The center of the shape formed by the points is: (" << center.x << ", " << center.y << ")" << endl;

    return 0;
}
