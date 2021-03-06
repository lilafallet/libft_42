/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_del.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/29 17:34:35 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:34:37 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vct_del(t_vector **vct)
{
	if (vct != NULL && *vct != NULL)
	{
		free((*vct)->str);
		free(*vct);
		*vct = NULL;
	}
}
