#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#include "tic-tac-toe.h"
#define line 3
#define col 3

void initTab(char Tab[line][col]) 
{
    for (int i = 0; i < line; i++) 
    {
      for (int j = 0; j < col; j++) 
      {
        Tab[i][j] = ' ';
      }
    }
}

void afficheTab(char Tab[line][col])
{
	for(int i=0; i<line; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			printf(" %c ",Tab[i][j]);
			if (j<col-1)
			{
				printf("|");
			}
		}
		printf("\n");
		if(i<line-1)
		{
			printf("---|---|---\n");
		}
	}
	printf("\n");
}
int voir_gagne(char Tab[line][col],char JOUEUR )
{
	for(int i=0; i<line; ++i)
	{
		if(Tab[i][0]==JOUEUR && Tab[i][1]==JOUEUR && Tab[i][2]==JOUEUR)
		{
			return 1;
		}
	}
	for(int j=0; j<col; ++j)
	{
		if(Tab[0][j]==JOUEUR && Tab[1][j]==JOUEUR && Tab[2][j]==JOUEUR)
		{
			return 1;
		}
	}
	if((Tab[0][0]==JOUEUR && Tab[1][1]==JOUEUR && Tab[2][2]==JOUEUR)||
		(Tab[2][0]==JOUEUR && Tab[1][1]==JOUEUR && Tab[0][2]==JOUEUR))
	{
		return 1;
	}
	return 0;
}

int rempli(char Tab[line][col])
{
	for(int i=0; i<line; ++i)
	{
		for(int j=0; j<col; ++j)
		{
			if(Tab[i][j]==' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

void depl_joueur(char Tab[line][col])
{
	int depl1,depl2;
	printf("Choisissez où jouer : \n");
	scanf("%d %d \n",&depl1,&depl2);
	while(depl1<0 ||depl1>2 ||depl2<0 ||depl2>2)
	{
		printf("Mouvement impossible essayez encore");
		scanf("%d %d \n",&depl1,&depl2);
	}
	Tab[depl1/line][depl2%col]='X';
}

void depl_machine(char Tab[line][col])
{
	for(int i=0; i<line*col; ++i)
	{
		if(Tab[i/line][i%col]==' ')
		{
			Tab[i/line][i%col]='O';
			break;
		}
	}
	printf("jouer");
	sleep(1);
}

int main()
{
	char Tab[line][col];
	initTab(Tab);
	afficheTab(Tab);

	return 0;
}