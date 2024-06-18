#include<iostream>
using namespace std;
class stu{
    int rn;
    string name;
    
    public:
    stu(){rn=11,name="Apekshya";};

    void display(){
        cout<<rn<<name<<endl;
    }
};

int main(){
    stu o1;
    o1.display();
    return 0;
}
