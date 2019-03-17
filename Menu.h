#include <iostream>
#include <string>
#include "funcs.h"

using namespace std;

int menu()
{
	string Menu[3] = {"User", "Admin","Exit"};
	int pointer = 0;
	while(true)
	{
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		
		rectangle(0,0);
		gotoxy(1,1);
		cout << "Main Menu\n\n";
		for (int i = 0; i < 3; ++i)
		{
			//gotoxy(2,i+6);
			if (i == pointer)
			{
				
				if(i==0)
				{
				rectangle(0,i+4);
				gotoxy(2,i+5);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< Menu[i] <<"\n\n";		
				}
				else if(i==2)
				{
				rectangle(0,i+6);
				gotoxy(2,i+7);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< Menu[i] <<"\n\n";		
				}
				else
				{
				rectangle(0,i+5);
				gotoxy(2,i+6);
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< Menu[i] <<"\n\n";		
				}
			}
			else
			{
				if(i==0)
				{
					gotoxy(2,5);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout <<" "<< Menu[i] << "\n\n";
				}
				else if(i==1)
				{
					gotoxy(2,7);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< Menu[i] << "\n\n";	
				
				}
				else if(i==2)
				{
					gotoxy(2,9);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< Menu[i] << "\n\n";	
				
				}
				else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout <<" "<< Menu[i] << "\n\n";	
				}
				
			}
			
		}
		
		while(true)
		{
			if (GetAsyncKeyState(VK_UP) != 0)
			{
				pointer -= 1;
				if (pointer == -1)
				{
					pointer = 2;
				}
				break;
			}

			if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				
				if (pointer == 3)
				{
					pointer = 0;
				}
				break;
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
						FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		
				system("cls");
				return pointer;
				break;
			}
		}
		Sleep(150);
		
		
	}
	
}

