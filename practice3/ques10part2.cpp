#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter number of dgitis of which u want sum";
    cin>>n;
    int sum=0;
    for(int i=0;i<n;i++){
        int digit;
        cin>>digit;
        sum=sum + digit;
    }
    cout<<"the sum of digits is "<<sum;
}