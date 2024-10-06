#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 1000) {
        cout << "Invalid input: T must be between 1 and 1000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int X,Y;
        cin >> X>>Y;

      
        if (X < 1 || X > 1000000000) {
            cout<< "Invalid input: P must be 1 and 1000000000" << endl;
            return 1;
        }

        if (Y < 1 || Y > 1000000000) {
            cout<< "Invalid input: Q must be 1 and 1000000000" << endl;
            return 1;
        }

        if(X>=Y)
        cout<<"0"<<endl;
        else
        cout<<(Y/X)<<endl;

        }

      
       

        return 0;
    }
