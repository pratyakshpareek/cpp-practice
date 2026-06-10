#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int o;
    cout<<" enter original value";
    cin>>o;
     int d;
    cout<<" enter derpciation rate";
    cin>>d;
    int t;
    cout<<"enter years";
    cin>>t;
    cout<<" the value after "<<t<<" years is "<<o*pow((1-d/100.0),t);
    return 0;

}