#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <fstream>
#include <iostream>
#include <string>
#include <conio.h>
#include <windows.h>

using namespace std;


class schedule
{
	public:
		int idx=0,idx2=0,idx3=0,idx4=0,idx5=0;
		char venues[20][60],Time[20][60],Teams[20][60],dates[20][60],status[20][60];
		int matchnum[100];
	
		schedule();
		void editschedule();
		void editvenues();
		void edittime();
		void editdates();
		void editteams();
		void viewschedule();
		void matchstatus();
		void addschedule();
		void deleteschedule();	
};

#endif
