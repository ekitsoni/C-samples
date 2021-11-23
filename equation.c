# include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x,x1,x2;

    printf ("Δώσε τους 3 αριθμούς\n");
    scanf ("%lf\n %lf\n %lf", &a, &b, &c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
                printf ("Αδύνατη");
            else
                printf ("Ταυτότητα");
        }
        else
        {
            x=(-c)/b;
            printf ("Το x είναι: %lf",x);
        }
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf ("Αδύνατη");
        else
            if (d==0)
            {
                x=(-b)/(2*a);
                printf ("Το x είναι: %lf",x);
            }
            else
            {
                x1=((-b)+sqrt(d))/2*a;
                x2=((-b)-sqrt(d))/2*a;
                printf ("Το x1 είναι: %lf\nΤο x2 είναι: %lf\n",x1,x2);
            }
    }
    return 0;
}
