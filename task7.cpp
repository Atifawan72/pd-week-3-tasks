#include<iostream>
using namespace std;
int main(){
string moviename;
float adultprice,childprice,adultticketsold,childticketsold,pamountdonated,amountdonated,tamount,tadult,tchild;
cout<<"Enter the movies name: ";
cin>>moviename;
cout<<"Enter the Adult ticket price: $";
cin>>adultprice;
cout<<"Enter the Child ticket price: $";
cin>>childprice;
cout<<"Enter the number of adult ticket sold: ";
cin>>adultticketsold;
cout<<"Enter the number of chiled ticket sold: ";
cin>>childticketsold;
cout<<"Enter the percentage of amount to be donted: ";
cin>>pamountdonated;
tadult=adultprice*adultticketsold;
tchild=childprice*childticketsold;
tamount=tadult+tchild;
amountdonated=tamount*(pamountdonated/100);
cout<<"Movie: "<<moviename<<endl;
cout<<"Total amount generated from the ticket sales: $"<<tamount<<endl;
cout<<"Donation to charity"<<" ("<<pamountdonated<<"%"<<") : $"<<amountdonated;


}