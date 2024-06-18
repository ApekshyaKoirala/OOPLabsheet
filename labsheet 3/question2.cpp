// Assume that you want to check whether the number is prime or not. Write a program that asks for numbers repeatedly. When it finishes checking a number the program asks if the user wants to do another calculation. The response can be 'y' or 'n'. Don't forget to use the object-oriented concept.

#include<iostream>
using namespace std;
class prime{
    int num;

    public:
    int f=0;
    void isPrime(int num1){
    
      for(int i=2; i<(num1/2);i++){
        f=0;
        while(num1%i==0){
            f++;
          break;
        }
        
      }
        if(f==0){
            cout<<"The number is prime"<<endl;
        }
        else
        cout<<"The number is not prime"<<endl;
    
      char c;
      cout<<"Enter y if you want to continue and n if you want to exit"<<endl;
      cin>>c;
      while(c=='n'){
      exit(0);
      }
      getdata();
      setdata();
    }
    void getdata(){
        cout<<"Enter a number"<<endl;
        cin>>num;

    }

    void setdata(){
        isPrime(num);
    }
    



};

int main(){
    prime p;
   p.getdata();
   p.setdata();
    return 0;
}