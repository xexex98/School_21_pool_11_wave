/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 23:05:07 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/03 23:24:46 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <stdlib.h>
#include <stdio.h>

void	*btree_search_item(t_btree	*root, void	*data_ref,
			int	(*cmpf)(void	*, void	*))
{
	if (root == NULL || root->data_ref == data_ref) 
		return (root);
	else if ((*cmpf)(item, (*root)->item) < 0)
		btree_insert_data(&(*root)->left, item, cmpf);
	else
		btree_insert_data(&(*root)->right, item, cmpf);
}

void	*btree_search_item(t_btree	*root, void	*data_ref,
			int	(*cmpf)(void	*, void	*))
{
    if (root == NULL)
        return root;
    btree_search_item(root -> left, data_ref, cmpf);
   	if (*cmpf)
	btree_search_item(root -> right, data_ref, cmpf);
}

void	btree_apply_infix(t_btree	*root, void	(*applyf)(void *))
{
	if (root != NULL)
	{
		btree_apply_infix(root->left, applyf);
		applyf(root->item);
		btree_apply_infix(root->right, applyf);
	}
}
