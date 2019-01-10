/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_tabintdel.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: agiordan <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/01/10 18:50:50 by agiordan     #+#   ##    ##    #+#       */
/*   Updated: 2019/01/10 18:52:16 by agiordan    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_tabintdel(int **tab)
{
	if (!tab)
		return ;
	free(*tab);
	*tab = NULL;
}
