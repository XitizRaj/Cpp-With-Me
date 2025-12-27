#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter A No: ";
    cin>>n;
    bool flag = true;
    for(int i=2; i<=n-1; i++){
        if (n%i==0){
            flag = false;
            cout<<"is composite";

            break;


        }
        
    }
    if(n==1) cout<<"1 is neither prime nor composite";
    else if (flag==true) cout<<"is prime";

    // else 
}