#include "teams.h"
#include <iostream>
using namespace std;

teams::teams()
{
}
void teams::viewteams()
		{	
			for(int i=0 ; i < 5 ; i++)
   			{
   				//gotoxy(0,i+3);
        		cout<<i+1<<". "<<Teams2[i]<<"\n\n";
   			}
		}
