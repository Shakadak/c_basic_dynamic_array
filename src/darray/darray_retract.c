/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_retract.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:24:58 by npineau           #+#    #+#             */
/*   Updated: 2017/03/27 12:25:20 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_retract_front(t_darray *array)
{
	size_t	front_space;
	size_t	capacity;
	size_t	used;
	void	*space;

	used = array->end - array->start;
	front_space = array->start - array->fl;
	if (front_space >= used * (array->gf * array->gf - 1.0))
	{
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

t_darray	*darray_retract_back(t_darray *array)
{
	size_t	front_space;
	size_t	back_space;
	size_t	capacity;
	size_t	used;
	void	*space;

	used = array->end - array->start;
	back_space = array->rl - array->end;
	if (back_space >= used * (array->gf * array->gf - 1.0))
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
