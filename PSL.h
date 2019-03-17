#ifndef PSL_H
#define PSL_H
#include "players.h"
#include "schedule.h"
#include "teams.h"
#include "standings.h"

class PSL
{
	public:
		schedule Ps;
		teams t1;
		players pl;
		standings s1;
		PSL(int num,schedule CS,players CP);
		int num2,num3;	
		char ch;
	    void gotoxy(int column,int line);
		protected:
};

#endif
