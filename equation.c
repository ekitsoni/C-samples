# include <stdio.h>
#include <math.h>

int main()
{
    double a,b,c,d,x,x1,x2;

    printf ("���� ���� 3 ��������\n");
    scanf ("%lf\n %lf\n %lf", &a, &b, &c);
    if (a==0)
    {
        if (b==0)
        {
            if (c==0)
                printf ("�������");
            else
                printf ("���������");
        }
        else
        {
            x=(-c)/b;
            printf ("�� x �����: %lf",x);
        }
    }
    else
    {
        d=b*b-4*a*c;
        if (d<0)
            printf ("�������");
        else
            if (d==0)
            {
                x=(-b)/(2*a);
                printf ("�� x �����: %lf",x);
            }
            else
            {
                x1=((-b)+sqrt(d))/2*a;
                x2=((-b)-sqrt(d))/2*a;
                printf ("�� x1 �����: %lf\n�� x2 �����: %lf\n",x1,x2);
            }
    }
    return 0;
}
