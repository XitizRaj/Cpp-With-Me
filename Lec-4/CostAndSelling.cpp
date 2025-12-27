#include<iostream>
using namespace std;
int main (){
    int costprice , sellingprice;
    cout<<"Enter CostPrice: ";
    cin>>costprice;
    cout<<"Enter SellingPrice: ";
    cin>>sellingprice;

    if(sellingprice>costprice){
        int profit;
        profit = sellingprice-costprice;
        cout<<"The PROFIT Is: "<<profit;
    }
    if(sellingprice==costprice){
        cout<<"There Is Nor PROFIT Nor LOSS";
    }
    if(costprice>sellingprice){
        int loss;
        loss = costprice-sellingprice;
        cout<<"The LOSS Is: "<<loss;
    }
}