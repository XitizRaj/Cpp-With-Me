#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter A No: ";
    cin>>n;
    if(n<=-1){                                     // or n=-8
        cout<< "Absoulte value is: "<<(-1*n);
    }
    else{
        cout<<"Absoulte value is: "<<n;

    }
    
}