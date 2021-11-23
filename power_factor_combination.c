#include <stdio.h>

int power ();
int paragontiko ();
int sundiasmos ();
void epilogi1 ();
void epilogi2 ();
void epilogi3 ();
int menu ();

int main ()
{
	system ("chcp 1253");
	int A,B,c;
	printf("���� �� � ��� �� �.\n");
	scanf("%d %d",&A,&B);
	c=menu(A,B);
	printf ("�� ������ ��� �������� �����:%d", c-1);
	return 0;
}

int power (int A, int B)
{
    int i,dun;
    if (B==0)
    	return 1;
    if (A==0)
    	return 0;
	dun=A;
	for (i=1;i<B;i++)
	    dun*=A;
    return dun;
}

int paragontiko (int A)
{
	int i,par;
	par=1;
	for (i=1;i<=A;i++)
		par*=i;
    return par;
}

int sundiasmos (int A, int B)
{
	int sund;
	sund=paragontiko(A)/(paragontiko(B)*paragontiko(A-B));
	return sund;
}

void epilogi1 (int A, int B)
{
	if (B<0)
		printf("� ������ ���� ��� ������ �� �����������.\n");
	else
		printf ("� ������ �����:%d\n", power(A, B));
}

void epilogi2 (int A, int B)
{
	if(A>=0 && B>=0)
		printf("�� ����������� ��� � ����� %d ��� �� ����������� ��� � ����� %d.\n", paragontiko(A), paragontiko(B));
	else if (A<0 && B>=0)
		printf("�� ����������� ��� � ��� �������� ��� �� ����������� ��� � ����� %d.\n",paragontiko(B));
	else if (A>=0 && B<0)
		printf("�� ����������� ��� � ����� %d ��� �� ����������� ��� � ��� ��������.\n",paragontiko(A));
	else
		printf("�� ����������� ��� � ��� �� ����������� ��� � ��� ���������.\n");
}

void epilogi3 (int A, int B)
{
	if(A<B || A<=0 || B<=0)
		printf ("��� ������� ���� � ������� �� ��� ������������ ��������� �������.\n");
	else
		printf ("� ���������� ��� � ��� � �����:%d\n", sundiasmos(A, B));
}

int menu (int A, int B)
{
	int ep,c;
		c=0;
		do
		{
			printf ("\n1)����������� ��� ������� � ��� ��� �\n");
			printf ("2)����������� ��� �! ��� ��� �!\n");
			printf ("3)����������� ��� ������� ��� ���������� � ��� �.\n");
			printf ("0)������\n");
			do
		    {
				printf ("�������:");
		    	scanf ("%d", &ep);
		    }
			while (ep<0 || ep>3);
			system("cls");
			switch (ep)
			{
				case 1: epilogi1(A, B);break;
				case 2: epilogi2(A, B);break;
				case 3: epilogi3(A, B);
			}
		c++;	
		}
		while (ep!=0);
		return c;
}
