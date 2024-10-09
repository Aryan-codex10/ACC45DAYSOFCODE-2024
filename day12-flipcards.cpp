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
        int N,X;
        cin >>N>> X;

      
        if (N < 2 || N > 100) {
            cout<< "Invalid input: N must be 2 and 100" << endl;
            return 1;
        }

        if (X < 0 || X > N) {
            cout<< "Invalid input: X must be 0 and "<<N << endl;
            return 1;
        }

        if(X==0||X==N)
        cout<<"0"<<endl;
        else if (X<=N-X)
        {
            cout<<X<<endl;
        }
        else
        cout<<N-X<<endl;
        
        
        }

      
       

        return 0;
    }
