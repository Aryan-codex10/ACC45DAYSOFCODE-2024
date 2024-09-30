#include<iostream>
using namespace std;
 int main(){
    int T;
    cin >> T;

    if (T < 1 || T > 100) {
        cout << "Invalid input: T must be between 1 and 100" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int X,Y;
        cin >> X >> Y;

      
        if (X < 2 || X > 12) {
            cout<< "Invalid input: X must be between 2 and 12" << endl;
            return 1;
        }

      
        if (Y < 1 || Y>X) {
            cout << "Invalid input: Y must be between 1 and "<<X << endl;
            return 1;
        }

        int total = (X*4)+(Y); 
        

        cout << total << std::endl;
    }
 }