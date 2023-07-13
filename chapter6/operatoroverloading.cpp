#include<iostream>
  using namespace std;
  
  class A
  {
    int a,b,c;
    public:
     A( int x, int y,int z)
     {
        a=x;
        b=y;
        c=z;
     }
     void show()
     {
      cout<<a<<endl;
      cout<<b<<endl;
      cout<<c<<endl;

     }
     A operator -()//j value pathayo tesle - gariraxa 10 pathaye -10
     {
        a=-a;
        b=-b;
        c=-c;
     }
      void display()
      {
        cout<<a<<endl;
        cout<<b<<endl;
        cout<<c<<endl;

      }     
  };
  int main()
  {
    A obj(1,2,3);
    //obj.show();
    -obj;
    obj.display();
  }
    