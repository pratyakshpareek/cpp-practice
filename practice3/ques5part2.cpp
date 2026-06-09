#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x1;
    cout<<" enter x coordinate of first point";
    cin>>x1;
    int y1;
    cout<<" enter y coordinate of first point";
    cin>>y1;
        int x2;
    cout<<" enter x coordinate of  second point";
    cin>>x2;
    int y2;
    cout<<" enter y coordinate of second point";
    cin>>y2;
    cout<<" the distance bw two point is "<<sqrt(pow(x2-x1,2)+pow(y2-y1,2)); // sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}