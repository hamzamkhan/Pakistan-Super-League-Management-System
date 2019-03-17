#include "schedule.h"
#include "PSL.h"
#include "funcs.h"
using namespace std;
int count=20;
schedule::schedule()
{
	idx=0;	
	ifstream fe("SCHEDULE\\VENUES.txt");
	ifstream fe2("SCHEDULE\\TEAMSMATCHES.txt");
	ifstream fe3("SCHEDULE\\DATES.txt");
	ifstream fe4("SCHEDULE\\times.txt");
	ifstream fe5("SCHEDULE\\matchstatus.txt");
	for(int i=0; fe.getline (venues[i],150) !=NULL ;i++){idx++;}
   	for(int i=0; fe2.getline(Teams[i],150)  !=NULL ;i++){}
	for(int i=0; fe3.getline(dates[i],150)  !=NULL ;i++){}
   	for(int i=0; fe4.getline(Time[i],150)   !=NULL ;i++){}
   	for(int i=0; i<idx ;i++){fe5.getline(status[i],150);}	
}
void schedule::viewschedule()
	{
		schedule();
		system("cls");
	cout<<"Match no\tVenues  \tTeams\t\tdates\t    Timings \t Match Status\n\n";
     
   	for(int i=0 ; i < idx ; i++)
   	{
   		matchnum[i]=i+1;
   	    cout <<"Match no "<<matchnum[i]<<"\t"<< venues[i]<<"\n";
   	}
  	for(int i=0 ; i < idx ; i++)
   	{
   		gotoxy(32,i+2);
        cout <<Teams[i]<<"\n";
   	}
   	for(int i=0 ; i < idx ; i++)
   	{
   		gotoxy(47,i+2);
        cout << dates[i]<<"\n";
   	}
   	
   	for(int i=0 ; i < idx ; i++)
   	{
   		gotoxy(60,i+2);
        cout << Time[i]<<"\n";
   	}
   	for(int i=0 ; i < idx && status[i]!=NULL ; i++)
   	{
   		gotoxy(73,i+2);
        cout << status[i]<<"\n";
   	}
}

void schedule::editschedule()
	{
		int choice;
		viewschedule();
		//Sleep(3000);
		system("cls");
		cout<<"\n\n\n\nEnter option \n\n1: Venues\n\n2: Teams\n\n3: Timings\n\n4: dates\n\n5: Match Status \n\n6: Add new schedule\n\n7: Delete schedule\n\n";
		cin>>choice;
		switch(choice)
		{
			case 1:
				{
					editvenues();
					break;
				}
			case 2:
				{
					editteams();
					break;
				}
			case 3:
				{
					edittime();
					break;
				}
			case 4:
				{
					editdates();
					break;
				}
			case 5:
			{
				matchstatus();
				break;
			}		
			case 6:
			{
				addschedule();
				count+=2;
				break;
			}
			case 7:
			{
				deleteschedule();
				break;
			}
				
		}
}
void schedule:: deleteschedule()
{
   	schedule();
   	viewschedule();
	ofstream outfile,outfile2,outfile3,outfile4,outfile5;
    outfile.open("SCHEDULE\\VENUES.txt");
    outfile2.open("SCHEDULE\\times.txt");
    outfile3.open("SCHEDULE\\DATES.txt");
    outfile4.open("SCHEDULE\\TEAMSMATCHES.txt");
    outfile5.open("SCHEDULE\\matchstatus.txt");
    idx--;
   		cout<<"Enter matchh number to delete ";
   		int num;
   		fflush (stdin);
   		cin>>num;
   	    strcpy(venues[num-1],"");
   	    strcpy(Teams[num-1],"");
   	    strcpy(dates[num-1],"");
   	    strcpy(Time[num-1],"");
   	    strcpy(status[num-1],"");
   	    matchnum[num-1]=0;
		for(int i=0;i<idx;i++)
        {
	   	if(venues[i]!="" && dates[i]!="" && Time[i]!="" && Teams[i]!="" && status[i]!="" && matchnum[i]!=0 )
	   	{
	   	outfile  << venues[i] << endl;
	   	outfile2 << Time[i] << endl;
	   	outfile3 << dates[i] << endl;
	   	outfile4 << Teams[i] << endl;
	   	outfile5 << status[i] << endl;
		}
	   	else {
	   		continue;
		   }
	   }
		}
void schedule:: editvenues()
{
	viewschedule();
	int matchnum;
	char cvenue[50];
	ofstream myfile ("SCHEDULE\\venues.txt");
	cout<<"enter match number ";
	rp:
	cin>>matchnum;
	try{
		if(matchnum>idx)
		{
			throw "\nwrong match number\n\nEnter again ";
		}
		else {
			goto cont;
		}
	}
	catch(const char* dis )
		{
			cout <<dis;
			goto rp;
		}
	cont:
	matchnum--;
	system("cls");
	cout<<"Enter changed vanue ";
	fflush(stdin);
	gets(cvenue);
	strcpy(venues[matchnum],cvenue);
	for(int i=0;i<idx;i++)
	{
		myfile << venues[i]<<endl;
	}
}
	void schedule:: edittime()
	{
	int matchnum;
	viewschedule();
	char ctime[50];
	ofstream myfile2 ("SCHEDULE\\times.txt");
	cout<<"enter match number ";
	rp:
	cin>>matchnum;
		try{
		if(matchnum>idx)
		{
			throw "\nwrong match number\n\nEnter again ";
		}
		else {
			goto cont;
		}
	}
	catch(const char* dis )
		{
			cout <<dis;
			goto rp;
		}
		cont:
	matchnum--;
	system("cls");
	cout<<"Enter changed time ";
	fflush(stdin);
	gets(ctime);
	strcpy(Time[matchnum],ctime);
	for(int i=0;i<idx;i++)
	{
		myfile2 << Time[i]<<endl;
	}	
	}
