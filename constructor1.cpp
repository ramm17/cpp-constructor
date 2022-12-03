#include<iostream>
#include<conio.h>
using namespace std;
class Game
{
    private:
      int goals;//data member
    public:
        Game() // consructor used to initialize
        {
            goals = 0;
        }
        int getGoals() //functional
        {
            return goals;
        }
        void incrementGoal()//function2
        {
            goals++;
        }
};
int main()
{
    Game football;//object create
    cout<< "\nNumber of goals when game is started = "<< football.getGoals() <<endl;//0
    football.incrementGoal();//goals=1
    football.incrementGoal();//goals=2
    cout<< "Number of goals a little later = "<< football.getGoals() <<endl;//2
    getch();
    return 0;
}
