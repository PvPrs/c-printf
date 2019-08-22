//
// Created by Dave Van bochove on 2019-08-18.
//

#include <unistd.h>
#include <stdarg.h>


/**
 * Checks wether or not a conversion should occure.
 * @param input the string positioned at '%'
 */
void		check_conversion(char *input)
{
	if (*input == '%' && *(input + 1) == d)
	{
		/**
		 * @TODO:
		 * Call Function doing the conversion.
		 */
		d = va_arg(args, int);
		printf("%d", d);
	}
}
