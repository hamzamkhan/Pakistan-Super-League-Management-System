#include "admin.h"
string enterpassword(){
		char ch;
		string fpassword;
		ch = getch();
        while(ch != 13)
		{
        fpassword.push_back(ch);
        cout << "*";
        ch = getch();
       }
       return fpassword;
     }
admin::admin()
	{
		cout<<"Enter Id : ";
		ps:
		fflush(stdin);	
		cin>>inputid;
		try{
		if(inputid=="123admin")
		{
			throw "Enter Password : ";
			}
			else 
			{
				cout<<"Enter Id again : ";
				goto ps;
			}
		}
		catch(const char* arr)
			{
			cout<<arr;
			fflush(stdin);	
			ps2:
		    inputpass=enterpassword();
			try{
				if(inputpass=="admin")
				{
					throw "\n\nAccess granted\n\n ";
				}
				else{
				cout<<"Enter Password again : ";
				goto ps2;	
				}
			}
			catch(const char* arr2)
			{
			cout<<arr;	
			}		
			}
	}
	int admin::choices()
	{
		fflush(stdin);
		cout<<"Enter choice \n\n";
		cout<<"1: View schedule \n\n";
		cout<<"2: Edit schedule \n\n";
		cout<<"3: Edit teams \n\n";
		cout<<"4: Last Viewers\n\n";
		cout<<"5: Edit Players\n\n";
		cout<<"6: Exit\n\n";
		cin>>choice;
		return choice;
	}
	void admin:: viewers()
		{
			int idxu=0;
			ifstream fe2("ADMIN\\USER.txt");
			char view[60][150];
			for( ; idxu<60 && fe2.getline(view[idxu], 150); ++idxu){}
	   	for(int i=0 ; i < idxu ; i++)
	   	{
	   		cout<<view[i]<<'\n';
	   	}
		}
