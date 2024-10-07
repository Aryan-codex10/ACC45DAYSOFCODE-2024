#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 10000) {
        cout << "Invalid input: T must be between 1 and 1000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int W,X,Y,Z;
        cin >>W>> X>>Y>>Z;

        if (W < 1 || W > 100000) {
            cout<< "Invalid input: W must be 1 and 100000" << endl;
            return 1;
        }

      
        if (X < 1 || X > 100000) {
            cout<< "Invalid input: X must be 1 and 100000" << endl;
            return 1;
        }

        if (Y < 1 || Y > 1000000000) {
            cout<< "Invalid input: Y must be 1 and 100000" << endl;
            return 1;
        }

        if (Z < 1 || Z > 100000) {
            cout<< "Invalid input: Z must be 1 and 100000" << endl;
            return 1;
        }

        if(W==X+Y+Z||W==X+Y||W==X+Z||W==Y+Z||W==X||W==Y||W==Z)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;

        }

      
       

        return 0;
    }
