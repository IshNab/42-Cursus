/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:28:43 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/14 18:16:44 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: iterate on list and apply function 'f' onto the content of each node
create a new lst after applying function 'f'
'del' function used to delete the content of a node
lst: address of a pointer to a node
f: address of the function used to iterate on the list
del: address of the function used to delete the content of a node
returns a new list or NULL if allocation fails
*/

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	//new is the new lst that I am creating
	t_list	*new_lst;
	//temporary pointer to a new node
	t_list	*new_node;
	//check if original lst and f exist
	if (!lst || !f)
		return(NULL);
	//initialize the new list
	new_lst = NULL;
	//iterate on original list
	while (lst)
	{
		/*
		apply function f onto the content of lst, then create a new list from that
		function f returns a void pointer which is the input for the function lstnew
		finally assign that to the new node
		create a new node, input is a void pointer, processed by function 'f' given as an input
		*/
		new_node = ft_lstnew(f(lst->content));
		//if creating the new node with ft_lstnew doesn't work, clear the list and return NULL
		if(!new_node)
		{
			//if memory allocation fails when creating a new node, clear nodes you already made
			//free all nodes in the new list and calls delete on their content
			ft_lstclear(&new_lst, del);
			//return NULL or return the new_lst?
			return(NULL);
		}
		//if succesful node creation, it is added to the new list, append node to list
		//each newly created node is added to end of the new list
		ft_lstadd_back(&new_lst, new_node);
		//keep iterating through the list
		lst = lst->next;
	}
	//return new list
	return(new_lst);
}
