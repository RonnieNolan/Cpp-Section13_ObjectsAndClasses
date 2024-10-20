#include "Monster.h"
#include <string>
#include <iostream>

using namespace std;

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
