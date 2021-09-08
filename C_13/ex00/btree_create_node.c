/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:22:09 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/03 22:54:52 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

t_btree	*btree_create_node(void	*item)
{
	t_btree	*btree;

	btree = (t_btree *)malloc(sizeof(t_btree));
	if (btree)
	{
		btree->item = item;
		btree->left = NULL;
		btree->right = NULL;
	}
	return (btree);
}
