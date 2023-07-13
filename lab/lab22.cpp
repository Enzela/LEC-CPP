#include<iostream>
using namespace std;
//void swap(int &a,int&b);

void swap(int &a,int&b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;

}

int getnum()
 {
     int x;
     cout<<"Enter the value of x"<<endl;
     cin>>x;
     return x;
}

int main()
{
   int x, y;
    x = getnum();
    y = getnum();
    cout<<"the values before swap are"<<x<<y;
    swap(x,y);
    cout<<"the values after swap are"<<x<<y;
    return 0;
}
