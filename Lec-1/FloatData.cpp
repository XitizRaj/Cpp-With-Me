#include<iostream>
using namespace std;
int main(){

    int a = 10.0; // dividend
    int b = 3; // divisior
    float q = a/b; // quotient
    int r = a - (b*q); //remainder
    cout<<r;
    cout<<q;
}