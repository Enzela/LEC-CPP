#include<iostream>
using namespace std;
class student
{
    private:
    int roll;
    char name[20];
    char phone[10];
    public:
    void getdata();
    void showdata();
};
inline void student::getdata()//function defination
{
    cout<<"Enter the roll no:";
    cin>>roll;
    cout<<"Enter the name:";
    cin>>name;
    cout<<"Enter the phone number";
    cin>>phone;
}
inline void student::showdata()
{
    cout<<"Name:"<<name<<endl;
    cout<<"Roll:"<<roll<<endl;
    cout<<"Phone:"<<phone<<endl;
}
