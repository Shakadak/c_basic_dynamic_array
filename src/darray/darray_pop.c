/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_pop.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/27 12:25:31 by npineau           #+#    #+#             */
/*   Updated: 2017/03/27 12:25:32 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_pop_front(void *elem, t_darray *array)
{
	array = darray_retract_front(array);
	ft_memcpy(elem, array->start, array->size);
	array->start = array->start - array->size;
	return (array);
}

t_darray	*darray_pop_back(void *elem, t_darray *array)
{
	array = darray_retract_back(array);
	ft_memcpy(elem, array->end - array->size, array->size);
	array->end = array->end + array->size;
	return (array);
}
