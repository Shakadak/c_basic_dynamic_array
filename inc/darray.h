/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 12:35:01 by npineau           #+#    #+#             */
/*   Updated: 2016/10/02 12:35:04 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARRAY_H
# define DARRAY_H

# include <stddef.h>

typedef struct		s_darray
{
	double			gf;
	size_t			size;
	void			*fl;
	void			*start;
	void			*end;
	void			*rl;
}					t_darray;

t_darray			darray_new(double growth_factor, size_t size, size_t capacity);

size_t				darray_used(t_darray const * const array);
size_t				darray_capacity(t_darray const * const array);

t_darray			*darray_expand_front(t_darray *array);
t_darray			*darray_expand_back(t_darray *array);

t_darray			*darray_push_front(void *elem, t_darray *darray);
t_darray			*darray_push_back(void *elem, t_darray *darray);

#endif
