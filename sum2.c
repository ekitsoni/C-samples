#include <stdio.h>

int main ()
{
    system ("chcp 1253");
    int n,j,the,arn,c,c1,i,c2;
    float mo;
    
    the=0;
    arn=1;
    c=0;
    c1=0;
    c2=0;
    printf("Δώσε τον αριθμό\n");
    scanf("%d", &j);
    if (j!=0)
    {
        do
        {
            if (j>=0)
            { 
                the+=j;
                c++;
            }
            else
            {
                arn*=j;
                c2++;
            }
            if (j % 2==0)
                c1++;
            else    
                printf("Το τετράγωνο του αριθμού %d είναι: %d\n\n",j, j*j);
            printf("Δώσε τον αριθμό\n");
            scanf("%d", &j);
        }
        while (j!=0);    
    }
    if (c>=1)
    {
        mo=(float)the/c;
        printf ("Ο μέσος όρος των θετικών αριθμών είναι: %f\n",mo);
    }
    if (c2>=1)
        printf ("Το γινόμενο των αρνητικών αριθμών είναι:%d\n", arn);
    
    if (c1>=1)
            printf ("Το πλήθος των άρτιων αριθμών είναι: %d" ,c1);
return 0;
}
