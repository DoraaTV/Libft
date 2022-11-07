/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 18:23:30 by thrio             #+#    #+#             */
/*   Updated: 2022/09/06 18:29:43 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*result;
	int		i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			result = (char *)s + i;
		i++;
	}
	if (s[i] == c)
		return ((char *)s + i);
	if (result[0] != '\0')
		return (result);
	return (NULL);
}
