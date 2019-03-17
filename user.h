#ifndef USER_H
#define USER_H
#include <ctime>
class user
{
	int cho;
	char name[50];
	time_t now = time(0);
    char* dt = ctime(&now);
	public:
		user();
		int choice();
	protected:
};

#endif
