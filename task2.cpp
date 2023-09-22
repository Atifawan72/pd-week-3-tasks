#include<iostream>
using namespace std;
int main(){
int minutes,Fseconds,TNumber_frames;
cout<<"Number of Minutes: ";
cin>>minutes;
cout<<"Frames per seconds: ";
cin>>Fseconds;
TNumber_frames=(minutes*60)*Fseconds;
cout<<"Total Number of Frames "<<TNumber_frames;
}