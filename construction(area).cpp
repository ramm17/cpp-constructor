#include<iostream>
#include<conio.h>
using namespace std;
class Area
{
    private:
      int length;
      int breadth;
    public:
        Area() //Constructor
        {
            length = 5;
            breadth = 2;
        }
        void GetLength()
        {
            cout<<"Enter length and breadth respectively: \n";
            cin >> length >> breadth;
        }
        int AreaCalculation()
        {
            return (length * breadth);
        }
        void DisplayArea(int temp)
        {
            cout << " Area: "<< temp;
        }
};
int main()
{
    Area A1, A2;//object create
    int temp;
    A1.GetLength();
    temp = A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout<< endl << "\nDefault Area when value is not take from user:" << endl;
    temp = A2.AreaCalculation();
    A2.DisplayArea(temp);
    getch();
    return 0;
}

