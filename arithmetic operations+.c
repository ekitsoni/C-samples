#include <stdio.h>

int main()
{
	system ("chcp 1253");
    int  athrisma,diafora,ginomeno,piliko,upolipo,tetragono,x,y;
    float pragm_piliko,riza;
    
    printf ("�������� ��� ����� ������  : ");
    scanf ("%d",&x);
    printf ("�������� �� ������� ������ : ");
    scanf ("%d",&y);
    athrisma=x+y;
    diafora=x-y;
    ginomeno=x*y;
    piliko=x/y;
    upolipo=x%y;
    pragm_piliko=(float)x/y;
    tetragono=x*x;
    riza=sqrt(y);
    printf ("\n\n�� �������� �����: %d\n� ������� �����: %d\n�� �������� �����: %d\n�� ������ �����: %d\n�� �������� �����: %d\n�� ���������� ������ �����: %f\n�� ��������� ��� ������ ������� �����: %d\n� ����������� ���� ��� �������� ������� �����: %f\n",athrisma,diafora,ginomeno,piliko,upolipo,pragm_piliko,tetragono,riza);
    
    return 0;
}

