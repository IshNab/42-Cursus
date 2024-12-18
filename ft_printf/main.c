#include "ft_printf.h"
#include <stdio.h>
#include <limits.h>
// run: cc -Wall -Wextra -Werror -o main main.c libftprintf.a
int	main()
{
	char *s = "sweet potatoe pie with roasted marshmallows";
	int n = 123456789;
	//char
	printf("*** Testing %%c - char ***\n");
	int my_func = ft_printf("%c %c %c %c %c %c\n", '0', 0, '1', 'c', 'b', 'a');
	int og_func = printf("%c %c %c %c %c %c\n", '0', 0, '1', 'c', 'b', 'a');
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//string
	printf("*** Testing %%s - string ***\n");
	my_func = ft_printf("%s, %s, %s\n", s, "", (char *)NULL);
	og_func = printf("%s, %s, %s\n", s, "", (char *)NULL);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//pointer
	printf("*** Testing %%p - pointer ***\n");
	my_func = ft_printf("%p %p %p\n", &s, &n, (void *)NULL);
	og_func = printf("%p %p %p\n", &s, &n, (void *)NULL);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//decimal
	printf("*** Testing %%d - decimal ***\n");
	my_func = ft_printf("%d\n", n);
	og_func = printf("%d\n", n);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//int
	printf("*** Testing %%i - integer ***\n");
	my_func = ft_printf("%i %i %i \n", n, INT_MAX, INT_MIN);
	og_func = printf("%i %i %i \n", n, INT_MAX, INT_MIN);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//unsigned int
	printf("*** Testing %%u - unsigned ***\n");
	my_func = ft_printf("%u %u %u %u \n", n, UINT_MAX, -10, 0);
	og_func = printf("%u %u %u %u \n", n, UINT_MAX, -10, 0);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//lower case hex
	printf("*** Testing %%x - lowerhex ***\n");
	my_func = ft_printf("%x %x %x %x\n", n, INT_MAX, INT_MIN, 0);
	og_func = printf("%x %x %x %x\n", n, INT_MAX, INT_MIN, 0);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//upper case hex
	printf("*** Testing %%X - upperhex ***\n");
	my_func = ft_printf("%X %X %X %X\n", n, INT_MAX, INT_MIN, 0);
	og_func = printf("%X %X %X %X\n", n, INT_MAX, INT_MIN, 0);
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	//percent
	printf("*** Testing %% - percent ***\n");
	my_func = ft_printf("%%\n");
	og_func = printf("%%\n");
	printf("my return: %d, original return: %d\n\n", my_func, og_func);
	return (0);
}
