/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist_view.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:35:24 by mtrembla          #+#    #+#             */
/*   Updated: 2023/03/07 16:07:54 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dlist.h"

void	view(t_dlist l)
{
	t_node	*aff;
	int		i;

	i = 1;
	aff = l.first;
	while (aff)
	{
		printf("----------------\n");
		printf("node%d:[%s]\n", i++, (char *)aff->content);
		aff = aff->next;
	}
}

// void	view(t_dlist l)
// {
// 	t_node	*aff;

// 	aff = l.first;
// 	while (aff)
// 	{
// 		printf("----------------\n");
// 		printf("aff->content");
// 		aff = aff->next;
// 	}
// }
