/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thrio <thrio@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/23 11:14:27 by thrio             #+#    #+#             */
/*   Updated: 2022/10/08 15:28:21 by thrio            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i = 0;
	int	count = 0;
	char s[5];
	char dest[5];

	ft_memset(s, '1', 5);
	printf("ft_memset: %s", s);
	memset(s, '1', 5);
	printf("\nmemset: %s\n", s);
	bzero(s, 5);
	printf("bzero: %s\n", s);
	ft_bzero(s, 5);
	printf("ft_bzero: %s\n", s);
	memset(s, 'a', 5);
	memcpy(dest, s, 5);
	printf("memcpy: %s\n", dest);
	ft_bzero(dest, 5);
	ft_memcpy(dest, s, 5);
	printf("ft_memcpy: %s\n", dest);
	printf(ft_isalpha('a') == isalpha('a') ? "ft_isalpha: OK\n" : "ft_isalpha: KO\n");
	printf(ft_isalpha('0') == isalpha('0') ? "ft_isalpha: OK\n" : "ft_isalpha: KO\n");
	printf(ft_isdigit(0) == isdigit(0) ? "ft_isdigit: OK\n" : "ft_isdigit: KO\n");
	printf(ft_isdigit(49) == isdigit(49) ? "ft_isdigit: OK\n" : "ft_isdigit: KO\n");
	printf(ft_isalnum('e') == isalnum('e') ? "ft_isalnum: OK\n" : "ft_isalnum: KO\n");
	printf(ft_isalnum('4') == isalnum('4') ? "ft_isalnum: OK\n" : "ft_isalnum: KO\n");
	printf(ft_isalnum('$') == isalnum('$') ? "ft_isalnum: OK\n" : "ft_isalnum: KO\n");
	while(i<255)
	{
		if (ft_isascii(i) == isascii(i))
			count++;
		i++;
	}
	printf(count == 255 ? "ft_isascii: OK\n" : "ft_isascii: KO\n");
	i = 0;
	count = 0;
	while (i < 255)
	{
		if (ft_isprint(i) == isprint(i))
			count++;
		i++;
	}
	printf(count == 255 ? "ft_isprint: OK\n" : "ft_isprint: KO\n");
	printf(ft_strlen("Hello World") == strlen("Hello World") ? "ft_strlen: OK\n" : "ft_strlen: KO\n");
	printf(ft_toupper('H') == toupper('H') ? "ft_toupper: OK\n" : "ft_toupper: KO\n");
	printf(ft_toupper('t') == toupper('t') ? "ft_toupper: OK\n" : "ft_toupper: KO\n");
	printf(ft_toupper('4') == toupper('4') ? "ft_toupper: OK\n" : "ft_toupper: KO\n");
	printf(ft_tolower('4') == tolower('4') ? "ft_tolower: OK\n" : "ft_tolower: KO\n");
	printf(ft_tolower('4') == tolower('4') ? "ft_tolower: OK\n" : "ft_tolower: KO\n");
	printf(ft_tolower('4') == tolower('4') ? "ft_tolower: OK\n" : "ft_tolower: KO\n");
	printf(ft_strchr("AlphaBetz", 'z') == strchr("AlphaBetz", 'z') ? "ft_strchr: OK\n" : "ft_strchr: KO\n");
	printf(ft_strrchr("AlphazBzet", 'z') == strrchr("AlphazBzet", 'z') ? "ft_strrchr: OK\n" : "ft_strrchr: KO\n");
	printf(ft_strncmp("22222", "11111", 3) > 0 && strncmp("22222", "11111", 3) > 0 ? "ft_strncmp: OK\n" : "ft_strncmp: KO\n");
	printf(ft_strncmp("AAAAA", "ZZZZZ", 3) < 0 && strncmp("AAAAA", "ZZZZZ", 3) < 0 ? "ft_strncmp: OK\n" : "ft_strncmp: KO\n");
	printf(ft_strncmp("USIDJF", "XHNHN", 8) < 0 && strncmp("USIDJF", "XHNHN", 8) < 0 ? "ft_strncmp: OK\n" : "ft_strncmp: KO\n");
	printf(ft_strncmp("22222", "22222", 9) == 0 && strncmp("22222", "22222", 9) == 0 ? "ft_strncmp: OK\n" : "ft_strncmp: KO\n");
	return(1);
}
