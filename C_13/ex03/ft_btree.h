/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbarra <mbarra@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/03 19:21:57 by mbarra            #+#    #+#             */
/*   Updated: 2021/09/03 22:55:02 by mbarra           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef struct s_btree
{
	struct s_btree	*left;
	struct s_btre	*right;
	void			*item;
}				t_btree;

t_btree	*btree_create_node(void	*item);
void	btree_apply_suffix(t_btree	*root, void	(*applyf)(void *));
#endif