/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_nbrlen.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/10/07 20:44:16 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/04/11 17:29:01 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int	ft_nbrlen(long long nbr)
{
	int			count;
	long long	p;

	count = 1;
	p = 10;
	if (nbr < 0)
	{
		nbr *= -1;
		count++;
	}
	while (nbr - p >= 0)
	{
		count++;
		p *= 10;
	}
	return (count);
}
