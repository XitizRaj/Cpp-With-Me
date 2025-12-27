 #include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Number 1: ";
    cin>>a;
    int b;
    cout<<"Enter Number 2: ";
    cin>>b;
    int power = 1;
    for (int i=1; i<=b; i++){
        power *= a;
        

    }

    cout<<"The Power Of Given Number is: "<<power;
    



}