/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 09:38:02 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/22 12:24:37 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int	ft_strlen(char	*str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strcpy(char	*dest, char	*src)
{
	int	i;

	i = 0 ;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	countlen(int	size, char	**strs, char	*sep)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < size)
		j += ft_strlen(strs[i++]);
	if (size > 0)
		j += ft_strlen(sep) * (size - 1);
	return (j);
}

char	*ft_strjoin(int	size, char	**strs, char *sep)
{	
	char	*t;
	int		i;
	int		j;

	j = countlen(size, strs, sep);
	t = malloc(sizeof(char) * (j + 1));
	if (!t)
		return (NULL);
	i = 0 ;
	j = 0 ;
	while (i < size)
	{
		ft_strcpy(t + j, strs[i]);
		j += ft_strlen(strs[i]);
		if (++i < size)
		{
			ft_strcpy(t + j, sep);
			j += ft_strlen(sep);
		}
	}
	t[j] = 0;
	return (t);
}
