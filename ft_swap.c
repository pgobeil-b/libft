/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgobeil- <pgobeil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 16:25:23 by pgobeil-          #+#    #+#             */
/*   Updated: 2019/05/15 14:04:51 by pgobeil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int *tmp;

	*tmp = *a;
	*a = *b;
	*b = *tmp;
}
