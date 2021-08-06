#include "passwords.h"

bool login(string name, string password)
{
	if (userids.find(name)==userids.end())
		return false;
	int user_id=userids[name];
	if (passwords[user_id]==password) return true;
	return false;
}
