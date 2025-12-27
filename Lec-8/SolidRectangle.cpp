#include<iostream>
using namespace std;
int main(){
    int c;
    cout<<"Enter no of columns ? ";
    cin>>c;
    int r;
    cout<<"Enter no of rows ? ";
    cin>>r;

    for(int i=1; i<=c;i++){
        for(int j =1; j<=r; j++){
            cout<<"*";
        }cout<<"\n";

    }
}