#include<iostream>
using namespace std;
 int main(){

    int A,B,C,X;
    cin>>A>>B>>C>>X;

    if(A<1 || A>10 || B<1 || B>10 || C<1 || C>10 || X<1 || X>10){
        cout<<"Enter valid number between 1 to 10";
        return 1;
    }
    

    if ( A==X || B==X || C==X){
        cout<< "YES";
    
    }

    else{
        cout<<"NO";
    }

    return 0;
      

 }