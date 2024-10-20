#include <iostream>
#include <string>

using namespace std;

class Monster
{
private:
	// attributes
	string name {"Monster"};
	int serial;
	int health;
	int xp;
public:
	// methods
	void speak(string says);
	void set_name(string name_val);
	string get_name();
};


void Monster::speak(string says)
{
	cout << name << " says: " << says << endl;
}


void Monster::set_name(string name_val)
{
	name = name_val;
}


string Monster::get_name()
{
	return name;
}


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
