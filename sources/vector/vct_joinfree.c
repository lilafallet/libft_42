/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_joinfree.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/02 16:52:16 by lfallet           #+#    #+#             */
/*   Updated: 2020/04/02 19:17:42 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

t_vector *vct_joinfree(t_vector **vct1, t_vector **vct2, int flag)
{
	t_vector *new_vct;
	
	new_vct = vct_join(*vct1, *vct2);
	if (flag & FIRST)
		vct_del(vct1);
	else if (flag & SECOND)
		vct_del(vct2);
	return (new_vct);
}
