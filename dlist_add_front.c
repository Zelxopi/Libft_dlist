/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_add_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:22:33 by mtrembla          #+#    #+#             */
/*   Updated: 2023/03/07 16:07:06 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	dlist_add_front(t_dlist *l, void *elem)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		exit(0);
	new->content = elem;
	new->next = l->first;
	new->prev = NULL;
	if (l->first)
		l->first->prev = new;
	else
		l->last = new;
	l->first = new;
}
