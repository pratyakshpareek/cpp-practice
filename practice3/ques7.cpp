#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of terms";
    cin>>n;
    int a=0;
    int b=1;
    int c;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        c=a+b;
        a=b;
        b=c;
    }
return 0;

}
// int n;
// cout<<"entetr n";
// cin>>n;
// int x=0;
// int y=1;
// int s=0;
// int i;
// for(i=1;i<=n;i++){
// s=s+i;
// }
// cout<<x<<" "<<y<<"  "<<s;
// return 0;
// }
