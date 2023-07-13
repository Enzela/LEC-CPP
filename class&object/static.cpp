#include<iostream>
using namespace std;
 void display()
 {
     static int i=1;//class or static variable ek xoti matra in
     i=i+5;
    cout<<i<<endl;
 }
 int main()
 {
   display();
    display();
 }