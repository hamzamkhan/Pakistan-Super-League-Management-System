#include "standings.h"
#include "teams.h"
#include "schedule.h"
standings::standings():teams(),schedule()
{
		for(int i=0;i<idx;i++)
		{
			if(strcmp(status[i],"IU won")==0)
			{
				points[i]+=2;
			}
			else if(strcmp(status[i],"KK won")==0)
			{
					points[i]+=2;
			}
			else if(strcmp(status[i],"LQ won")==0)
			{	
				points[i]+=2;;
					}
			else if(strcmp(status[i],"QG won")==0)
			{
				 points[i]+=2; 
			}
			else if(strcmp(status[i],"PZ won")==0)
			{
				 points[i]+=2;
			}
		}
		}
void standings :: viewstandings()
{
	cout<<endl;
	cout<<"|---------------------|--------------|\n";
	cout<<"|     Teams           |    Points    |\n";
	cout<<"|---------------------|--------------|\n";
	cout<<"| "<<Teams2[0]<<"   |      "<<points[0]<<"       |\n";
	cout<<"|---------------------|--------------|\n";
	cout<<"| "<<Teams2[1]<<"      |      "<<points[1]<<"       |\n";
	cout<<"|---------------------|--------------|\n";
	cout<<"| "<<Teams2[2]<<"  |      "<<points[2]<<"       |\n";
	cout<<"|---------------------|--------------|\n";
	cout<<"| "<<Teams2[3]<<"   |      "<<points[3]<<"       |\n";
	cout<<"|---------------------|--------------|\n";
	cout<<"| "<<Teams2[4]<<"     |      "<<points[4]<<"       |\n";
	cout<<"|---------------------|--------------|\n";

}
