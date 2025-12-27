#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter A Character: ";
    cin>>ch;
    int cha = int(ch);
    cout<<cha<<endl;
    if(cha>=97 && ch>=122 || cha>=65 && ch>=90){
        cout<<"IS ALPHABET";

    }

    else {
        cout<<"NOT ALPHABET";


    }
    



}