#include "libft.h"

int main(void)
{
	char var1 = '9';
	int var2 = 'z';
	
	//test for ft_isalpha.c
	printf("The result of ft_isalpha('%c') is: %d\n", var1, ft_isalpha(var1));

	//test for ft_isdigit
    printf("The result of ft_isdigit('%c') is: %d\n", var2, ft_isdigit(var2));
    
	return(0);
}



/*
//for ft_strlen.c
int	main(void)
{
	char str[10] = "Habibi";
	int result;
	result = ft_strlen(str);
	printf("%d\n", result);
	return(0);
}
*/
