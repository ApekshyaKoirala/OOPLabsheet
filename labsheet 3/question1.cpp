// Write a simple program that converts the temperature in Celsius scale to Fahrenheit scale and vice versa using the basic concept of class and object. Make separate classes for Celsius and Fahrenheit which will have the private members that hold the temperature value and make conversion functions in each class for conversion from one to another. For example, you need to have a function toFahrenheit() in class Celsius that converts to Fahrenheit scale and returns the value.

#include<iostream>
using namespace std;

class fahrenheit{
    float temp;

    public:
    float toFahrenheit(float temp1){
        
      return (temp1*(9.0/5)+32);
       
    }

    void getdata(){
        cout<<"Enter the temperature that is to be converted into fahrenheit"<<endl;
        cin>>temp;
    }

    void display(){
     cout<<"The converted temperature is "<<toFahrenheit(temp)<<"F"<<endl;
    }
};
class celsius{
    float temp;

    public:
    float toCelsius(float temp1){
        return ((temp1-32.0)*(5.0/9));
        
    }

    void getdata(){
        cout<<"Enter the temperature that is to be converted into celsius"<<endl;
        cin>>temp;
    }

    void display(){
     cout<<"The converted temperature is "<<toCelsius(temp)<<"C"<<endl;
    }
};

int main(){
  fahrenheit f;
 f.getdata();
 f.display();
 celsius c;
c.getdata();
c.display();
    return 0;
}