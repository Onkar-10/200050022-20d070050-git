#include "passwords.h"

bool login(string name, string password)
{
    if(!find_user(name))
    return false;
    else
    {
         if(get_password(name)==password)
         return true;
         else
         return false;
    }
}