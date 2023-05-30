//inside class defination
#include<iostream>
using namespace std;
class student{
    private://nalelkhda aafai private bujhxa,public garni ho vnaye class ko concept lerauna jaruri thiyena
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata()
    {
        cout<<"\nenter roll no:";
        cin>>roll;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter phone number:";
        cin>>phone;       
    }
     void showdata()
     {
        cout<<"name:"<<name<<endl;
        cout<<"roll:"<<roll<<endl;
        cout<<"phone number:"<<phone<<endl;       
     }
};//end of class
     int main()
     {
        student s1,s2;
        s1.getdata();
        s2.getdata();
        cout<<"first student"<<endl;
        s1.showdata();
        cout<<"second student"<<endl;
        s2.showdata();
        return 0;
     }


     

