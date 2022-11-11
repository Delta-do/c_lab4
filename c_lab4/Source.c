#include <stdio.h>
#include <locale.h>

void t1()
{
	char c = ' ';
	int i = 0;
	float f = 0;
	double d = 0;
	printf("Введите символ "); 
	scanf_s("%c", &c);
	printf("Введите целое число ");
	scanf_s("%d", &i);
	printf("Введите дробное число ");
	scanf_s("%f", &f);
	printf("Введите второе дробное число ");
	scanf_s("%lf", &d);

	puts("----------");
	printf("%c\n%d\n%f\n%lf\n", c, i, f, d);
	puts("----------");
	printf("Целая часть float: %d\nДробная часть float: %.3f\n", (int)f, f - (int)f);
	printf("Код введённого символа: %d\n", (int)c);
	printf("Число 1/i: %.3f\n", 1. / i);
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
	printf("Введите целое трёхзначное число ");
	scanf_s("%d", &n);
	int n1 = n / 100;
	int n2 = n % 100 / 10;
	int n3 = n % 10;
	printf("Последняя цифра: %d\nПервая цифра: %d\nСумма цифр: %d\n", n3, n1, n1 + n2 + n3);
	printf("Число наоборот: %d", n3 * 100 + n2 * 10 + n1);
}

float calcU(int x, float L)
{
	return L / x * 10;
}

void main()
{
	setlocale(LC_ALL, "RUS");

	//1 задание
	//t1();

	//2 задание
	//t2();

	//3 задание
	//t3();

	//hometask
	int x;
	float L;
	float res;
	printf("Введите время, которое плёнка поверхностного натяжения удерживает человека, в мc ");
	scanf_s("%d", &x);
	printf("Введите длину шага человека в см ");
	scanf_s("%f", &L);
	
	res = calcU(x, L);
	printf("Минимальная скорость движения человека: %.1f м/с", res);

}