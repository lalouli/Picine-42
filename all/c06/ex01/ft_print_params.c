/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:01:40 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/17 10:10:17 by hlalouli         ###   ########.fr       */
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

	i = 1 ;
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
