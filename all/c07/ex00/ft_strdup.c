/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 09:51:22 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/19 11:14:15 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
char	*ft_strdup(char	*src)
{
	int		i;
	char	*k;
	int		j;

	i = 0 ;
	while (src[i] != '\0')
		i++;
	k = malloc(sizeof(char) * (i + 1));
	j = 0 ;
	while (src[j] != '\0' && i > j)
	{
		k[j] = src[j];
		j++;
	}
	k[j] = '\0';
	return (k);
}
