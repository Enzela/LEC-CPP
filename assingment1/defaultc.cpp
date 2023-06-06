#include<iostream>
using namespace std;

class complex
{
  int a,b;
  public:
   complex();//decleration
  void print()
  {
    cout<<"the number is"<<a<<"+"<<b<<"i"<<endl;

  }
};
complex::complex()//def
  {
    a=0;
    b=0;
  }
int main()
{
  complex c;//no parenthesis 
  c.print();
  return 0;

}



