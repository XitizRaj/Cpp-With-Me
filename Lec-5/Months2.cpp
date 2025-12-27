#include<iostream>
using namespace std;
int main(){
    int month;
    cout<<"Enter No: ";
    cin>>month;
    // 1 3 5 7 8 10 12 --> 31 days
    // 4 6 9 11 --> 30 days
    // 2 --> 28 days
    switch(month<=7 && month%2!=0){
        case 1:
           cout<<"31";
    }
    switch(month>=8 && month%2==0){
        case 1:
           cout<<"31";
    }
    switch(month==4 || month==6 || month==9 || month==11){
        case 1:
           cout<<"30";
    }
    switch(month){
        case 2:
           cout<<"28";
    }
}