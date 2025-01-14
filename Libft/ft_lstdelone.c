/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:27:55 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/10 18:59:08 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: takes a node as a parameter
	free memory of the node's content using the function 'del'
	memory of next is not freed
	function only deletes a node, does not take care of next pointer
lst: the node to free
del: the address of the function used to delete the content
*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	//if you have a null pointer for lst and del
	if (!lst || !del)
		return;
	//call the function del on the content of the list
	//free the content pointed to by void
	del(lst->content);
	//free the lst
	free(lst);
}
