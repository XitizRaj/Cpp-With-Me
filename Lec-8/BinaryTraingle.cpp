#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no ? ";
    cin>>n;
    int a=1;
    for(int i=1; i<=n;i++){
        if(i%2!=0) a=1; //row no odd
        else a=0;      //row no even
        for(int j =1; j<=i; j++){
            cout<<a;
            //fliping
            if(a==1) a=0;
            else a=1;  
        }cout<<"\n";

    }
    // other method
    for(int i=1; i<=n;i++){
        for(int j =1; j<=i; j++){
            if((i+j)%2==0) cout<<1; //sum of odd and even is always even
            else cout<<0;
        }cout<<"\n";
    }

}