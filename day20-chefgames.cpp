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
        int R1,R2,R3,R4;
        cin>>R1>>R2>>R3>>R4;

        if (R1==1||R2==1|R3==1||R4==1)
        cout<<"OUT"<<endl;
        else
        cout<<"IN"<<endl;

    }
    return 0;
}