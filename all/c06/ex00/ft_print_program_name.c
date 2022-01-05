/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlalouli <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 09:00:28 by hlalouli          #+#    #+#             */
/*   Updated: 2021/08/17 09:45:42 by hlalouli         ###   ########.fr       */
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
	ft_putstr(argv[0]);
	(void)argc ;
	return (0);
}
