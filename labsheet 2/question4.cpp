#include<iostream>
using namespace std;
float &temp(float &a, float &b){
    return (a>b)?a:b;
}
int main(){
    float temp1,temp2, newtemp;
    cout<<"Enter first temperature:"<<endl;
    cin>>temp1;
    cout<<"Enter second temperature:"<<endl;
    cin>>temp2;
    cout<<"Enter new temperature:"<<endl;
    cin>>newtemp;
    temp(temp1,temp2)=newtemp;
    cout<<"Updated temperature"<<endl;
    cout<<"temp 1 is "<<temp1<<endl;
    cout<<"temp 2 is "<<temp2<<endl;
    return 0;
}