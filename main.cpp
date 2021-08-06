#include <bits/stdc++.h>
#include <iostream>
using namespace std;
#include "utils.h"
int main()
{
    string name1,password1;
    cout<<"Enter Name:- ";
    cin>>name1;
    cout<<"Enter password:- ";
    cin>>password1;
    if(login(name1,password1))
    cout<<"Success!";
    else
    cout<<"Login Failed :(";
}
