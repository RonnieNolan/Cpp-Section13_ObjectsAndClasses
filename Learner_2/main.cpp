#include <iostream>
#include <string>
#include "Monster.h"

using namespace std;

int main() 
{
    Monster Jin_Pop;

	char talks [50];
	cout << "You say: ";
	cin.getline(talks, 50);

	Jin_Pop.speak(talks);

	char my_name [50];
	cout << "\nYour default name is '" << Jin_Pop.get_name() << "'. Choose a new name for your monster: ";
	cin.getline(my_name, 50);

	Jin_Pop.set_name(my_name);
	cout << Jin_Pop.get_name();

	cout << endl;

    return 0;
}
