#include<iostream>
using namespace std;
int main(){
string name;
float weight,Number_days;
cout<<"Enter the Name of the person: ";
cin>>name;
cout<<"Enter the target weight loss in kilograms: ";
cin>>weight;
Number_days=weight*15;
cout<<name<<" will need "<<Number_days<<" to lose "<<weight<<" kg of weight by following the doctor's suggestions: ";
}