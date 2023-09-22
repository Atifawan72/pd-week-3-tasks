#include<iostream>
using namespace std;
int main(){
int age,moved,tmove,avg;
cout<<"Enter the person's age: ";
cin>>age;
cout<<"Enter the number of times they've moved: ";
cin>>moved;
tmove=moved+1;
avg=age/tmove;
cout<<"Average number of years lived in the same house: "<<avg;
}