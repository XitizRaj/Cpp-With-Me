#include<iostream>
using namespace std;
int main (){
    int a;
    int b;
    int c;
    cout<<"Enter A: ";
    cin>>a;
    cout<<"Enter B: ";
    cin>>b;
    cout<<"Enter C: ";
    cin>>c;
    if(a>b && a>c){
        cout<<a<<",a is largest";
    }
    if(b>a && b>c){
        cout<<b<<",b is largest";
    }
    if(c>a && c>b){
        cout<<c<<",c is largest";
    }
}