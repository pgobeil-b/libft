/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putallstrs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgobeil- <pgobeil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 19:13:04 by pgobeil-          #+#    #+#             */
/*   Updated: 2019/05/23 20:59:41 by pgobeil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putallstrs(char **strs)
{
	int i;

	i = 0;
	while (strs[i] != NULL)
	{
		ft_putstr(strs[i]);
		i++;
		ft_putchar('\n');
	}
}
