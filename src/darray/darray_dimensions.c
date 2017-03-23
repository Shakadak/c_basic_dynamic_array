/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_dimensions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/23 12:47:17 by npineau           #+#    #+#             */
/*   Updated: 2017/03/23 12:47:19 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"

size_t	darray_used(t_darray const *const array)
{
	return (array->end - array->start) / array->size;
}

size_t	darray_capacity(t_darray const *const array)
{
	return (array->rl - array->fl) / array->size;
}
