#include <stdio.h>

int main(void)
	{
	char f, m, l;
	int age;

	printf("Enter your initials, followed by your age: ");
	scanf("%c %c %c %d", &f, &m, &l, &age);
	printf("My initials are: %c%c%c and my age is %d.\n", 'J', 'M', 'D', 32);
	return (0);
	}
