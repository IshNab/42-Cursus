/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:28:07 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/20 12:18:55 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: deletes and frees the given node and whatever follows that node
	uses the function 'del' and 'free'
	at end, pointer to the list set to NULL
lst: address of a pointer to a node
del: address of the function used to delete the content of the node
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	//current will allow us to iterate over the list
	t_list	*current;
	t_list	*tmp;
	//check for potential null pointers in lst and del
	if(!lst || !del)
		return;
	//set current pointer to the first node/element
	current = *lst;
	while(current != NULL)
	{
		/*tmp pointing to the first node
		tmp allows to free things, cannot free with current
		if free the current node then lose access to the full node, need tmp variable!!
		*/
		tmp = current;
		//update current to next node
		current = current->next;
		//delete the content of the node
		del(tmp->content);
		//finally free the node itself
		free(tmp);
	}
	//set value of lst to NULL
	*lst = NULL;
}
