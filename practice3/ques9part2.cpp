#include<iostream>
using namespace std;
int main(){
    int maths;
    cout<<" enter maths grade points";
    cin>>maths;
    int mp;
    cout<<" enter maths grADE POINT ";
    cin>>mp;
      int pp;
    cout<<" enter physics grADE POINT ";
    cin>>pp;
      int physics;
    cout<<" enter physics  grade points";
    cin>>physics;
    cout<<" the cgpa is"<<(maths*mp+physics*pp)/(mp+pp);
}