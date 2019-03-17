#ifndef funcs
#define funcs
#include <windows.h>
#include <iostream>
using namespace std;
inline void gotoxy( int column, int line )
  {
  COORD coord;
  coord.X = column;
  coord.Y = line;
  SetConsoleCursorPosition(
    GetStdHandle( STD_OUTPUT_HANDLE ),coord);
  }
inline void rectangle(int x,int y,int l=15,int h=2,int n=0){
	if(y<8)
	{
		l=10;
	}
else if(y==12)
{
	l=16;
 }
 else if ( y==10)
 {
 	l=22;
 }
 
 else if ( y==14 || y==16)
 {
 	l=20;
 }
 else if (y==18)
 {
 	l=8;
 }
gotoxy(x,y);
printf("%c",218);
gotoxy(x+l,y);
printf("%c",191);
gotoxy(x,y+h);
printf("%c",192);
gotoxy(x+l,y+h);
printf("%c",217);
for(n=1;n<l;n++)
{
gotoxy(x+n,y);
printf("%c",196);
gotoxy(x+n,y+h);
printf("%c",196);
}
for(n=1;n<h;n++)
{
gotoxy(x,y+n);
printf("%c",179);
gotoxy(x+l,y+n);
printf("%c",179);
}
gotoxy(39,12);
}

#endif
