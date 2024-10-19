#include<iostream>
#include<cmath>
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
        cin >> X>>Y;

      
        if (X < 1 || X > 10) {
            cout<< "Invalid input: X must be 1 and 10" << endl;
            return 1;
        }

        if (Y < 1 || Y > 10) {
            cout<< "Invalid input: Y must be 1 and 10" << endl;
            return 1;
        }

        if(Y>X)
        cout<<"BIKE"<<endl;
        else if (X>Y)
        cout<<"CAR"<<endl;
        else
        cout<<"SAME"<<endl;

        }

      
       

        return 0;
    }
