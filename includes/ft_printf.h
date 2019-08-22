/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_printf.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/08/22 15:09:14 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/08/22 15:09:15 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_FT_PRINTF_H
#define FT_PRINTF_FT_PRINTF_H

#define ISDIGIT "%d"

void		ft_printf(char *input, ...);
void		check_conversion(char *input);


#endif //FT_PRINTF_FT_PRINTF_H
