#include<iostream>
#include<conio.h>
using namespace std;
class prime
{
private:
    int i,num,temp;
public:
    prime (int a)
    {
        num = a;
    }
    void calculation()
    {
        temp=0;
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                temp++;
            }
        }
    }
    void display()
    {
        if(temp==1)
        {
            cout<<num<<" is neither prime nor composite number";
        }
        else if (temp==2)
        {
            cout<<num<<" is prime number";
        1}
        else
        {
            cout<<num<<"
            is composite number";
        }
    }
};
int main()
{
    int num;
    cout<<"Enter any number: ";
    cin>>num;
    prime ob(num);
    ob.calculation();
    ob.display();
    getch();
    return 0;
}
