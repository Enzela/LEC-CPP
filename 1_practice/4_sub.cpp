#include<iostream>
using namespace std;

int main(){
    string sub[]={"TOC","oop","ECT","EM","MATH"};

int marks[5],i,total;

for(i=0;i<5;i++)
{
    cout<<"the marks is"<<sub[i];
    cin>>marks[i];}
    total=0;
    for(i=0;i<5;i++){
        total=total+marks[i];
    }
    cout<<"the marks is"<<total;
    return 0;
}


    


