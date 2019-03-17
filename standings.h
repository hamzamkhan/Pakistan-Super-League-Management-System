#ifndef STANDINGS_H
#define STANDINGS_H
#include "teams.h"
#include "schedule.h"
class standings: public teams,public schedule
{
	public:
		int KKpoint=0;
		int PZpoint=0;
		int QGpoint=0;
		int LQpoint=0;
		int IUpoint=0;
		int points[5]={0};
		standings();
		teams t1;
		void viewstandings();
	protected:
};

#endif
