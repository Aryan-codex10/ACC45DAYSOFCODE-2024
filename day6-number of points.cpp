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
        int X,Y ;
        cin >> X >> Y;

      
        if (X < 1 || X > 100) {
            cout<< "Invalid input: X must be 1 and 100" << endl;
            return 1;
        }

      
        if (Y < 1 || Y > 100) {
            cout << "Invalid input: Y must be 1 and 100" << endl;
            return 1;
        }

        int A = 500 - X*2 + 1000 - (X+Y)*4;
        int B = 1000 - Y*4 + 500 - (X+Y)*2;

       if(A>B)
       cout<<A<<endl;
       else
       cout<<B<<endl;
    }

    return 0;
}