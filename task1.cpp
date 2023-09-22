#include<iostream>
using namespace std;
int main(){
int sides,angles;
cout<<"Enter the number of sides of the polygon: ";
cin>>sides;
angles=(sides-2)*180;
cout<<"The sum of internal angles of a "<<sides<<"-sided polygon is: "<<angles<<" degrees";
}