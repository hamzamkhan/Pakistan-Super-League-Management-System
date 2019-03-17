#ifndef ADMIN_H
#define ADMIN_H
#include <string.h>
#include <iostream>
#include <fstream>
#include <iostream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <unistd.h>
#include <conio.h>
using namespace std;
class admin
{
	int choice;
	string inputpass,inputid;
	public:
		admin();
		int choices();
		void viewers();
	protected:
};

#endif
