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
        int B1,B2,B3 ;
        cin >> B1 >> B2 >> B3;

      
        if (B1 < 0 || B1 > 1) {
            cout<< "Invalid input: B1 must be 1 or 0" << endl;
            return 1;
        }

      
        if (B2 < 0 || B2 > 1) {
            cout << "Invalid input: B2 must be 1 or 0" << endl;
            return 1;
        }

        if (B3 < 0 || B3 > 1) {
            cout << "Invalid input: B3 must be 1 or 0" << endl;
            return 1;
        }

        if (B1 == 0 && B2 == 0 || B1 == 0 && B3 == 0 || B3 == 0 && B2 == 0){
            cout<<"Water Filling Time"<<endl;
        }
        else{
            cout<<"Not Now"<<endl;
        }
    }

    return 0;
}