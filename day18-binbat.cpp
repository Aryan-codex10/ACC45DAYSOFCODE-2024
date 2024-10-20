#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int T;
    cin >> T;

    if (T < 1 || T > 100000) {
        cout << "Invalid input: T must be between 1 and 100000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int N, A, B;
        cin >> N >> A >> B;

        if (N < 2 || N > (int)pow(2, 20) || (N & (N - 1)) != 0) {
            cout << "Invalid input: N must be between 2 and 2^20 and a power of 2" << endl;
            return 1;
        }

        if (A < 1 || A > 100) {
            cout << "Invalid input: A must be between 1 and 100" << endl;
            return 1;
        }

        if (B < 1 || B > 100) {
            cout << "Invalid input: B must be between 1 and 100" << endl;
            return 1;
        }

        int k = log2(N);
        int total_time = k * A + (k - 1) * B;
        cout << total_time << endl;
    }

    return 0;
}