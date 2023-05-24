#include<iostream>
using namespace std;

int main(){
    string sub[]={"TOC","oop","ECT","EM","MATH"};

int marks[5],i,total;
cout<<"enter the marks";
for(i=0;i<5;i++)
{
    cin>>marks[i];}
    for(i=0;i<5;i++){
        total=total+marks[i];
        cout<<"the marks is"<<total[i];
    }
    return 0;
}


    


