/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/05/08 16:29:01 by npineau           #+#    #+#             */
/*   Updated: 2015/05/08 16:29:03 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/mem.h"

void	*ft_memdup(void const *src, size_t const size)
{
	void	*copy;

	copy = ft_memalloc(size);
	ft_memcpy(copy, src, size);
	return (copy);
}
