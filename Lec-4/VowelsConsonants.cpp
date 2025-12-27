#include<iostream>
using namespace std;
int main (){
    char ch;
    cout<<"Enter A Character: ";
    cin>>ch;
    int cha = int(ch);
    cout<<cha<<endl;
    if(cha>=97 && ch>=122 || cha>=65 && ch>=90){
        if(ch=='a' || ch=='e' ||ch=='i' || ch=='o' || ch=='u'){
            cout<<"Alphabet Is Vowel";
        }
        else{
            cout<<"Alphabet Is Consonant";
        }
    }

    else {
        cout<<"NOT ALPHABET";
    }
    
}