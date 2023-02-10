/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:26:15 by mtrembla          #+#    #+#             */
/*   Updated: 2023/02/10 13:36:30 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	dlist_free(t_dlist *l)
{
	t_node	*temp;
	t_node	*next;

	next = l->first;
	while (next)
	{
		temp = next;
		next = next->next;
		free(temp);
	}
	l->first = NULL;
	l->last = NULL;
}

void	dlist_free_content(t_dlist *l)
{
	t_node	*temp;
	t_node	*next;

	next = l->first;
	while (next)
	{
		temp = next;
		next = next->next;
		free(temp->content);
		free(temp);
	}
	l->first = NULL;
	l->last = NULL;
}
