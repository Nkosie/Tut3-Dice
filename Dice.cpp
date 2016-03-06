#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
class Dice
{
	int	RolledNum;
	int SumRlld;

public:
	Dice()
	{
		RolledNum = 0;
		SumRlld = 0;
	}
	int roll()
	{
		RolledNum = (rand() % 6) + 1;
		SumRlld += RolledNum;

		return RolledNum;
	}
	float avarege(int num)
	{
		cout << "Sum of rolled numbers: " << SumRlld << endl<<endl << endl;
		return (SumRlld / num);
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
		myDice.avarege(num);
	}
	cout << "Avarege rolled numbers: " << myDice.avarege(num) << endl;
}