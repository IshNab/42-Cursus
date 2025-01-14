/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:26:27 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/08 16:53:00 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: add the node 'new' to the beginning of the list
lst: address of a pointer to the first link of a list
new: addresss of a pointer to the node to be added to the list
*/
#include "libft.h"

//function takes a pointer to a pointer of the 1st element (head)
//and a pointer to a new node
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if(lst && new)
	{
		//set the 'next' of the new element to point to the current 1st element
		new->next = *lst;
		//update the head of the list to point to the new element
		*lst = new;
	}
}
