/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 20:39:44 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/09 19:00:40 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		i;

	i = ft_nbrlen(n) + (n < 0 ? 1 : 0);
	if (!(str = ft_strnew(i)))
		return (0);
	if (n == -2147483648)
	{
		str[i--] = '8';
		n = -214748364;
	}
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	while (n)
	{
		str[--i] = n % 10 + '0';
		n = (n - n % 10) / 10;
	}
	return (str);
}
