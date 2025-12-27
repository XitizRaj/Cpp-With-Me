 #include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"Enter Base : ";
    cin>>a;
    int b;
    cout<<"Enter Exponent : ";
    cin>>b;
    bool flag = true;
    if (b<0){
        flag = false;
        b = -b;
    }
    float power = 1;
    for (int i=1; i<=b; i++){
        power *= a;
    }
    if (flag == false){
        power=1/power;
    }
    if (a==0 && b==0){
        cout<<"Not Defined";
    }
    else{
        cout<<"The Power Of Given Number is: "<<power;
    }

}