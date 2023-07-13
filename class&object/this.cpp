 #include<iostream>
 using namespace std;

 class A{
    private:
    int x;
    public:
    void getnum(int x)
    {
    
    this-> x==x;//obj1 ko address pauxa this le
    } 
    void shownum()
    {
    cout<<x;
    }
};
int main()
{
    A obj1,obj2;
    obj1.getnum(4);
    obj2.getnum(2);
    obj2.shownum();
    obj1.shownum();
    return 0;

}

