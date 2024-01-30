/*
1. Write a class which can read data from a text file. The format of the file is as specified
below.
  PTS
  1 2 4.5
  2 2.3 3.5
  3
  :
  : 
  CON
  1 3
  3 2
  :
  :
  6 8
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream> 
using namespace std;

class DataFileReader {
    
private:
    string inputFileName;
    vector<pair<int, float>> dataPoints;
    vector<pair<int, int>> dataConnections;

    void extractPoints(ifstream& inputFile) {
        string line;
        while (getline(inputFile, line) && !line.empty()) {
            int identifier;
            float coordinateX, coordinateY;
            istringstream lineStream(line);
            lineStream >> identifier >> coordinateX >> coordinateY;
            dataPoints.emplace_back(identifier, coordinateX);
        }
    }

    void extractConnections(ifstream& inputFile) {
        string line;
        while (getline(inputFile, line) && !line.empty()) {
            int pointId1, pointId2;
            istringstream lineStream(line);
            lineStream >> pointId1 >> pointId2;
            dataConnections.emplace_back(pointId1, pointId2);
        }
    }

public:
    DataFileReader(const string& inputFileName) : inputFileName(inputFileName) {}

    bool extractData() {
        ifstream inputFile(inputFileName);

        if (!inputFile.is_open()) {
            cerr << "Error: Unable to open file " << inputFileName << endl;
            return false;
        }

        string line;
        while (getline(inputFile, line)) {
            if (line == "PTS") {
                extractPoints(inputFile);
            } else if (line == "CON") {
                extractConnections(inputFile);
            }
        }

        inputFile.close();
        return true;
    }
};

int main() {
    DataFileReader dataReader("data.txt");
    if (dataReader.extractData()) {
        cout << "Data successfully extracted!" << endl;
    } else {
        cout << "Failed to extract data." << endl;
    }

    return 0;
}