void schedule:: editdates()
	{
	viewschedule();	
	int matchnum;
	char cdate[50];
	matchnum--;
	ofstream myfile3 ("SCHEDULE\\DATES.txt");
	cout<<"enter match number ";
	rp:
	cin>>matchnum;
		try{
		if(matchnum>idx)
		{
			throw "\nwrong match number\n\nEnter again ";
		}
		else {
			goto cont;
		}
	}
	catch(const char* dis )
		{
			cout <<dis;
			goto rp;
		}
	 cont:	
	system("cls");
	cout<<"Enter changed txtE (DD//MM//YY) ";
	rep:
	fflush(stdin);
	gets(cdate);
	int n=strlen(cdate);
	try{
		if(n>8 || cdate[2]!='/' || cdate[5]!='/' )
		{
			throw "\nWrong date enetered\n Enter again \n\n";
		}
		else{
		strcpy(dates[matchnum],cdate);	
		}
	}
	catch(const char* msg)
	{
		cout<<msg;
		goto rep;
	}
	for(int i=0;i<idx;i++)
	{
		myfile3 << dates[i]<<endl;
	}	
	}
void schedule:: editteams()
	{
	viewschedule();	
	int matchnum;
	char cteams[50];
	ofstream myfile4 ("SCHEDULE\\TEAMSMATCHES.txt");
	cout<<"enter match number ";
	rp:
	cin>>matchnum;
		try{
		if(matchnum>idx)
		{
			throw "\nwrong match number\n\nEnter again ";
		}
		else {
			goto cont;
		}
	}
	catch(const char* dis )
		{
			cout <<dis;
			goto rp;
		}
	 cont:	
	matchnum--;
	system("cls");
	cout<<"Enter changed teams";
	fflush(stdin);
	repe:
	gets(cteams);
	int len=strlen(cteams);
	try{
	if(len>10  )
	{
		throw "\nWrong Input\n Enter again \n\n";
	}
	else{
	strcpy(Teams[matchnum],cteams);
	for(int i=0;i<idx;i++)
	{
		myfile4 << Teams[i]<<endl;
	}
	}
	}
	catch(const char* msg)
	{
		cout<<msg;
		goto repe;
	}	
}
	void schedule::matchstatus()
			{
			viewschedule();	
			int matchnum;
			char ct[50];
			ofstream myfile4 ("SCHEDULE\\matchstatus.txt");
			cout<<"enter match number ";
			rp:
			cin>>matchnum;
				try{
				if(matchnum>idx)
				{
					throw "\nwrong match number\n\nEnter again ";
				}
				else {
					goto cont;
				}
			}
			catch(const char* dis )
				{
					cout <<dis;
					goto rp;
				}
			 cont:	
			matchnum--;
			cout<<"Enter Status \n E.G : ABC won";
			rep:
			fflush(stdin);
			gets(ct);
			try{
				if(strlen(ct)>7)
				{
					throw "Wrong input\n\nEnter again ";
				}
				else{
					goto cont2;
				}
			}
			catch (const char *msg)
			{
				cout<<msg;
				goto rep;
			}
			cont2:
			system("cls");
			strcpy(status[matchnum],ct);
			for(int i=0;i<idx;i++)
			{
				myfile4 << status[i]<<endl;
			}	
			}
		void schedule ::addschedule()
		{
	char date[50];
		ofstream ffe("SCHEDULE\\venues.txt",ios::app);
		ofstream ffe2("SCHEDULE\\TEAMSMATCHES.txt",ios::app);
		ofstream ffe3("SCHEDULE\\DATES.txt",ios::app);
		ofstream ffe4("SCHEDULE\\times.txt",ios::app);
		int num;
		num=matchnum[idx];
		cout<<endl<<matchnum[idx]<<endl;
		fflush(stdin);
		cout<<"Enter venue ";
		gets(venues[num-1]);
		ffe<<venues[num-1]<<'\n';
		fflush(stdin);

		cout<<"Enter teams ";
		gets(Teams[num]);
		ffe2<<Teams[num]<<'\n';
		fflush(stdin);
		
		cout<<"Enter date DD//MM//YY ";
		rep2:
		gets(date);
		int n=strlen(date);
			try{
				if(n>8 || date[2]!='/' || date[5]!='/' )
				{
					throw "\nWrong date enetered\n Enter again \n\n";
				}
				else{
							ffe3<<date<<'\n';
				}
			}
			catch(const char* msg)
			{
				cout<<msg;
				goto rep2;
			}


		fflush(stdin);
		
		cout<<"Enter time ";
		gets(Time[num]);
		ffe4<<Time[num]<<'\n';
		fflush(stdin);
		idx++;
		idx2++;
		idx3++;
		idx4++;	
		idx5++;
	
}
	
