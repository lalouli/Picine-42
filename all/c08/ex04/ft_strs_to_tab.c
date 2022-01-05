/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 15:32:30 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/24 08:51:24 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>
#include<stdio.h>
#include "ft_stock_str.h"
int	ft_strlen(char	*str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char	*src)
{
	int		i;
	int		j;
	char	*s;

	while (src[i] != '\0')
		i++;
	s = malloc(sizeof(char) * (i + 1));
	j = 0;
	while (j < i)
	{
		s[j] = src[j];
		j++;
	}
	s[j] = 0;
	return (s);
}

struct s_stock_str	*ft_strs_to_tab(int	ac, char	**av)
{
	struct s_stock_str	*h;
	int					i;

	h = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!h)
		return (0);
	i = 0 ;
	while (i < ac)
	{
		h[i].size = ft_strlen(av[i]);
		h[i].str = av[i];
		h[i].copy = ft_strdup(av[i]);
		i++;
	}
	h[i].str = 0;
	return (h);
}
