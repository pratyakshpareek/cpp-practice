#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the higher number";
    cin>>x;
    int y;
    cout<<"enter the lower  number";
    cin>>y;
    if(x%y==0){
cout<<"the lcm is  "<<x<<endl;
cout<<"the hcf is "<<y<<endl;
    }
    if(x%y!=0){
        cout<<"the lcm is "<<x*y<<endl;
        cout<<"the hcf is 1"<<endl;

    }
}