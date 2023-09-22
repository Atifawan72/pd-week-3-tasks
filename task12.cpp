#include<iostream>
using namespace std;
int main(){
int sqmeter,width,height,noofwalls;
cout<<"Number of square meters you can paint: ";
cin>>sqmeter;
cout<<"Width of the single wall (in meters): ";
cin>>width;
cout<<"Height of the single wall (in meteres): ";
cin>>height;
noofwalls=sqmeter/(width*height);
cout<<"Number of walls you can print: "<<noofwalls;
 
}