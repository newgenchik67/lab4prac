#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#define M_PI 3.14159265358979323846
#define p 0.5
#include <stdio.h>
#include <locale.h>
#include <math.h>
void task1()
{
	printf("Введите кол-во градусов:\n");
	float gr;
	scanf("%f", &gr);
	float rad = gr * M_PI / 180.0;
	float a = sin(rad);
	printf("Введенные градусы:%.f\n", gr);
	printf("Синус:%.6f\n", a);
}
void task2()
{
	printf("Введите x:\n");
	float x;
	scanf("%f", &x);
	float a = log(pow(p, 2) + pow(x, 3));
	float b = exp(sqrt(fabs(x)));
	float y = pow(a, 3) / pow(b, 2);
	printf("Полученный y:%.4f\n", y);
}
void task3()
{
	printf("Введите a\n");
	int a;
	scanf("%d", &a);
	printf("Введите b\n");
	int b;
	scanf("%d", &b);
	int cheta = (a % 2 == 0);
	int chetb = (b % 2 == 0);
	int k = cheta != chetb;
	printf("Результат: Условие выполнено (1 - да, 0 - нет) %d\n", k);

}
void main() {
	setlocale(LC_ALL, "RUS");
	task3();
}
