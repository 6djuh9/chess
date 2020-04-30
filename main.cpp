#include <iostream>
#include <string>
#include "chess.h"

using namespace std;





int main()
{
	Board b;
	string s;
	bool newgame = true;
	cout << "If u wont load game - push L." << endl << "Enter any key to continue" << endl;
	cin >> s;

	if (s != "L")
	{
		while (newgame) {
			b.setBoard();
			while (b.playGame());
			cout << "Do you want to play again? (y for yes, anything else for no) ";
			cin >> s;
			if (s != "y")
				newgame = false;
		}
	}
	else
	{
		/*while (newgame) {
			b.loadBoard();
			while (b.playGame());
			cout << "Do you want to play again? (y for yes, anything else for no) ";
			cin >> s;
			if (s != "y")
				newgame = false;
		}*/
	}

	return 0;
}