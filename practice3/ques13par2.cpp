#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter investment prince";
    cin>>n;
    int t;
    cout<<" enter time in year";
    cin>>t;
    int r;
    cout<<" enter rate of interest";
    cin>>r;
    
    cout<<" ur investment will be "<<(n*t*r)/100<<" after "<<t<<" years";
}