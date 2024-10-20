#ifndef _MONSTER_H_
#define _MONSTER_H_

#include <string>
#include <iostream>

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

#endif // _MONSTER_H_
