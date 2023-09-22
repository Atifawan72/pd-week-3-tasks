#include<iostream>
using namespace std;
int main(){
int velocity,acceleration,time,Fvelocity;
cout<<"Enter Initial Velocity (m/s): ";
cin>>velocity;
cout<<"Enter Acceleration (m/s^2): ";
cin>>acceleration;
cout<<"Enter Time (s): ";
cin>>time;
Fvelocity=(time*acceleration)+velocity;
cout<<"Final velocity (m/s): "<<Fvelocity;

}