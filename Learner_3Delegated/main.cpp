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
	// Overloaded Constructors
	Monster();
	Monster(string name_val);
	Monster(string name_val, int serial_val, int health_val);
	Monster(string name_val, int serial_val, int health_val, int xp_val);
};


Monster::Monster() 
//    : name{"None"}, health{0}, xp{0} {}
	: Monster {"None", 0, 0, 0}
	{
		cout << "My name is 'None'" << endl;
	}

Monster::Monster(string name_val) 
//    : name{name_val} {}
	: Monster {name_val, 0, 0, 0}
	{
		cout << "My name is " << name_val << endl;
	}

Monster::Monster(string name_val, int serial_val, int health_val)
//    : name{name_val}, serial{0}, xp{0} {}
	: Monster {name_val, serial_val, health_val, 0}
	{
		cout << "My serial number is " << serial_val << endl;
	}

Monster::Monster(string name_val, int serial_val, int health_val, int xp_val)
    : name{name_val}, serial{0}, xp{0}, health{0} {}


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
//    Monster Jin_Pop {"Jin Pop", 1, 100};
//	Monster Jin_Pop;
	Monster Killen;
	Monster Jin_Pop {"Jin Pop"};
	Monster Lulu {"Lulu", 1, 2};
	Monster Healthy {"Healthy", 2, 40, 100};

//	char talks [50];
//	cout << "You say: ";
//	cin.getline(talks, 50);
//
//	Jin_Pop.speak(talks);
//
//	char my_name [50];
//	cout << "\nYour default name is '" << Jin_Pop.get_name() << "'. Choose a new name for your monster: ";
//	cin.getline(my_name, 50);
//
//	Jin_Pop.set_name(my_name);
//	cout << Jin_Pop.get_name();

	cout << endl;

    return 0;
}
