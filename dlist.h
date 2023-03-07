/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dlist.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtrembla <mtrembla@student.42quebec>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/10 13:10:18 by mtrembla          #+#    #+#             */
/*   Updated: 2023/03/07 16:08:17 by mtrembla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DLIST_H
# define DLIST_H

# include <stdio.h>
# include "../libft/libft.h"

/*
To use with other type of variable, modify s_node *content
and both dlist_add prototype.
*/
typedef struct s_node
{
	void			*content;
	struct s_node	*next;
	struct s_node	*prev;
}					t_node;

typedef struct s_dlist
{
	t_node			*first;
	t_node			*last;
}					t_dlist;

//add node to end of list
void	dlist_add_back(t_dlist *l, void *elem);
//add node to front of list
void	dlist_add_front(t_dlist *l, void *elem);
//free list
void	dlist_free(t_dlist *l);
//free list AND content
void	dlist_free_content(t_dlist *l);
//remove a node, no free
void	dlist_remove_node(t_dlist *l, t_node *node);
//print list content
void	view(t_dlist l);

#endif