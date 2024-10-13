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
        int N;
        cin >> N;

      
        if (N < 1 || N > 100) {
            cout<< "Invalid input: X must be 1 and 100" << endl;
            return 1;
        }

        

        cout<<(N*1000)/100<<endl;

        }

      
       

        return 0;
    }
