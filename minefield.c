#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int grammes();
int stiles();
int vomves(int x,int y); 
void pvomves(int x,int y,int B,char **p);
void fvomves(int x,int y,char **p);
void emfanisi(int x,int y,char **p);
int plithosv(int i,int j,int x,int y,char **p);
void arxeio(char **p,int x,int y);

int main()
{
	int i,x,y,B;
	char **p;
	system("chcp 1253");
	
	x=grammes();
	y=stiles();
	B=vomves(x,y);
	
	p=(char **) malloc (x*sizeof(char*));
	for(i=0; i<x; i++)
		p[i]=(char *) malloc (y*sizeof(char));
	
	pvomves(x,y,B,p);
	fvomves(x,y,p);
	emfanisi(x,y,p);
	arxeio(p,x,y);
		
	for (i=0;i<x;i++)
		free(p[i]);
	free(p);
	return 0;
}


int grammes()
{
	int x;
	
	do
	{	
		printf("Δώσε τον αριθμό των γραμμών\n");
		scanf("%d",&x);
	}
	while (x<0);
	return x;
}

int stiles()
{
	int y;
	
	do
	{	
		printf("Δώσε τον αριθμό των στηλών\n");
		scanf("%d",&y);
	}
	while (y<0);
	return y;
}

int vomves(int x,int y)
{
	int b,a;
	
	a=x*y;
	do 
	{
		printf("Δώσε τον αριθμό των βομβών\n");
		scanf("%d",&b);
	}
	while (b>a || b<0);
		
	return b;
}

void pvomves(int x,int y,int B,char **p)
{
	int m,n,i;

	srand(time(NULL));
	for(i=0; i<B; i++)	
	{
		do
		{
			m=rand()%x;
			n=rand()%y;
		}
		while(p[m][n] =='B');
		p[m][n] ='B';
	}	
}

void fvomves(int x,int y,char **p)
{
	int i,j;
	
	for(i=0; i<x; i++)
		for(j=0; j<y; j++)	
			if(p[i][j] !='B')
				p[i][j]=plithosv(i,j,x,y,p);
}

int plithosv(int i,int j,int x,int y,char **p)
{
	int c;
	
	c=0;
	
	if (i-1>=0 && j-1>=0 && p[i-1][j-1]=='B') c++;						
	if (j-1>=0 && p[i][j-1]=='B') c++;
	if (i+1<x && j-1>=0 && p[i+1][j-1]=='B') c++;
	if (i+1<x && p[i+1][j]=='B') c++;
	if (i+1<x && j+1<y && p[i+1][j+1]=='B') c++;
	if (j+1<y && p[i][j+1]=='B') c++;
	if (i-1>=0 && j+1<y && p[i-1][j+1]=='B') c++;
	if (i-1>=0 && p[i-1][j]=='B') c++;
	
	return c;
}

void emfanisi(int x,int y,char **p)
{
	int k,i,j;
	
	for (i=0;i<y;i++)
			printf("____");
	printf("\n");	
	for(i=0; i<x; i++)
	{		
		for(j=0; j<y; j++)
		{
			if (p[i][j]=='B')
			{
				printf("| ");
				printf("%c ",p[i][j]);
			}				
			else 
			{
				printf("| ");
				printf("%d ",p[i][j]);
			}
			if (j==y-1)
			{
				printf("|");
				printf("\n");
				for (k=0;k<y;k++)
					printf("|___");
			}	
		}
		printf("|\n");
	}
}
void arxeio(char **p,int x,int y)
{
	int k,i,j;
	FILE *fp;
	
	fp=fopen("ναρκαλιευτης.txt","w");
	for (i=0;i<y;i++)
			fprintf(fp,"____");
	fprintf(fp,"\n");	
	for(i=0; i<x; i++)
	{		
		for(j=0; j<y; j++)
		{
			if (p[i][j]=='B')
			{
				fprintf(fp,"| ");
				fprintf(fp,"%c ",p[i][j]);
			}				
			else 
			{
				fprintf(fp,"| ");
				fprintf(fp,"%d ",p[i][j]);
			}
			if (j==y-1)
			{
				fprintf(fp,"|");
				fprintf(fp,"\n");
				for (k=0;k<y;k++)
					fprintf(fp,"|___");
			}	
		}
		fprintf(fp,"|\n");
	}
	fclose(fp);
}
