/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:37:08 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/17 10:39:24 by hlalouli         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_putstr(char	*str)
{
	char	*k;

	k = str ;
	while (*k != 0)
	{
		write(1, k, 1);
		k++;
	}
	write(1, "\n", 1);
}

int	main(int	argc, char	**argv)
{
	int	i ;

	i = argc - 1 ;
	while (i > 0)
	{
		ft_putstr(argv[i]);
		i--;
	}
	return (0);
}
