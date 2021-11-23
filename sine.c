#include <stdio.h>
#define pi 3.14159265359
#define orio 1e-6

int main ()
{
    system ("chcp 1253");
    int n,prosimo;
    double x,moires,epomenos,proigoumenos,imitono;
    
    printf("Υπολογισμός ημιτόνου\n\n");
    do
    {
        printf("Δώσε τις μοίρες\n");
        scanf("%lf",&moires);
    }
    while (moires<0 || moires>360);
    
    x=2*pi*moires/360;
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
    printf("Το ημίτονο της γωνίας είναι: %lf",imitono);
    
    return 0;
}
