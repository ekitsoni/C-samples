#include <stdio.h>
#include <stdlib.h>

void suxnotita (int *p, int *suxn,int a,int b,int c,int d,int e,int f,int N);
void emfaniseis (int pln,int pl1,int pl2,int plt,int N,int*p,int*suxn);
void arithmoi(int N,int *p,FILE *fp);
void taxinomisi(int N,int *p);
int plithos(FILE *fp);

int main()
{
	int *p,*suxn,i,j,N,a,b,c,d,e,f,x1,x2,y1,y2,c1,pln,plt,pl1,pl2,athr; 
	char on[20];
	FILE *fp;
	system ("chcp 1253");
	
	printf("Δώσε το όνομα του αρχείου.\n");
	scanf("%s",&on);
	printf("\nΟι συνδυασμοί είναι:\n\n");
	
	if((fp=fopen(on,"r"))==NULL)
	{
		printf("Το αρχείο δεν βρέθηκε.");
		exit(0);
	}

	N=plithos(fp);
	
	p=(int *)malloc(N*sizeof(int));	

	arithmoi (N,p,fp);

	fscanf(fp,"%d %d",&x1,&x2);
	if(x1<0 || x1>x2 || x2>6)
	{
		printf("Τα δεδομένα του αρχείου είναι λάθος.");
		exit(0);
	}
	
	fscanf(fp,"%d %d",&y1,&y2);
	if(y1<21 || y1>y2 || y2>279)
	{
		printf("Τα δεδομένα του αρχείου είναι λάθος.");
		exit(0);
	}
	
	taxinomisi(N,p);
			
	suxn=(int*) malloc (N*sizeof(int));
	
	for (i=0;i<N;i++)
		*(suxn+i)=0;
	pln=0;
	pl1=0;
	pl2=0;
	plt=0;
	for(a=0; a<N; a++)
	for(b=a+1; b<N; b++)
	for(c=b+1; c<N; c++)
	for(d=c+1; d<N; d++)
	for(e=d+1; e<N; e++)
	for(f=e+1; f<N; f++)
	{
		pln++;
		c1=0;
		if(*(p+a)%2==0) c1++;
		if(*(p+b)%2==0) c1++;
		if(*(p+c)%2==0) c1++;
		if(*(p+d)%2==0) c1++;
		if(*(p+e)%2==0) c1++;	
		if(*(p+f)%2==0) c1++;
		if(c1>=x1 && c1<=x2)			
		{
			athr=*(p+a)+*(p+b)+*(p+c)+*(p+d)+*(p+e)+*(p+f);
			if (athr>=y1 && athr<=y2)
			{	
				suxnotita(p,suxn,a,b,c,d,e,f,N);

				printf("%d %d %d %d %d %d\n",*(p+a),*(p+b),*(p+c),*(p+d),*(p+e),*(p+f));
				plt++;	
			}
			else
				pl2++; 
		}
		else 
			pl1++;		
	}
	
	emfaniseis(pln,pl1,pl2,plt,N,p,suxn);
	
	free(p);
	free(suxn);	
	fclose(fp);
	return 0;
}

void suxnotita (int *p, int *suxn,int a,int b,int c,int d,int e,int f,int N)
{
	int i;
	
	for (i=a;i<N;i++)
	{	
		if (*(p+i)==*(p+a))	*(suxn+i)+=1;
		if (*(p+i)==*(p+b)) *(suxn+i)+=1;
		if (*(p+i)==*(p+c)) *(suxn+i)+=1;
		if (*(p+i)==*(p+d)) *(suxn+i)+=1;
		if (*(p+i)==*(p+e)) *(suxn+i)+=1;
		if (*(p+i)==*(p+f)) *(suxn+i)+=1;
	}
}

void emfaniseis (int pln,int pl1,int pl2,int plt,int N,int *p,int *suxn)
{
	int i;
		
	printf("\nΤο πλήθος των συνδυασμών των Ν αριθμών ανά 6 είναι: %d\n",pln);
	printf("Το πλήθος των συνδυασμών που δεν πληρούσαν τον πρώτο όρο είναι: %d\n",pl1);
	printf("Το πλήθος των συνδυασμών που δεν πληρούσαν μόνο τον δεύτερο όρο είναι: %d\n",pl2);
	printf("Το πλήθος των συνδυασμών που τυπώθηκαν είναι: %d\n\n",plt);	
	
	for (i=0;i<N;i++)
		if (*(suxn+i)==0)
			printf ("Το %d δεν εμφανίστηκε καμία φορά\n",*(p+i));
		else if (*(suxn+i)==1)
			printf ("Το %d εμφανίστηκε 1 φορά\n",*(p+i)); 
		else 
			printf ("Το %d εμφανίστηκε %d φορές\n",*(p+i),*(suxn+i)); 
}

void arithmoi(int N,int *p,FILE *fp)
{
	int i,j,flag;
	
	for(i=0; i<N; i++)
	{
			flag=0;
			fscanf(fp,"%d",&*(p+i));
			for(j=0; j<i; j++) 
				if(*(p+i) == *(p+j))
					flag=1;
			if((1>*(p+i) || *(p+i)>49) || (flag==1) )
			{
				printf("Τα δεδομένα του αρχείου είναι λάθος.");
				exit(0);
			}
	}	
}

int plithos(FILE *fp)
{
	int N;

	fscanf(fp,"%d",&N);
	if(N<7 || N>49)
	{
		printf("Τα δεδομένα του αρχείου είναι λάθος.");
		exit(0);
	}

	return N;
}

void taxinomisi(int N,int *p)
{
	int i,j,temp;
	
	for(i=1; i<N; i++)
		for(j=N-1; j>=i; j--)
			if(*(p+j)<*(p+(j-1)))
			{
				temp=*(p+j);
				*(p+j)=*(p+(j-1));
				*(p+(j-1))=temp;
			}
}
