#include<iostream>
using namespace std;
double fun(){
    double feet;
    cout<<"Enter feet"<<endl;
    cin>>feet;
    cout<<"Function with no argument"<<endl;
    return (feet * 12.0 );

}
double fun (int a){
    cout<<"Function with one argument"<<endl;
    return a*12.0;
}
void fun (double feet, double &inches){
    cout<<"Function with two argument"<<endl;
     inches=feet*12.0;
}
int main(){
   double feet, inches;
    cout<<"inches is"<<fun()<<endl;
    cout<<"enter feet"<<endl;
    cin>>feet;
    inches=fun(feet);
    cout<<"Inches is"<<inches<<endl;
    fun(feet,inches);
    cout<<"inches is"<<inches<<endl;


}

