#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;
class Dice
{
	int	RolledNum;
	float SumRlld;

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

	float avarege(Dice inDice, int num)
	{
		float Avrg = 0.0;
		cout << "Sum of rolled numbers: " << SumRlld<<endl;
		Avrg = SumRlld / num;
		return Avrg;
	}

	float avarege(int Arr[100], int num)
	{
		float Avg=0;
		for (int i = 0; i < num; i++)
		{
			Avg += Arr[i];
		}

		cout << "Sum of array rolled numbers: " << Avg << endl;
		Avg = Avg / num;

		return Avg;
	}
};
 
int main()
{
	Dice myDice;
	srand(static_cast<unsigned int>(time(0)));

	int num=0;
	int Arr[100] = { 0 };

	cout << "Enter number of rolls u want:  ";
	cin >> num;

	for (int i = 0; i < num; i++)
	{
		cout << "Rolled number: " << myDice.roll() << endl;		
	}
	cout << "Avarege rolled numbers: " << myDice.avarege(myDice, num) <<endl<< endl;


	for (int i = 0; i < num; i++)
	{
		Arr[i] = myDice.roll();
		cout <<"Rolled to an Array: "<< Arr[i] << endl;
	}
	cout << "Avarege rolled numbers: " << myDice.avarege( Arr, num) <<endl<< endl;
}