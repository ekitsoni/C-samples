#include <stdio.h>

int main()
{
	system ("chcp 1253");
    int  athrisma,diafora,ginomeno,piliko,upolipo,tetragono,x,y;
    float pragm_piliko,riza;
    
    printf ("Εισάγετε τον πρώτο αριθμό  : ");
    scanf ("%d",&x);
    printf ("Εισαγετε το δεύτερο αριθμό : ");
    scanf ("%d",&y);
    athrisma=x+y;
    diafora=x-y;
    ginomeno=x*y;
    piliko=x/y;
    upolipo=x%y;
    pragm_piliko=(float)x/y;
    tetragono=x*x;
    riza=sqrt(y);
    printf ("\n\nΤο άθροισμα είναι: %d\nΗ διαφορά είναι: %d\nΤο γινόμενο είναι: %d\nΤο πηλίκο είναι: %d\nΤο υπόλοιπο είναι: %d\nΤο πραγματικό πηλίκο είναι: %f\nΤο τετράγωνο του πρώτου αριθμού είναι: %d\nΗ τετραγωνική ρίζα του δεύτερου αριθμού είναι: %f\n",athrisma,diafora,ginomeno,piliko,upolipo,pragm_piliko,tetragono,riza);
    
    return 0;
}

