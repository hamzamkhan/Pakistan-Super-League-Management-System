#ifndef PLAYERS_H
#define PLAYERS_H

#include <string>
#include <iostream>
#include <string.h>
using namespace std;
class players
{
	public:
	players();
	char Teams[90][200],pzalmi[90][200],iunited[90][200],kkings[90][200],lqalandars[90][200],qgladiators[90][200];
	string playername;
	char pzalmi2[90][200],iunited2[90][200],kkings2[90][200],lqalandars2[90][200],qgladiators2[90][200],playername2[30],general[90][200];
	int id=0,id2=0,id3=0,id4=0,id5=0,id6=0,tno;
	char ch;
	string ext=".txt";
	string ext2="PLAYERS\\";
	void deleteplayers();
	void viewplayers(int tno);
	protected:
};

#endif
