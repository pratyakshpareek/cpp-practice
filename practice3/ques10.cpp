#include<iostream>
using namespace std;

int main() {
    int n;
    cout<<"enter a number n:";
    cin>>n;
    int s=0;
    while (n!=0){
        s=s+n;
        cin>>n;
    }
cout<<s;
return 0;
}


