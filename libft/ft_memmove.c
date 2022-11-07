/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 09:48:29 by thrio             #+#    #+#             */
/*   Updated: 2022/08/29 22:16:39 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*src2;
	unsigned char	*dest2;

	i = n - 1;
	src2 = (unsigned char *)src;
	dest2 = (unsigned char *)dest;
	if (dest2 > src2)
	{
		while (i < n)
		{
			dest2[n - i] = src2[n - i];
			i++;
		}
	}
	else
	{
		while (i < n)
		{
			dest2[i] = src2[i];
			i++;
		}
	}
	return (dest);
}
