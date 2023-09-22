#include<iostream>
using namespace std;
int main(){
int bagsize,bagcost,areainsq,costpound,costpsq;
cout<<"Enter the size of the fertilizer bag in pounds: ";
cin>>bagsize;
cout<<"Enter the cost of the bag: ";
cin>>bagcost;
cout<<"Enter the area in suqare feet that can be covered by the bag: ";
cin>>areainsq;
costpound=bagcost/bagsize;
costpsq=bagcost/areainsq;
cout<<"Cost of fertilizer per pound: $"<<costpound<<endl;
cout<<"Cost of fertilizing per square feet: $"<<costpsq;

}