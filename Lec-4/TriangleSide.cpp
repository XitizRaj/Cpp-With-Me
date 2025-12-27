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
    if (a+b>c){  // u can use && (single line code) this code improve your if else logic
        if(b+c>a){
            if(c+a>b){
                cout<<"Triangle Side";
            }
            else{
                cout<<"Not Triangle Side";
            }
        }
        else{
            cout<<"Not Triangle Side";
        }
    }
    else{
        cout<<"Not Triangle Side";
    }
}