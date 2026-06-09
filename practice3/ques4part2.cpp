#include<iostream>
using namespace std;
int main(){
    float  n;
    cout<<" enter the previous price of product";
    cin>>n;
    float  a;
    cout<<"enter current price of product ";
    cin>>a;
    cout<<"the discount you got is "<<(a/n)*100<<"%";
}