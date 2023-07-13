#include<iostream>
using namespace std;
char ch[20];
void name(){
     
    cout<<"enter an alphabet:";
    cin>>ch;
    }
    void name()
    {
        cout<<ch;
        return 

    }


int main(){
    char ch,a;
    cout<<"enter an alphabet:";
    cin>>ch;
    a=name();

    switch(ch){
        case 'a': // hello
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':

        cout<<"vowel";
        break;

        default:
        cout<<"consonant";}
        return 0;
}