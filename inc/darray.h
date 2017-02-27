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
	size_t			size;
	void			*ll;
	void			*start;
	void			*end;
	void			*rl;
}					t_darray;

#endif
