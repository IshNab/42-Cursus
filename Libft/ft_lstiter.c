/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:28:21 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/13 16:57:21 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: iterates over the list 'lst' and
	applies a function 'f' onto the content of each node
		lst is address of a pointer to a node
		f is the address of the function to iterate on the list
*/
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return;
	while (lst != NULL)
	{
		//apply the function to the current node
		//content is data you want to operate on
		(f)(lst->content);
		//move to the next node
		lst = lst->next;
	}
}
