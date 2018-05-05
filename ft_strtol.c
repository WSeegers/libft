/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtol.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wseegers <wseegers.mauws@gmail.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/25 17:04:17 by wseegers          #+#    #+#             */
/*   Updated: 2018/05/02 12:07:29 by wseegers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_uchar charmap(char c)
{
	char chr;
	
	chr = ft_toupper(c);
	if (chr >= '0' && chr <= '9')
		return (chr - '0');
	if (chr >= 'A' && chr <= 'Z')
		return (chr - 'A' + 10);
	return (127);
}

long int ft_strtol(const char *nptr, char **endptr, int base)
{
	int neg;
	long result;
	char digit;

	if (base < 0 || base > 36)
		return (0);
	neg = 0;
	result = 0;
	while (ft_isspace(*nptr))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
		if (*nptr++ == '-')
			neg = 1;
	if ((base == 0 || base == 16) && *nptr == '0')
	{
		if (*(++nptr) == 'x' && (nptr++))
			base = 16;
		else if (*nptr == '0')
			base = 8;
	}
	if (base == 0)
		base = 10;
	while ((*endptr = (char*)nptr) && (digit = charmap(*nptr++)) < base)
		if ((result = (result * base) + digit) < 0)
			return (FT_LONG_MAX + neg);
	return (result + (result * -2 * neg));
}
