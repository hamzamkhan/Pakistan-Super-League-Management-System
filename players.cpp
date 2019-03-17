#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>
#include "players.h"

using namespace std;
#include "schedule.h"
players::players()
{
	
}
void players::deleteplayers()
		{
			cout<<"Enter Name Of The Player To Delete : ";
			fflush(stdin);
			getline(cin,playername);
			playername=ext2+playername+ext;
			ofstream outfile;
			outfile.open(playername);
			for(int i=0;i<90;i++)
			{
			
					strcpy(general[i],"");
					outfile<<general[i]<<endl;
			}
		}
void players::viewplayers(int tno)
		{
			switch(tno)
   			{
   				case 1:
   					{
   					system("cls");	
   					int num=1;
   					fflush(stdin);
   					ifstream pl1("TEAMS\\Islamabad United.txt");
   					system("cls");
   					cout<<"\tPLAYERS"<<endl;
   					id2=0;
   					for(;id2<90 && pl1.getline(iunited[id2],200);++id2){
					   }
						
					for(int i=5;i<id2;i++)
					{
						cout<<num<<". "<<iunited[i]<<"\n";
						num++;
					}
					cout<<"Do You Want To View History Of Any Player?(Y|N)";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						
						cout<<"Enter Name Of Player : ";
						fflush(stdin);
						getline(cin,playername);
						ext2=ext2+playername;
						ext2=ext2+ext;
						system("cls");
						cout<<playername;
						ifstream obj(ext2);
						for(;id2<90 && obj.getline(iunited2[id2],200);++id2){
					   }
					   //gotoxy(0,2);
					   for(int i=0;i<id2;i++)
					{
						cout<<iunited2[i]<<"\n";
					}
						
					}
					break;
					   }
				
				case 2:
					{
						system("cls");
						id3=0;
					ifstream pl2("TEAMS\\Karachi Kings.txt");
   					system("cls");
   					cout<<"\t\tPLAYERS"<<endl;
   					for(;id3<90 && pl2.getline(kkings[id3],200);++id3){
					   }
					for(int i=0;i<id3;i++)
					{
						cout<<i+1<<"."<<kkings[i]<<"\n";
					}
						cout<<"Do You Want To View History Of Any Player?(Y|N)";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						cout<<"Enter Name Of Player : ";
						fflush(stdin);
						getline(cin,playername);
					     ext2=ext2+playername;
						 ext2=ext2+ext;
						 system("cls");
						 cout<<"\n"<<playername<<"\n\n";
							ifstream obj(ext2);
						for(;id2<90 && obj.getline(iunited2[id2],200);++id2){
					   }
					 //  gotoxy(0,2);
					   for(int i=0;i<id2;i++)
					{
						cout<<iunited2[i]<<"\n";
					}
						
					}
					break;
					}
				
				case 3:
					{
					system("cls");	
					ifstream pl3("TEAMS\\Lahore Qalandars.txt");
   					system("cls");
   					cout<<"\t\tPLAYERS"<<endl;
   					for(;id4<90 && pl3.getline(lqalandars[id4],200);++id4){
					   }
					for(int i=0;i<id4;i++)
					{
					//	gotoxy(0,i+2);
						cout<<i+1<<"."<<lqalandars[i]<<"\n";
					}
						cout<<"Do You Want To View History Of Any Player?(Y|N)";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						cout<<"Enter Name Of Player : ";
						fflush(stdin);
						getline(cin,playername);
						ext2=ext2+playername;
						ext2=ext2+ext;
						system("cls");
						cout<<"\n"<<playername<<"\n\n";
						
						ifstream obj(ext2);
						for(;id2<90 && obj.getline(iunited2[id2],200);++id2){
					   }
				//	   gotoxy(0,2);
					   for(int i=0;i<id2;i++)
					{
						cout<<iunited2[i]<<"\n";
					}
						
					}
					break;
					}
				
				case 4:
					{
					system("cls");	
					ifstream pl4("TEAMS\\Peshawar Zalmi.txt");
   					system("cls");
   					cout<<"\t\tPLAYERS"<<endl;
   					for(;id5<90 && pl4.getline(pzalmi[id5],200);++id5){
					   }
					for(int i=0;i<id5;i++)
					{
					//	gotoxy(0,i+2);
						cout<<i+1<<"."<<pzalmi[i]<<"\n";
					}
						cout<<"Do You Want To View History Of Any Player?(Y|N)";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						cout<<"Enter Name Of Player : ";
						fflush(stdin);
						getline(cin,playername);
						ext2=ext2+playername;
						ext2=ext2+ext;
						system("cls");
						 cout<<"\n"<<playername<<"\n\n";
						ifstream obj(ext2);
						for(;id2<90 && obj.getline(iunited2[id2],200);++id2){
					   }
				//	   gotoxy(0,2);
					   for(int i=0;i<id2;i++)
					{
						cout<<iunited2[i]<<"\n";
					}
						
					}
					break;
					}
				
				case 5:
					{
					system("cls");	
					ifstream pl5("TEAMS\\Quetta Gladiators.txt");
   					system("cls");
   					cout<<"\t\tPLAYERS"<<endl;
   					for(;id6<90 && pl5.getline(qgladiators[id6],200);++id6){
					   }
					for(int i=0;i<id6;i++)
					{
					//	gotoxy(0,i+2);
						cout<<i+1<<"."<<qgladiators[i]<<"\n";
					}
						cout<<"Do You Want To View History Of Any Player?(Y|N)";
					cin>>ch;
					if(ch=='Y'||ch=='y')
					{
						cout<<"Enter Name Of Player : ";
						fflush(stdin);
						getline(cin,playername);
						ext2=ext2+playername;
						ext2=ext2+ext;
						system("cls");
						cout<<"\n"<<playername<<"\n\n";
						ifstream obj(ext2);
						for(;id2<90 && obj.getline(iunited2[id2],200);++id2){
					   }
				//	   gotoxy(0,2);
					   for(int i=0;i<id2;i++)
					{
						cout<<iunited2[i]<<"\n";
					}
						
					}
					break;
					}
				
				default:
					{
					cout<<"Wrong Team Number!"<<endl;
					break;
					}
			}
}
