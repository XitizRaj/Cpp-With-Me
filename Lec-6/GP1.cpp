#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A No: ";
    cin>>n;

    // for( int i=1; i<=(2*n-1); i++){
    //     cout<<i<<endl;
    // }

    // or 

    int a = 1;
    for( int i=1; i<=n; i++){
        cout<<a<<endl;
        a=a*2;
     
    }

}