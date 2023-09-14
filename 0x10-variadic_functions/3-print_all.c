#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
  * tchar - prints variadic argument char
  * @ls: variadic list
  * Return: No return
  */
void tchar(va_list ls)
{
	printf("%c", va_arg(ls, int));
}

/**
  * tint - prints variadic argument int
  * @ls: variadic list
  * Return: No return
  */
void tint(va_list ls)
{
	printf("%i", va_arg(ls, int));
}

/**
  * tfloat - prints variadic argument float
  * @ls: variadic list
  * Return: No return
  */
void tfloat(va_list ls)
{
	printf("%f", va_arg(ls, double));
}

/**
  * tstring - prints variadic argument string
  * @ls: variadic list
  * Return: No return
  */
void tstring(va_list ls)
{
	char *ch;

	ch = va_arg(ls, char *);
	if (ch == 0)
		ch = "(nil)";
	printf("%s", ch);
}

/**
  * print_all - prints anything
  * @format: list of types of arguments passed to the function
  * @...: Arguments Variadic
  * Return: No return
  */
void print_all(const char * const format, ...)
{
	ftype fa[] = {
		{"c", tchar},
		{"i", tint},
		{"f", tfloat},
		{"s", tstring}
	};

	int a1 = 0, a2 = 0;
	va_list ls;
	char *comma = "";

	va_start(ls, format);
	while (format && format[a1])
	{
		a2 = 0;
		while (a2 < 4)
		{
			if (format[a1] == fa[a2].tc[0])
			{
				printf("%s", comma);
				fa[a2].tf(ls);
				comma = ", ";
			}
			a2++;
		}
		a1++;
	}
	printf("\n");
	va_end(ls);
}
