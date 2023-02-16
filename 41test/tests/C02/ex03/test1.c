#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
#include "../../../../ex03/ft_str_is_numeric.c"

#define GREEN "\033[38;5;84m"
#define RED "\033[31m"
#define GREY "\033[38;5;8m"
#define DEFAULT "\033[0m"
#define CHECKMARK "\xE2\x9C\x93"

int	test1(void)
{
	if (ft_str_is_numeric("01948987493") != 1)
	{
		printf("    "RED"[1] ft_str_is_uppercase(\"ABCDEFGH\") doesn\'t output 1\n");
		return (-1);
	}
	else
		printf("  "GREEN CHECKMARK GREY" [1] ft_str_is_uppercase(\"ABCDEFGH\") output 1\n"DEFAULT);
	return (0);
}

int	test2(void)
{
	if (ft_str_is_numeric("0484882j8995489") != 0)
	{
		printf("    "RED"[1] ft_str_is_uppercase(\"ABCDEFGH\") doesn\'t output 1\n");
		return (-1);
	}
	else
		printf("  "GREEN CHECKMARK GREY" [1] ft_str_is_uppercase(\"ABCDEFGH\") output 1\n"DEFAULT);
	return (0);
}

int	test3(void)
{
	if (ft_str_is_numeric("-_jsdsdc67sdlkc,") != 0)
	{
		printf("    "RED"[1] ft_str_is_uppercase(\"ABCDEFGH\") doesn\'t output 1\n");
		return (-1);
	}
	else
		printf("  "GREEN CHECKMARK GREY" [1] ft_str_is_uppercase(\"ABCDEFGH\") output 1\n"DEFAULT);
	return (0);
}

int	main(void)
{
	if (test1()+test2()+test3()!=0)
		return (-1);
	return (0);
}