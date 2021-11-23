#include <stdio.h>
#include <math.h>
#define pi 3.14159265359
#define orio 1e-6

double dwse_moires();
double moires_se_aktinia();
double upologismos_sin();
double upologismos_cos();
int sugrisi_imitonou();
int sugrisi_sinimitonou();

int main ()
{
	system ("chcp 1253");
    double moires,x,imi,sini;
    
    moires=dwse_moires();
    x=moires_se_aktinia(moires);
    imi=upologismos_sin(x);
    printf("Το ημίτονο είναι: %lf\n",imi);
    sini=upologismos_cos(x);
    printf("Το συνημίτονο είναι: %lf\n",sini);
    if (sugrisi_imitonou(x,moires)==1)
    	printf("Ο υπολογισμός του ημιτόνου είναι ακριβής.\n");
	if (sugrisi_sinimitonou(x,moires)==1)
		printf("Ο υπολογισμός του συνημιτόνου είναι ακριβής.\n");
}

double dwse_moires()
{
	double moires;	
	do
	{
	    printf("Δώσε τις μοίρες\n");
	    scanf("%lf",&moires);
    }
    while (moires<0 || moires>360);
    return (moires);
}

double moires_se_aktinia(double moires)
{
    double x;	
	x=2*pi*moires/360;
	return (x);
}

double upologismos_sin(double x)
{
	int n,prosimo;
	double epomenos,proigoumenos,imitono;
	
	epomenos=x;
	imitono=x;
	n=3;
	prosimo=-1;
	do
	{
		proigoumenos=epomenos;
		epomenos*=(x*x)/((n-1)*n);
		imitono+=epomenos*prosimo;
		prosimo*=-1;
		n+=2;
	}
	while(fabs(epomenos-proigoumenos)>orio);
	return (imitono);
}

double upologismos_cos(double x)
{
	int n,prosimo;
	double epomenos,proigoumenos,sinimitono;
	
	epomenos=1;
	sinimitono=1;
	n=2;
	prosimo=-1;
	do
	{
		proigoumenos=epomenos;
		epomenos*=(x*x)/((n-1)*n);
		sinimitono+=epomenos*prosimo;
		prosimo*=-1;
		n+=2;
	}
	while(fabs(epomenos-proigoumenos)>orio);
	return sinimitono;
}

sugrisi_imitonou(x,moires)
{
	if (fabs(upologismos_sin(x)-sin(moires)<orio))
		return 1;
	else
		return 0;
}

sugrisi_sinimitonou(x,moires)
{
	if (fabs(upologismos_cos(x)-cos(moires)<orio))
		return 1;
	else 
		return 0;
}
