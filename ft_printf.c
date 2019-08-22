/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/18 17:34:19 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/08/18 17:34:20 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>
# include <stdio.h>
# include <stdarg.h>

/**
 * NOTES:
 * printf doesn't take in notice the fact that the argument might be different from the %conv
 * the %conv however always reassures that the given argument is typecasted to the conversions type.
 */

/**
 * Printf
 * @param input String to print
 * @param ... Variable Argument Lists
 * @return The amount of characters printed
 */
int		ft_printf(char *input, ...)
{
	va_list args;
	va_start(args, input);
	int index;

	index = 0;
	while (input[index] != '\0')
	{
		check_conversion(input);
		write(1, &*input, 1);
		input++;
	}
	printf("%d", "string");
	print((int)"string")
	va_end(args);
	return (index);
}


