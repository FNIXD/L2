#include <stdio.h>
#include <locale.h>
int task1();
int task2();
int task3();
int main() {
	setlocale(LC_CTYPE, ".UTF8");
	
	task1();
	task2();
	task3();
	return 0;
}

int task1(){
	printf("Задание 1\n\n");
	printf("123\n");
	printf("1\n\t2\n\t\t3\n");
	printf("%d\n\t%d\n\t\t%d\n\t\t\t%d\n", 1, 2, 3, 4);
	printf("%10.5f\n ", 12.234657);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("Остаток от деления %d на %d равен %d\n ", 7, 5, 5 % 2);
	printf("Умножение %d на %d равен %d\n ", 2000, 4, 2000 * 4);
	printf("%g разделить %e равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("Остаток от деления %d на %d равен %d\n ", 5, 2, 5 % 2);
	printf("%f разделить %f равно %f\n ", 5., 2000000., 5. / 2000000);
	printf("%g разделить %g равно %g\n ", 5., 2000000., 5. / 2000000);
	printf("%e разделить %e равно %e\n\n ", 5., 2000000., 5. / 2000000);
	return 0;
	}
	
int task2()
	{
	int n = 3, k = 3;
	printf("Задание 2\n\n ");
	printf("Сейчас %d часа %d минуты 00 секунд\n", n,k);
	printf("Идет %d минута суток\n", n*60+k);
	printf("До полуночи осталось %d часов и %d минут\n", 12-n-1, 60-k);
	printf("С 8:00 прошло %d секунд\n", (((n+4)*60)+k)*60);
	printf("Текущий час = %.3f суток и текущая минута = %.2f часа\n", n/24., k/60.);
	return 0;
	}
	
int  task3()
	{
	printf("Задание 3\n\n ");
	int n = 3, k = 3, m = 5, l = 373;
	printf("Дано:\n%d\n%d\n______\nОтвет:\n%0+*.*f\n", n, l, k + m + 2, m, (n / 1.0) / l);
	return 0;
	}
	