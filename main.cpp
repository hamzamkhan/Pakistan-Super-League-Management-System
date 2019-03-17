#include <iostream>
using namespace std;
#include <fstream>
#include <cstdlib>
#include <string>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <sstream>
#include <unistd.h>
#include <conio.h>
#include <ctime>
#include "schedule.h"
#include "PSL.h"
#include "Menu.h"
#include "Menutwo.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) 
{
	while(1)
 	{
 	int n;	
 	n=menu();	
 	schedule s1;	
 	cout<<"1-user\n2-admin\n3-exit";
 	//int n;
	 //int n=printmenu();
 	//cout<<'\n'<<n;
 	fflush(stdin);
 	//cin>>n;
 	players PP;
 	system("CLS");
 	{
 	PSL p1(n,s1,PP);	
	 }
	 
 	}

	return 0;
}
