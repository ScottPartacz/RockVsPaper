#include <iostream>
#include <time.h>
#include <stdlib.h> 

using namespace std;

void Scissors(char, char);
void Rock(char, char);
void Paper(char, char);
char ComputersPick();

int main()
{
	bool boolean;
	do
	{

		boolean = false;
		char player;
		char comp = ComputersPick();
		cout << "rock, paper, or scissors Please enter your choice as the first letter of each (Uppercase)" << endl;
		cin >> player;
		if (comp == player)
		{
			boolean = true;
			continue;
	    }
			switch (player)
			{
			case 'S': Scissors(comp, player);
				break;
			case 'R': Rock(comp, player);
				break;
			case 'P': Paper(comp, player);
				break;
			}
	} while (boolean);
	return 0;
}
void Paper(char computer, char player)
{
	if (computer == 'S')
		cout << "The Computer wins" << endl;
	else
		cout << "You win" << endl;
}

void Rock(char computer, char player)
{
	if (computer == 'P')
		cout << "The Computer wins" << endl;
	else
		cout << "You win" << endl;
}

void Scissors(char computer, char player)
{
	if (computer == 'R')
		cout << "The Computer wins" << endl;
	else
		cout << "You win" << endl;
}
char ComputersPick()
{
	int random;
	srand(time(NULL));
	random = rand() % 3 + 1;
	switch (random)
	{
	case 1: return 'R';
		break;
	case 2: return 'P';
		break;
	case 3: return 'S';
		break;
	}
	return 0;
}
