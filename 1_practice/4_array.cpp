#include<iostream>
using namespace std;

int main()
{
    int marks[5];
    int i;
     cout<<"enter the marks for subject"<<i<<"\n";
    for(i=0;i<5;i++)
    {
        cin>>marks[i];
    }
    int sum=0;
   
   for(i=0;i<5;i++)
   {
    sum=sum+marks[i];
   }
   cout<<"the total marks is"<<sum;
}