#include<iostream>
using namespace std;

class complex
{
  int a,b;
  public:
   complex(int,int);//decleration
  void print()
  {
    cout<<"the number is"<<a<<"+"<<b<<"i"<<endl;

  }
};
 complex::complex(int x,int y)//function defination jastai
  {
    a=x;
    b=y;
  }
int main()
{
  complex a(4,5),b(6,7);//argument pass
  a.print();
  b.print();
  return 0;

}



