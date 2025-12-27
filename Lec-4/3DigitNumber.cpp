#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter A No: ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"3 Digit Number: "<<n;
    }
    else{
        cout<<"Not A 3 Digit Number: "<<n;
    }
}