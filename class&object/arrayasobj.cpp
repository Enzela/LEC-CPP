#include<iostream>
using namespace std;

class student
{
    private:
    char name[10];
    int roll;
    public:
    void info(){
        cout<<"enter name";
        cin>>name;
        cout<<"enter roll";
        cin>>roll;
    }
    void showvalue(){

    cout<<"the name is"<<name;
    cout<<"the roll is"<<roll;}
};
int main()
{
    student s[20];
    int i,n;
    cout<<"the number";
    cin>>n;
    for(i=0;i<n;i++)
    {
        s[i].info();//
    }
    for(i=0;i<n;i++)
    {
        s[i].showvalue();
    }
    return 0;
}