/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: inabakka <inabakka@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/07 17:27:14 by inabakka          #+#    #+#             */
/*   Updated: 2025/01/08 18:01:31 by inabakka         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
function: return the last node of the list
lst: beginning of the list
*/
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if(!lst)
		return(NULL);
	while(lst->next != NULL)
	{
		//go to the next node
		lst = lst->next;
	}
	//if find that lst_next == NULL, return lst
	return(lst);
}
