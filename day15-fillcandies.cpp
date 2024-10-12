#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int T;
    cin >> T;

   
    if (T < 1 || T > 1000) {
        cout << "Invalid input: T must be between 1 and 1000" << endl;
        return 1;
    }

    for (int i = 0; i < T; i++) {
        int N,K,M;
        cin >> N>>K>>M;

      
        if (N < 1 || N > 100) {
            cout<< "Invalid input: N must be 1 and 100" << endl;
            return 1;
        }

        if (K < 1 || K > 100) {
            cout<< "Invalid input: K must be 1 and 100" << endl;
            return 1;
        }

        if (M < 1 || M > 100) {
            cout<< "Invalid input: M must be 1 and 100" << endl;
            return 1;
        }

        if(N<=K*M)
        cout<<"1"<<endl;
        else if (N%(K*M)==0)
        cout<<(N/(K*M))<<endl;
        else if (N%(K*M)>0)
        cout<<(N/(K*M)+1)<<endl;
        
        

      
       
        
    }

    return 0;
}