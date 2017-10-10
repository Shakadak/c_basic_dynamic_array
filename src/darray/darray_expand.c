/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_expand.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:47:24 by npineau           #+#    #+#             */
/*   Updated: 2017/10/10 13:17:35 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_expand_front(t_darray *array)
{
	size_t	front_space;
	size_t	capacity;
	size_t	used;
	void	*space;

	if (array->start - array->fl <= 0)
	{
		used = array->end - array->start;
		front_space = used * (array->gf - 1.0);
		capacity = front_space + array->rl - array->start;
		space = ft_memalloc(capacity);
		ft_memcpy(space + front_space, array->start, used);
		free(array->fl);
		array->fl = space;
		array->start = space + front_space;
		array->end = space + front_space + used;
		array->rl = space + capacity;
	}
	return (array);
}

t_darray	*darray_expand_back(t_darray *array)
{
	size_t	front_space;
	size_t	capacity;
	size_t	used;
	void	*space;

	if (array->rl - array->end <= 0)
	{
		used = array->end - array->start;
		capacity = array->end - array->fl + used * (array->gf - 1.0);
		space = ft_memalloc(capacity);
		front_space = array->start - array->fl;
		ft_memcpy(space + front_space, array->start, used);
		free(array->fl);
		array->fl = space;
		array->start = space + front_space;
		array->end = space + front_space + used;
		array->rl = space + capacity;
	}
	return (array);
}
