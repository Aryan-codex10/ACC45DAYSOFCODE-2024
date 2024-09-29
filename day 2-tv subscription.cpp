#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

   
    if (T < 1 || T > 1000) {
        cout << "Invalid input: T must be between 1 and 1000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int N, X;
        cin >> N >> X;

      
        if (N < 1 || N > 100) {
            cout<< "Invalid input: N must be between 1 and 100" << endl;
            return 1;
        }

      
        if (X < 1 || X > 1000) {
            cout << "Invalid input: X must be between 1 and 1000" << endl;
            return 1;
        }

        int subs = (N + 5) / 6; 
        int total_cost = subs* X;

        cout << total_cost << std::endl;
    }

    return 0;
}