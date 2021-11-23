#include <stdio.h>
#include <time.h>

int sun(int a,int b);
double x(int a,int b);

int main()
{
	int N,i,a,b,c,j;
	double riza,*p;
	
	srand(time(NULL));
	system("chcp 1253");
	
	printf("Δώσε το Ν\n");
	scanf("%d",&N);
	p=(double *)malloc(N*sizeof(double *));
	for(i=0; i<N; i++)
	{
		a=rand()%(10-(-10)+1)+(-10);
		b=rand()%(10-(-10)+1)+(-10);
		c=sun(a,b);
		
		if(c==0)
		{
			riza=x(a,b);
			p[i]=riza;
			printf("Η ρίζα είναι %d\n",riza);
		}	
		else
			p[i]=999.99;
	}
	for(j=0; j<N; j++)
		printf("%d",p[j]);
	return 0;
}
 int sun(int a,int b)
 {
 	
	if(a==0 && b==0)
		return 2;
	if(a!=0 && b!=0)
		return 0;
	if(a==0 && b!=0)
		return 1;
	
 }
 double x(int a,int b)
 {
 	double s;
 	
 	s=-(a/b);
 	return s;
 	
 }

 
