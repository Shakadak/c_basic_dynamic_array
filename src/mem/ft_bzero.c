/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 11:44:42 by npineau           #+#    #+#             */
/*   Updated: 2014/05/06 13:04:09 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/mem.h"

void	ft_bzero(void *src, size_t len)
{
	unsigned char	*mem;

	mem = (unsigned char *)src;
	if (mem)
	{
		while (len > 0)
			mem[--len] = 0;
	}
}
