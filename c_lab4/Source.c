#include <stdio.h>
#include <locale.h>

void t1()
{
	char c = ' ';
	int i = 0;
	float f = 0;
	double d = 0;
	printf("������� ������ "); 
	scanf_s("%c", &c);
	printf("������� ����� ����� ");
	scanf_s("%d", &i);
	printf("������� ������� ����� ");
	scanf_s("%f", &f);
	printf("������� ������ ������� ����� ");
	scanf_s("%lf", &d);

	puts("----------");
	printf("%c\n%d\n%f\n%lf\n", c, i, f, d);
	puts("----------");
	printf("����� ����� float: %d\n������� ����� float: %.3f\n", (int)f, f - (int)f);
	printf("��� ��������� �������: %d\n", (int)c);
	printf("����� 1/i: %.3f\n", 1. / i);
}

void t2() 
{
	int a = 11;
	int b = 3;
	int x;
	float y;
	double z;
	x = a / b;
	y = (float) a / b;
	z = (double) a / b;
	printf("int: %d\nfloat: %f\ndouble: %lf", x, y, z);
}

void t3()
{
	int n = 0;
	printf("������� ����� ���������� ����� ");
	scanf_s("%d", &n);
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	printf("��������� �����: %d\n������ �����: %d\n����� ����: %d\n", n3, n1, n1 + n2 + n3);
	printf("����� ��������: %d", n3 * 100 + n2 * 10 + n1);
}

float calcU(int x, float L)
{
	return L / x * 10;
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 �������
	//t1();

	//2 �������
	//t2();

	//3 �������
	//t3();

	//hometask
	int x;
	float L;
	float res;
	printf("������� �����, ������� ����� �������������� ��������� ���������� ��������, � �c ");
	scanf_s("%d", &x);
	printf("������� ����� ���� �������� � �� ");
	scanf_s("%f", &L);
	
	res = calcU(x, L);
	printf("����������� �������� �������� ��������: %.1f �/�", res);

}