#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    if (T < 1 || T > 1000) {
        cout << "Invalid input: T must be between 1 and 1000" << endl;
        return 1;
    }

    while(0<T--){
        int H,X,Y;
        cin>>H>>X>>Y;

        if (H < 1 || H >100) {
            cout << "Invalid input: N must be between 1 and 100" << endl;
            return 1;
        }

        if (X< 1 || X > 100) {
            cout << "Invalid input: X must be between 1 and 100" << endl;
            return 1;
        }

        if (Y < 1 || Y > 100) {
            cout << "Invalid input: Y must be between 1 and 100" << endl;
            return 1;
        }

        int attacks = 0;

        if(H<=Y){
            cout<<"1"<<endl;
            continue;
        }
        H-=Y;
        attacks++;
        attacks+=(H+X-1)/X;
        cout<<attacks<<endl;
   }
    return 0;
}