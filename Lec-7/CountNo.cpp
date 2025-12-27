#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count =0;
    int a =n;
    while(n!=0){
        n=n/10;
        count++;
    }
    if(a==0) cout<<1;
    else
    cout<<"Number Of Digit Are: "<<count;
}
