/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:27:36 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/20 11:55:04 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: add the node 'new' at the end of the list
lst: address of a pointer to the first link of a list
new: address of a pointer to the node to be added to the list
*/
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if(lst && new)
	{
		//if the list is empty, the new head is set to new
		if(*lst == NULL)
			*lst = new;
		else
		{
			/*create a temporary pointer to iterate through to the last node
			need temp pointer bc lst is a pointer to a pointer (**lst)
			if iterate on lst, will change address of the head and other bad things
			using a temp pointer keeps lst intact and can safely traverse the list
			*/
			t_list	*temp = *lst;
			//iterate to the last node, find the end of the list
			while (temp->next != NULL)
			{
				temp = temp->next;
			}
			//now temp is pointing to the last node, add the new node after it
			//set the next node of temp to new
			temp->next = new;
		}
		//do not have to set new->next = NULL, because new was initialized to NULL
	}
}
