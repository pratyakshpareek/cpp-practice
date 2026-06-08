#include<iostream>
using namespace std;
int main(){
 int n;
 cout<<" total digit enteer";
 cin>>n;
 int sum=0;
 for(int i=0;i<n;i++){
    int x;
    cin>>x;
    sum=sum+x;

 }
 cout<<sum/n;
}