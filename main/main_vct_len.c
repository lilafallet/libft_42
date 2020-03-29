/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_vct_len.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lfallet <lfallet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/28 19:58:07 by lfallet           #+#    #+#             */
/*   Updated: 2020/03/29 17:49:09 by lfallet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_vector	*vct1;
	t_vector	*vct2;
	t_vector	*vct3;
	t_vector	*vct4;
	size_t		len;

	if (ac == 5)
	{
		vct1 = vct_new();
		vct2 = vct_new();
		vct3 = vct_new();
		vct4 = vct_new();
		vct_addstr(vct1, av[1]);
		len = vct_getlen(vct1);
		printf("len add 1 = %zu\n", len); /*debug*/
		vct_addstr(vct2, av[2]);
		len = vct_getlen(vct2);
		printf("len add 2 = %zu\n", len); /*debug*/
		vct_addstr(vct3, av[3]);
		len = vct_getlen(vct3);
		printf("len add 3 = %zu\n", len); /*debug*/
		vct_addstr(vct4, av[4]);
		len = vct_getlen(vct4);
		printf("len add 4 = %zu\n", len); /*debug*/
		vct_del(&vct1);
		vct_del(&vct2);
		vct_del(&vct3);
		vct_del(&vct4);
		return (EXIT_SUCCESS);
	}
	return (EXIT_FAILURE);
}
