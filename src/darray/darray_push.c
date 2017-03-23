/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:47:32 by npineau           #+#    #+#             */
/*   Updated: 2017/03/23 12:47:34 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_push_front(void *elem, t_darray *array)
{
	array = darray_expand_front(array);
	ft_memcpy(array->start - array->size, elem, array->size);
	array->start = array->start - array->size;
	return (array);
}

t_darray	*darray_push_back(void *elem, t_darray *array)
{
	array = darray_expand_back(array);
	ft_memcpy(array->end, elem, array->size);
	array->end = array->end + array->size;
	return (array);
}
