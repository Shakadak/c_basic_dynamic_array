/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/26 11:54:02 by npineau           #+#    #+#             */
/*   Updated: 2015/01/06 17:11:05 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/mem.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	mem = NULL;
	if (size > 0)
	{
		mem = malloc(sizeof(void *) * size);
		if (mem)
			ft_bzero(mem, size);
	}
	return (mem);
}
