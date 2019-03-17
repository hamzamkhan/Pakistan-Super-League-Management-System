#include "PSL.h"
#include "user.h"
#include "admin.h"
#include "Menutwo.h"
void PSL::gotoxy(int column,int line)
{
COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),
    coord
    );	
} 
PSL::PSL(int num,schedule CS,players CP):Ps(CS)
{
	pl=CP;
		switch(num)
		{
		case 0:
			{
			user u1;
			cin.clear();
			us:
			fflush(stdin);
			system("cls");
			fflush(stdin);
			FlushConsoleInputBuffer(GetStdHandle(STD_INPUT_HANDLE));
			num2=u1.choice();
			cin.clear();
			switch(num2)
			{
				case 0:
				{
					char me=0;
					while(me!=8)
					{
					me=0;
					Ps.viewschedule();
				//	gotoxy(0,count);
					
					cout<<"Press backspace to go back...\n";
					me=getch();
					fflush(stdin);
					system("cls");
					}
					goto us;	
				}
				case 1:
					{
						system("cls");
						char chn=0;
						while(chn!=8)
						{
						t1.viewteams();
						cout<<"\npress backspace to back... \n";
						chn=getch();
						fflush(stdin);
						system("cls");
						}
						goto us;	
					}
					case 2:
					{
						int tno;
						system("cls");
   						fflush(stdin);
   						t1.viewteams();
   						cout<<"\nEnter Team Number : ";
   						cin>>tno;
						system("cls");
						char my=0;
						while(my!=8)
						{
							my=0;
							pl.viewplayers(tno);
							cout<<"\npress backspace to back... \n";
							my=getch();
							fflush(stdin);
							system("cls");
						}
						goto us;
					}
					
					case 3:
					{
						system("cls");
   						s1.viewstandings();
						system("cls");
						char my=0;
						while(my!=8)
						{
							my=0;
							s1.viewstandings();
							cout<<"\npress backspace to back... \n";
							my=getch();
							fflush(stdin);
							system("cls");
						}
						goto us;
					}
					
					case 4:
					exit(0);
			}
			break;	
			}
		case 1:
			{
			admin a1;
			//Sleep(2000);
			rep:
			system("cls");
			num3=a1.choices();
			switch(num3)
			{
				case 1:
					{
					char ch1=0;
					system("cls");	
					while(ch1!=8)
					{
					Ps.viewschedule();
					//gotoxy(0,count);
					cout<<"press backspace to go back...\n";
					ch1=getch();
					system("cls");	
					}
					goto rep;
					
					}
				case 2:
					{
					char ch1=0;
					system("cls");	
					while(ch1!=8)
					{
					Ps.editschedule();
					cout<<"press backspace to go back...\n";
					ch1=getch();
					system("cls");	
					}
					goto rep;	
					}
				case 3:
					{
					char chm=0;
					system("cls");
					while(chm!=8)
					{
					cout<<"Option not avalaible\n\n";	
					cout<<"press backspace to go back...\n";
					chm=getch();
					system("cls");	
					}
					goto rep;
					}	
				case 4:
				{
					char ch=0;
					system("cls");
					while(ch!=8)
					{
					a1.viewers();
					cout<<"press backspace to go back...\n";
					ch=getch();
					system("cls");	
					}
					
					goto rep;
				}
				case 5: 
				{
		
					char my=0;
					system("cls");
					while(my!=8)
					{
						pl.deleteplayers();
						cout<<"\npress backspace to back....\n";
						my=getch();
						system("cls");
					}
							goto rep;
				}

				case 6:
				exit(0);
						
			}
			break;	
			}
			case 2:
			exit(0);	
	}
	}

