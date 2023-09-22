#include<iostream>
using namespace std;
int main(){
float vegetablepricekg,fruitprikg,earnvage,earnfruit;
int tearn,fruitkg,vegekg,ttearn;
cout<<"Enter vagetable price per kilogram (in coins): ";
cin>>vegetablepricekg;
cout<<"Enter fruit price per kilograms (in coins): ";
cin>>fruitprikg;
cout<<"Enter total kilograms of vagetables: ";
cin>>vegekg;
cout<<"Enter total kilograms of fruits: ";
cin>>fruitkg;
earnvage=vegetablepricekg*vegekg;
earnfruit=fruitprikg*fruitkg;
tearn=earnvage+earnfruit;
ttearn=tearn*1.94
cout<<"Total earnings in Rupees (Rps): "<<ttearn;
}