#include<iostream>
//sure question
using namespace std;
class moblie
{
    private: //sadhai private hunxa
    int m=10;
    public:
    void display()
    {
        cout<<"the value of m is"<<endl;
        cout<<"value of what is"<<this->m<<endl;//yo address ma vako value
        cout<<"the address of current object is"<<this<<endl;//this le address bokxa object ko
        //m1 ra m2 ko address xai this le bokya hunxa tei vayera differnt
    }
};
int main()
{
    moblie m1,m2;
    m1.display();
    m2.display();
    return 0;
}