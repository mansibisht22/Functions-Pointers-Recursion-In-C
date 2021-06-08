#include <stdio.h>
void rom(int);
void print(int, char);

int main()
{
	int yer;
	printf("enter year: ");
	scanf("%d", &yer);

	rom(yer);
}

void rom(int yr)
{
	int m, d, c, l, v, i;

	m = yr / 1000;
	print(m, 'm');
	yr = yr % 1000;

	d = yr / 500;
	print(d, 'd');
	yr = yr % 500;

	c = yr / 100;
	print(c, 'c');
	yr = yr % 100;

	l = yr / 50;
	print(l, 'l');
	yr = yr % 50;

	v = yr / 10;
	print(v, 'v');
	yr = yr % 10;

	i = yr / 1;
	print(i, 'i');
	yr = yr % 1;
}

void print(int a, char c)
{
	int i;
	for (i = 0; i < a; i++)
	{
		printf("%c", c);
	}
}