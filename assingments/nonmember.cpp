#include<iostream>
using namespace std;
class student{
     
    public:
    void getdata();
};

 void getdata()
{
    int roll;
    char name[10];
    char phone[10];
    cout<<"enter the name of the student\n";
    cin>>name;
    cout<<"enter the roll number of the student\n";
    cin>>roll;
    cout<<"enter the phone number of the student\n";
    cin>>phone;
    cout<<"\nNAME: "<<name;
    cout<<"\nROLL:"<<roll;
    cout<<"\nPHONE NUMBER: "<<phone;

}


int main()
{
    cout<<"INFOS OF 1ST STUDENT:\n";
    getdata();
    cout<<"\n\nINFOS OF 2ND STUDENT:\n";
    getdata();
    //cout<<"INFOS OF 1ST STUDENT:\n";
    //cout<<"\n\nINFOS OF 2ND STUDENT:\n";
    return 0;

}


     
