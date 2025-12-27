#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter Number: ";
    cin>>n;
    int count =0;
    int a =n;
    int lastdigit = 0;
    int sum = 0;
    while(n!=0){
        lastdigit = n%10;
        sum+=lastdigit;
        n/=10;

    } 
    if(a==0) cout<<1;
    else
    cout<<"Number Of Digit Are: "<<sum;
}
