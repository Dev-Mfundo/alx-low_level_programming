#include <stdio.h>
/*
* main(void) - is the main function
*/
int main(void)
{
int n;
int a[5];
int *p;
a[2] = 1024;
p = &n;
/*
* printf - prints output
* return (0) - Success
*/
*(p + 5) = 98;
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}

