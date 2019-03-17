#include "user.h"
#include "user.h"
#include <fstream>
#include <iostream>
#include <windows.h>
#include "menutwo.h"
using namespace std;
user::user()
{
		ofstream uu("ADMIN\\USER.txt",ios::app);
		fflush(stdin);
		cout<<"Enter your name \n";
		gets(name);
		uu<<"Viewed by "<<name<<endl;
		uu<<dt<<endl;
		fflush(stdin);
		system("cls");
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			
}
int user :: choice()
{
	int nums=NULL;
	fflush(stdin);
	cin.clear();
	system("cls");
	nums=menu2();
	cin.clear();
	return nums;
}
