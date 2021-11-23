#include <stdio.h>

int main()
{
	system("chcp 1253");
    int i,n,j,k,seires,m,t,r,s,p,seires1,seires2;
 
    do
    {
       printf ("Δώσε το αριθμό των γραμμών\n");
       scanf ("%d", &n);
    }
    while (n<0);
 
    seires=n;
    seires1=n;
    seires2=n;
 
    printf ("\n\nΠρώτο σχήμα\n\n");
  
    for (i=1;i<=n;i++)
    {
        for (j=1;j<=i;j++)
            printf ("*");
        printf ("\n");
    }
    printf ("\n\nΔεύτερο σχήμα\n\n");
 
  
    for (i=1;i<=seires;i++)
    {
        for (j=1,n-=1;j<=n;j++)
            printf (" ");
        for (k=1;k<=i;k++)
            printf ("*");
        printf ("\n");  
    }
    printf ("\n\nΤρίτο σχήμα\n\n");
 
 
    for (t=1;t<=seires;t++)
    {
        for (p=1,seires1-=1;p<=seires1;p++)
            printf (" ");
        for (r=1;r<=t;r++)
            printf ("*");
        for (s=2;s<=t;s++)
            printf ("*");
        printf ("\n"); 
    }
    printf ("\n\nΤέταρτο σχήμα\n\n");
 
 
    for (i=1;i<=seires2;i++)
    {
        if (i==1 || i==seires2)
            for (k=1;k<=seires2;k++)
                printf ("*"); 
        else 
        {
            for (j=1;j<=seires2;j++)
            {
                if (j==1 || j==seires2)
                    printf ("*");
                else
                    if (j==i)
                        printf (".");
                    else
                        if (j+i==seires2+1)
                            printf (".");
                        else
                            printf (" ");
            }
        }
        printf ("\n");
    }
    return 0;
}

