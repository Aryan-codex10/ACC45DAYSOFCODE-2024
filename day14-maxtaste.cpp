#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 100) {
        cout << "Invalid input: T must be between 1 and 100" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int a,b,c,d;
        cin >> a>>b>>c>>d;

      
        if (a < 1 || a > 100) {
            cout<< "Invalid input: a must be 1 and 100" << endl;
            return 1;
        }

        if (b< 1 || b > 100) {
            cout<< "Invalid input: b must be 1 and 100" << endl;
            return 1;
        }

        if (c < 1 || c > 100) {
            cout<< "Invalid input: c must be 1 and 100" << endl;
            return 1;
        }

        if (d < 1 || d > 100) {
            cout<< "Invalid input: d must be 1 and 100" << endl;
            return 1;
        }

      
       int max_taste=max(a,b)+max(c,d);
       cout<<max_taste<<endl;

        
    }

    return 0;
}