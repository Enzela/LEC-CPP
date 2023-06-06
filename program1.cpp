#include<iostream>
using namespace std;
class Room{//class name
    public:
    int length;
    int breadth;
    int height;

    double calculateArea(){
        return length*breadth;
    }

    double calculateVolume(){
        return length*breadth*height;
    }    
};
int main(){
    Room obj401;// int main object
    cout<<"Enter length of room:";
    cin>>obj401.length;
    cout<<"Enter breadth of room:";
    cin>>obj401.breadth;
    cout<<"Enter height of room:";
    cin>>obj401.height;

    cout<<"Area of room:"<< obj401.calculateArea();
    cout<<"volume of room:"<< obj401.calculateVolume();
}


    









