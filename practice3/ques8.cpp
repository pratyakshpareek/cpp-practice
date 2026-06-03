#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter an integer greatee than 9";
    cin>>n;
    int p=1;
    int s=0;
    int ld;
    while(n>0){
        int ld=n%10;
        n=n/10;
        s=s+ld;
        p=p*ld;
    }
cout<<"the diffrence bw product of digits and sum of digits is" << p-s;

}