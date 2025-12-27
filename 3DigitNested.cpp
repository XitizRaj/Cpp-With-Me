/*
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
    if(a>b){
        if(a>c){
            cout<<"A is greatest";
        }
    }
    if(b>a){
        if(b>c){
            cout<<"B is largest";
        }
    }
    if(c>a){
        if(c>b){
            cout<<"A is largest";
        }
    }

}
*/

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
    if(a>b){
        if(a>c){
            cout<<"A is greatest";
        }
        else{
            cout<<"C is greatest";
        }
    }
    else{//b>a
        if(b>c){
            cout<<"B is greatest";
        }
        else{
            cout<<"C is greatest";
        }
    }
}