#include <stdio.h>

int main ()
{
    system ("chcp 1253");
    int n,j,the,arn,c,c1,i,c2;
    float mo;
    
    printf("���� �� ������ ��� �������\n");
    scanf("%d", &n);
    the=0;
    arn=1;
    c=0;
    c1=0;
    c2=0;
    for (i=0;i<n;i++)
    {
        printf("���� ��� ������\n");
        scanf("%d", &j);
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
            printf("�� ��������� ��� ������� %d �����: %d\n\n",j, j*j);
    }
    if (c>=1)
    {
        mo=(float)the/c;
        printf ("� ����� ���� ��� ������� ������� �����: %f\n",mo);
    }
    if (c2>=1)
        printf ("�� �������� ��� ��������� ������� �����:%d\n", arn);
    
    if (c1>=1)
            printf ("�� ������ ��� ������ ������� �����: %d" ,c1);
return 0;
}
