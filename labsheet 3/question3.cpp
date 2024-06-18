// Create a class called carpark that has int data member for car id, int data member for charge/hour, and float data member for the parked time. Make functions to set data members and show the charges and parked hours of the corresponding car id. Make functions for setting and showing the data members. Member function should be called from other functions.

#include<iostream>
using namespace std;

class carpark{
    int carId;
    int chargeperhr;
    float parkedtime;

    public:
    void info(int a, int b,float c ){
       cout<<"The charge of car Id  "<<carId<<" is "<<b*c<<endl;
    }

    void getdata(){
        float bh,bm,ch,cm;
        char c,c2;
        cout<<"Enter the car Id"<<endl;
        cin>>carId;
        cout<<"Enter the charge per hour"<<endl;
        cin>>chargeperhr;
        cout<<"Enter the entry time(hour and then minute) Am/Pm "<<endl;
        cin>>bh>>bm>>c;
        if(c='p'){
            bh=bh+12;
        }
        bm=bm/60;
        bh=bm+bh;
        cout<<"Enter the exit time(hour and minute) Am/pm "<<endl;
        cin>>ch>>cm>>c2;
        if(c2='p'){
            ch=ch+12;
        }
        cm=cm/60;
        ch=ch+cm;
        parkedtime=ch-bh;
    }

    void setdata(){
        info(carId, chargeperhr, parkedtime);
    }
};

int main(){
   carpark c;
   c.getdata();
   c.setdata();
    return 0;
}