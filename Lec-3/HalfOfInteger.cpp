#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no: ";
    cin>>x;
    cout<<(x/2.0); // easy step priority order follow 
}



// u can type cast also but why to type cast if we know easy priority order so :)
#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no: ";
    cin>>x;
    float y;
    y = float(x);
    cout<<(y/2);
}