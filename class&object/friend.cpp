#include<iostream>
  using namespace std;
  
  class sample
{
    float mean;
    friend float mean(sample s);//private member  from outside the member lai access garxa friend le
    private:
    float num1, num2;
    public:
    void getdata()
    {
        float a,b;
        cout<<"tnput data:"<<endl;
        cin>>a>>b;
        num1=a;
        num2=b;
    }
};
float mean(sample s)//object as parameter
{
    float m;
    m=(s.num1+s.num2)/2;
    return m;
}
int main()
{
    sample s;//aafnai aafnai attribute rakhxa
    s.getdata();
    cout<<"mean:"<<mean(s)<<endl;
}



