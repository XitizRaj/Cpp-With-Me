#include<iostream>
using namespace std;
int main(){
    cout<<"Enter A No: ";
    int n;
    cin>>n;
    for(int i =2; i<=n-1; i++){
        if(n%2==0){
            cout<<n<<" is a composite no";
            break;
        
        }
        else{
            cout<<"Not Composite No";
            break;
     
        }
    }  
}