/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:47:27 by npineau           #+#    #+#             */
/*   Updated: 2017/03/23 12:47:29 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"
#include "inc/mem.h"

t_darray	darray_new(double growth_factor, size_t size, size_t capacity)
{
	t_darray	new;

	new.gf = growth_factor;
	new.size = size;
	new.fl = ft_memalloc(size * capacity);
	new.start = new.fl + (capacity / 2) * size;
	new.end = new.start;
	new.rl = new.fl + capacity * size;
	return new;
}
