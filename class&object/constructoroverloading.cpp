#include<iostream>
using namespace std;

class okay{
    int phone;
    char name[20];
    public:
    okay()

    okay(int pphone, char bname) 
    {
        phone=pphone;
        name=bname; 
    }
    okay (okay &cc){
        phone=cc.phone;
        nname=cc.name;     
    }
    void display()
    {
        cout<<"the phone number is"<<phone;
        cout<<"the name is"<<name;   
    }

    };
int main()
{
    okay la(88,enzlea);
    la.display();

}