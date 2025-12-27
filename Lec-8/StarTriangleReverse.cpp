#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no ? ";
    cin>>n;
    for(int i=n; i>=1;i--){
        for(int j=i; j>=1; j--){
            cout<<"*";
        }cout<<"\n";

    }
}

// or 
// mop stars = n+1-i
// row+no of stars =n+1
//logic or maths

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no ? ";
    cin>>n;
    
    for(int i=1; i<=n;i++){
        for(int j =1; j<=n+1-i; j++){
            cout<<"*";
        }cout<<"\n";

    }
}