#include<iostream>//class tino ota varable abc

parametiri,... input obj object banauni

-obj garda a b c negative aauna apryo

#include<iostream>
using namespace std;

  class testdycons
  {
    private:
    char *str;
    public:
    testdycons()
    {
        str=new char[1];
        str[0]='\0';

    }
    testdycons (char *string)
    {
        str=new char[strlen(string)+1];
        strcpy(str,string);
    }
    void showstring()
    {
        cout<<"you entered"<<str;
    }
  
  ~testdycons()
  {
    delete[]str;
  }
  };
  int main()
  {
    testdycons dc ("nepal");
    dc.showstring();
  }
  


