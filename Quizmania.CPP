#include<stdio.h>
#include<conio.h>
#include<dos.h>
void quiz()
{
	gotoxy(5,2);
	textcolor(5);
	cprintf("==============================");
	gotoxy(5,3);
	cprintf("********* QUIZ MANIA *********");
	gotoxy(5,4);
	cprintf("==============================");
}
void score()
{
	textcolor(14);
	gotoxy(15,6);
	cprintf("Score:");
}
void menu()
{
	textcolor(9);
	gotoxy(6,5);
	cprintf("a.QUICK MANIA");
	gotoxy(6,6);
	cprintf("b.FUNDA MANIA");
	gotoxy(6,7);
	cprintf("c.MAGIC MANIA");
	textcolor(8);
	gotoxy(5,8);
	printf("Please select one:");
}
void main()
{
	int b=0,c=1,e=-1,j,d,x,y,g=4,h=4;
	char a,l,q;
	clrscr();
	quiz();
	getch();
	menu();
	a=getch();
	if(a=='a')
	{
		clrscr();
		quiz();
		menu();
		textcolor(6+BLINK);
		gotoxy(6,5);
		cprintf("a.QUICK MANIA");
		delay(1200);
		b++;
		goto out;
	}
	else if(a=='b')
	{
		clrscr();
		quiz();
		menu();
		textcolor(6+BLINK);
		gotoxy(6,6);
		cprintf("b.FUNDA MANIA");
		delay(1200);
		b=b+2;
		//goto out1;
	}
	else if(a=='c')
	{
		clrscr();
		quiz();
		menu();
		textcolor(6+BLINK);
		gotoxy(6,7);
		cprintf("c.MAGIC MANIA");
		delay(1200);
		b=b+3;
		//goto out2;
	}

	out:
	if(b==1)
	{
       up:
	clrscr();
	textcolor(10);
	gotoxy(3,2);
	cprintf("****** Welcome to Quick Mania ******");
	gotoxy(3,3);
	cprintf("====================================");
	if(g==4)
	getch();
	gotoxy(5,4);
	printf("Here's Your Options");
	getch();
	textcolor(14);
	for(int i=1;i<4;i++)
	{

		if(h==5)
		{
		 c=1,d=0,j=0,e=-1;
		}
		for( j=0,d=0;d<30,j<10;j++)
		{
			gotoxy(3+j+d,5+i);
			cprintf("%d ",c+j);
			delay(100);
			d=d+3;
			if(j==9)
			{
			e++;
			}
			if(h==5)
			{
			h++;
			}
		}
		c=(j*i)+i-e;
	}

	gotoxy(4,10);
	printf("Please Select one:");
	textcolor(BLACK);
	cscanf("%d",&x);

	if(x<=10)
	{
		if(x==1)
		gotoxy(x*3,6);
		else
		gotoxy(x*3+(x-1),6);
		textcolor(6+BLINK);
		cprintf("%d",x);
		delay(1000);
		//s=getch();
		if(x==1)
		{
			textcolor(13);
			gotoxy(4,12);
			cprintf("Which is longest river in the world?");
			gotoxy(4,13);
			cprintf("a.Karnali");
			printf("\t");
			cprintf("b.Jordan");
			gotoxy(4,14);
			cprintf("c.Nile");
			printf("\t");
			cprintf("d.Narayani");
			l=getch();
			if(l=='c')
			{
				gotoxy(4,14);
				textcolor(14+BLINK);
				cprintf("c.Nile");
				delay(800);
				gotoxy(6,15);
				cprintf("Correct Answer");
				gotoxy(4,16);
				printf("Wanna play more y/n");
				q=getch();
				g++;
				h++;
			       if(q=='y')
				goto up;
				else
				goto btm;
			}
			else if(l=='a')
			{
				gotoxy(4,13);
				textcolor(14+BLINK);
				cprintf("a.Karnali");
				delay(800);
				gotoxy(6,15);
				cprintf("Wrong Answer");
				gotoxy(4,16);
				printf("Wanna play more y/n");
				q=getch();
				g++;
				h++;
				//if(q=='y')
				//goto up;
			       //	else
				goto btm;
			}

		}
		//goto out3;
		//else
		goto out1;
	}
	else if(x<=20)
	{
		y=x%10;
		if(x==11)
		gotoxy(y*3,7);
		else
		gotoxy(y*3+(y-1),7);
		textcolor(6+BLINK);
		cprintf("%d",x);
		delay(1000);
	       //	s=getch();
	       //	if(s=='y')
		//else
		goto out1;
	}
	else if(x<=30)
	{

		y=x%20;
		if(x==21)
		gotoxy(y*3,8);
		else
		gotoxy(y*3+(y-1),8);
		textcolor(6+BLINK);
		cprintf("%d",x);
		delay(1000);
		//s=getch();
		goto out1;

	}

	}
	out1:
	if(b==2)
	{
	clrscr();
	textcolor(10);
	gotoxy(3,2);
	cprintf("****** Welcome to Funda Mania ******");
	gotoxy(3,3);
	cprintf("====================================");
	getch();
	gotoxy(5,4);
	printf("Here's Your Options");
	getch();
	textcolor(14);
	for(int i=1;i<4;i++)
	{
		j=0;
		for( j=0,d=0;d<30,j<10;j++)
		{
			gotoxy(3+j+d,5+i);
			cprintf("%d ",c+j);
			delay(100);
			d=d+3;
			if(j==9)
			{
			e++;
			}

		}
		c=(j*i)+i-e;
	}

	gotoxy(4,10);
	printf("Please Select one:");
	}
	out2:
	if(b==3)
	{
	clrscr();
	textcolor(10);
	gotoxy(3,2);
	cprintf("****** Welcome to Magic Mania ******");
	gotoxy(3,3);
	cprintf("====================================");
	getch();
	gotoxy(5,4);
	printf("Here's Your Options");
	getch();
	textcolor(14);
	for(int i=1;i<4;i++)
	{
		j=0;
		for( j=0,d=0;d<30,j<10;j++)
		{
			gotoxy(3+j+d,5+i);
			cprintf("%d ",c+j);
			delay(100);
			d=d+3;
			if(j==9)
			{
			e++;
			}

		}
		c=(j*i)+i-e;
	}

	gotoxy(4,10);
	printf("Please Select one:");


	}
	btm:
	getch();
}



