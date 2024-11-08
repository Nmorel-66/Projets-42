/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nimorel <nimorel@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:43:17 by nimorel           #+#    #+#             */
/*   Updated: 2024/11/07 15:54:33 by nimorel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*dest;
	size_t			i;

	dest = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		dest[i] = '0';
		i++;
	}
}
/*La  fonction bzero() met à 0 les n premiers octets du bloc pointé par s
       (octets contenant « \0 »)*/
/*
int	main(void)
{
	char	str[10] = "Hello";
	printf("avant bzero : %s\n", str);
	ft_bzero(str, 5);
	printf("apres bzero : %s\n", str);
	return (0);	
}*/