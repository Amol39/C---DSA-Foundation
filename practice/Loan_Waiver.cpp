#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int L;
        cin >> L;
        
        int steps = 0;
        while (L > 0) {
            if (L >= 7) {
                L -= 7;
            } else {
                L--;
            }
            steps++;
        }
        
        cout << steps << endl;
    }
    
    return 0;
}
