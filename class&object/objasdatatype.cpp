#include<iostream>
using namespace std;
class mytype
{
    private:
    float real;
    float imag;
    public:
    void readvalue()
    {
        cout<<"Enter Real Part:";
         cin>>real;
        cout<<"Enter Imaginary Part:";
        cin>>imag;
    }
    void showvalue()
    {
        cout<<"("<<real<<","<<imag<<")";
    }
    void add(mytype c1,mytype c2) //ya return type pani complex huna paryo
    {
        real = c1.real+c2.real;
        imag = c1.imag+c2.imag;
    }
};
int main() 
{
    mytype c1,c2,c3; //complex data lai return garna ...
    // class name pani aauta datatype userdefine datatype vayo tei vayera mathi returen type panni class
    cout<<"Enter first complex number"<<endl;
    c1.readvalue();
    cout<<"Enter second complex number"<<endl;
    c2.readvalue();
    c1.showvalue();
    cout<<"+";
    c2.showvalue();
    c3.add(c1,c2);
    cout<<"=";
    c3.showvalue();
    return 0;
}