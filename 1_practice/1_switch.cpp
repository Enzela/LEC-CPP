#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"enter an alphabet:";
    cin>>ch;

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