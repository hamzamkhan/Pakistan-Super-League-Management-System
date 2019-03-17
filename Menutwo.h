#ifndef Menutwo_H
#define Menutwo_H
#include<iostream>
#include<string>
#include<cstring>
#include "funcs.h"

using namespace std;
inline int menu2()
{
	string func[5]={"view Schedule","view Teams","view Players","view Standings","EXIT"};
    int pointer=NULL;
	while(true)
	{
		FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
		system("cls");
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		gotoxy(1,1);
		for (int i = 0; i < 5; ++i)
		{
			//gotoxy(2,i+6);
			if (i == pointer)
			{
				
				if(i==0)
				{
				
				rectangle(2,i+4);
				gotoxy(1,i+5);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
				else if(i==2)
				{
				rectangle(2,i+6);
				gotoxy(1,i+7);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
				else if(i==3)
				{
				rectangle(2,i+7);
				gotoxy(1,i+8);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
				else if(i==4)
				{
				rectangle(2,i+8);
				gotoxy(1,i+9);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
				else if(i==5)
				{
				rectangle(2,i+9);
				gotoxy(1,i+10);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
				else
				{
				rectangle(2,i+5);
				gotoxy(1,i+6);
				cout<<">";
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
				cout <<" "<< func[i] <<"\n\n";		
				}
			}
			else
			{
				//Sleep(1000);
			/*	if(i==0)
				{
				gotoxy(2,6);	
				}*/
				if(i==0)
				{
					gotoxy(2,5);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout <<" "<< func[i] << "\n\n";
				}
				else if(i==1)
				{
					gotoxy(2,7);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< func[i] << "\n\n";	
				
				}
				else if(i==2)
				{
					gotoxy(2,9);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< func[i] << "\n\n";	
				
				}
				else if(i==3)
				{
					gotoxy(2,11);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< func[i] << "\n\n";	
				
				}
				else if(i==4)
				{
					gotoxy(2,13);
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< func[i] << "\n\n";	
				
				}
				else if(i==5)
				{
					gotoxy(2,15);
					
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				    cout <<" "<< func[i] << "\n\n";	
				
				}
				else {
				SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
				cout <<" "<< func[i] << "\n\n";	
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
					pointer = 4;
				}
				break;
			}

			if (GetAsyncKeyState(VK_DOWN) != 0)
			{
				pointer += 1;
				
				if (pointer == 5)
				{
					pointer = 0;
				}
				break;
				FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			
			}
			else if (GetAsyncKeyState(VK_RETURN) != 0)
			{
				cin.clear();
				return pointer;
				system("cls");
				break;
			}
		}
		Sleep(150);
}
}
#endif
