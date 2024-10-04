#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 10) {
        cout << "Invalid input: T must be between 1 and 10" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int X ;
        cin >> X;

      
        if (X < 1 || X > 9) {
            cout<< "Invalid input: X must be 1 and 9" << endl;
            return 1;
        }

      
       if(10-X>=3)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;

        
    }

    return 0;
}