#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter A No: ";
    cin>>n;
    // if((n%5==0 || n%3==0) && (n%15!=0)){
    //     cout<<"Divisible By 5or3 But Not By15";
    // }
    //or
    if(n%3==0 || n%5==0){
        if(n%15!=0){
        cout<<"Divisible By 5or3 But Not By15";
        }
        else{
            cout<<"Not Matching Condition";
        }
    }
    else{
        cout<<"Not Matching Condition";

    }
    
}