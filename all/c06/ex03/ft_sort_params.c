/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 14:39:46 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/24 15:03:28 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char	*str)
{
	int	i;

	i = 0 ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char	*s1, char	*s2)
{
	int	i;

	i = 0 ;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_aff(int	ac, char	**av)
{
	int	i;

	i = 1 ;
	while (i < ac)
	{
		ft_putstr(av[i]);
		write(1, "\n", 1);
		i++;
	}
}

int	main(int	ac, char	**av)
{
	int		i;
	int		j;
	char	*tp;

	i = 1 ;
	while (av[i] != '\0')
	{
		j = i + 1;
		while (av[j] != '\0')
		{
			if (ft_strcmp(av[i], av[j]) > 0)
			{
				tp = av[i];
				av[i] = av[j];
				av[j] = tp;
			}
			j++;
		}
		i++;
	}
	i = 1;
	ft_aff(ac, av);
	return (0);
}
