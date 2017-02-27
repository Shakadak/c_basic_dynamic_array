/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_array_free.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/05/23 12:14:47 by npineau           #+#    #+#             */
/*   Updated: 2015/01/20 11:52:20 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_freesplit(void **array)
{
	void	*tmp;

	tmp = array;
	while (*array)
	{
		free(*array);
		(array)++;
	}
	free(tmp);
}
