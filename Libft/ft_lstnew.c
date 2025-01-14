/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:26:39 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/14 16:26:52 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: allocates with malloc and returns a new node pointer
want to create a new node with the content as the parameter
variable 'content' initialized with the value of the parameter 'content'
variable 'next' initialized to NULL
return needs to be the new node
do not 'free' anything because function purpose to create and return a new node
node will be freed later on in a program
*/
#include "libft.h"
//return a pointer to a t_list structure (type of node in linked list)
//content is a pointer to some generic data type
//content will be stored in the new node
t_list	*ft_lstnew(void *content)
{
	//create pointer node of type t_list
	t_list	*new_node;

	//allocate memory for the new node
	new_node = malloc(sizeof(t_list));
	if (new_node == NULL)
		return(NULL);
	//if malloc works, content of node points to content
	new_node->content = content;
	//sets next pointer of the node to NULL
	new_node->next = NULL;
	return(new_node);
}
