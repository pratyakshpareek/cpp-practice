#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<" enter number n";
    cin>>n;
    int p=1;
    for(int i=1;i<=n;i++){
        p=p*i;
    }
    cout<<"the factorial of n is "<<p<<endl;



        int r;
    cout<<" enter number r";
    cin>>r;
    int pr=1;
    for(int i=1;i<=r;i++){
        pr=pr*i;
}

cout<<" the factorial of r is "<<pr<<endl;




     int b;
    cout<<" enter number r";
    cin>>b;
    int prr=1;
    for(int i=1;i<=n-r;i++){
        prr=prr*i;
}

cout<<" the factorial of b is "<<prr;
}