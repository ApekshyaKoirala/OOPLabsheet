#include<iostream>
using namespace std;

struct date{
    int day;
    int month;
    int year;
};
void DOB(struct date);
int main(){
    date d1;
    cout<<"Enter your birth day "<<endl;
    cin>>d1.day;
    cout<<"Enter your birth month"<<endl;
    cin>>d1.month;
    cout<<"Enter your birth year"<<endl;
    cin>>d1.year;
    DOB(d1);
    // cout<<"Your birthdate is "<<d1.day<<"/"<<d1.month<<"/"<<d1.year<<endl;
    return 0;
}

void DOB(struct date d1){
    cout<<"Your birth date is "<<d1.month<<"/"<<d1.day<<"/"<<d1.year;
}  