#include<graphics.h>
#include<stdio.h>
#include<conio.h>

int main()
{
	int gd=DETECT,gm;
	int x,y;
	initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
	x=getmaxx()/2;
	y=getmaxy()/2;

	outtextxy(x-100,50,"Ellipse Using Graphics in C");
	ellipse(x,y,0,360,120,60);
	getch();
	closegraph();
	return 0;
}