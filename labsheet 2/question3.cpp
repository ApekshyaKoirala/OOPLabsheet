#include<iostream>
using namespace std;
namespace square{
    int num;
   int  fun(int n1)
    {
       return n1*n1;
    }
}
namespace cube{
    int num;
   int  fun(int n1)
    {
       return n1*n1*n1;
    }
}
int main(){
    cout<<"Enter the number whose square is to be found"<<endl;
    cin>>square::num;
    cout<<"Enter the number whose cube is to be found"<<endl;
    cin>>cube::num;
    
    cout<<"square  is "<<square::fun(cube::num)<<endl;
    cout<<"cube is "<<cube::fun(square::num)<<endl;
    return 0;

}