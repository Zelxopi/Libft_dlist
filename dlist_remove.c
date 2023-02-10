/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_remove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:24:43 by mtrembla          #+#    #+#             */
/*   Updated: 2023/02/10 13:37:24 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	dlist_remove_node(t_node *node)
{
	if (!node->prev && !node->next)
		return ;
	else if (!node->prev)
		node->next->prev = NULL;
	else if (!node->next)
		node->prev->next = NULL;
	else
		node->prev->next = node->next;
	node->next->prev = node->prev;
}
