#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct Trip {
    string from;
    string to;
    int cost;
};

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;

        vector<Trip> trips;
        map<string, int> cityToCost;
        map<string, bool> visited;

        for (int i = 0; i < N - 1; i++) {
            Trip trip;
            cin >> trip.from >> trip.to >> trip.cost;
            trips.push_back(trip);
            visited[trip.from] = false;
            visited[trip.to] = false;
        }

        string currentCity;
        for (const Trip& trip : trips) {
            visited[trip.from] = true;
            cityToCost[trip.from] += trip.cost;
            cityToCost[trip.to] -= trip.cost;
            currentCity = trip.from;
        }

        int totalCost = 0;
        currentCity = trips[0].from;
        
        for (const Trip& trip : trips) {
            totalCost += cityToCost[currentCity];
            cout << currentCity << " " << trip.to << " " << totalCost << endl;
            currentCity = trip.to;
        }

        totalCost += cityToCost[currentCity];
        cout << totalCost << endl;
    }
    return 0;
}
