#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to the mini calculator app (+,-,*,/)"<<endl;
    int a,b;
    char ch;
    cout<<"Enter 1st No: ";
    cin>>a;
    cout<<"Enter 2nd No: ";
    cin>>b;
    cout<<"Enter Operation: ";
    cin>>ch;
    switch(ch=='+'){
        case 1:
           cout<<"operation performed: "<<ch<<endl<<"Sol~ "<< a+b;
    }
    switch(ch=='-'){
        case 1:
           cout<<"operation performed: "<<ch<<endl<<"Sol~ "<< a-b;
    }

    switch(ch=='*'){
        case 1:
           cout<<"operation performed: "<<ch<<endl<<"Sol~ "<< a*b;
    }
    switch(ch=='/'){
        case 1:
           cout<<"operation performed: "<<ch<<endl<<"Sol~ "<< a/b;
    }
    switch(ch!='+' && ch!='-' && ch!='*' && ch!='/'){
        case 1:
           cout<<"INVALID OPERATION!!!! PLZ TRY AGAIN:)";
    }
}