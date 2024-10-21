#include<iostream>
using namespace std;

int main(){
    int T;
    cin>>T;

    if (T < 1 || T > 100) {
        cout << "Invalid input: T must be between 1 and 100" << endl;
        return 1;
    }

    while(0<T--){
        int N,X,Y;
        cin>>N>>X>>Y;

        if (N < 1 || N >10) {
            cout << "Invalid input: N must be between 1 and 10" << endl;
            return 1;
        }

        if (X< 1 || X > 10) {
            cout << "Invalid input: X must be between 1 and 10" << endl;
            return 1;
        }

        if (Y < 0 || Y > N*X) {
            cout << "Invalid input: Y must be between 1 and 10" << endl;
            return 1;
        }

        if (Y%X==0 && Y<=N*X)
        cout<<"YES"<<endl;
        else
        cout<<"NO"<<endl;
    }
    return 0;
}