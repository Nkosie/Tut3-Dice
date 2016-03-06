#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
class Dice
{
	int	RolledNum;

public:
	Dice()
	{
		RolledNum = 0;
	}
	int roll()
	{
		RolledNum = (rand() % 6) + 1;
		return RolledNum;
	}

};
 
int main()
{
	Dice myDice;
	srand(static_cast<unsigned int>(time(0)));

	int num;
	cout << "Enter number of rolls u want:  ";
	cin >> num;
	for (int i = 0; i < num; i++)
	{
		
		cout << "Rolled number: " << myDice.roll() << endl;

	}
	
}