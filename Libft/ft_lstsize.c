/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:26:58 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/13 16:57:22 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: count the number of nodes in a list
lst: the beginning of the list
return: the length of the list/ number of nodes
*/
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int counter;

	counter = 0;
	if(lst == NULL)
		return (0);
	//basically iterate over a string and increase counter
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
