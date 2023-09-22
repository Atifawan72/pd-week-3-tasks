#include<iostream>
using namespace std;
int main(){
float imposter,player;
int  B_imposter;
cout<<"Enter Imposter Count: ";
cin>>imposter;
cout<<"Enter player Count: ";
cin>>player;
B_imposter=(imposter/player)*100;
cout<<"Chance of being imposter: "<<B_imposter<<"%";
}