/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pgobeil- <pgobeil-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 15:10:44 by pgobeil-          #+#    #+#             */
/*   Updated: 2019/05/24 16:18:30 by pgobeil-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*tmp;
	t_list		*i;

	new = f(lst);
	if (new == NULL)
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		i = lst->next;
		tmp->next = f(lst);
		if (tmp == NULL)
			return (NULL);
		lst = i;
	}
	return (new);
}
