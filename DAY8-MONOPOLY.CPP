#include<iostream>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 5000) {
        cout << "Invalid input: T must be between 1 and 5000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int P,Q,R,S;
        cin >> P>>Q>>R>>S;

      
        if (P < 1 || P > 100) {
            cout<< "Invalid input: P must be 1 and 100" << endl;
            return 1;
        }

        if (Q < 1 || Q > 100) {
            cout<< "Invalid input: Q must be 1 and 100" << endl;
            return 1;
        }

        if (R < 1 || R > 100) {
            cout<< "Invalid input: R must be 1 and 100" << endl;
            return 1;
        }

        if (S < 1 || S > 100) {
            cout<< "Invalid input: S must be 1 and 100" << endl;
            return 1;
        }

      
       if(P > Q+R+S || Q>P+R+S || R> P+Q+S || S > P+Q+R)
       cout<<"yes"<<endl;
       else
       cout<<"no"<<endl;

        
    }

    return 0;
}