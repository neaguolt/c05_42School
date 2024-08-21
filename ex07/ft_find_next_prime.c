/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 15:15:41 by deb               #+#    #+#             */
/*   Updated: 2024/08/21 19:08:04 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_find_next_prime(int nb);

int	ft_find_next_prime(int nb)
{
	int	div;

	if (nb <= 2)
		return (2);
	if (nb == 3)
		return (3);
	while (!(nb % 2) || !(nb % 3))
		nb++;
	div = 5;
	while (div * div <= nb)
	{
		while (!(nb % div) || !(nb % (div + 2)) || !(nb % 2) || !(nb % 3))
			nb++;
		div = div + 6;
	}
	return (nb);
}

int	main(void)
{
	printf("dupa 25 :%d\n", ft_find_next_prime(25));
	printf("dupa 31 :%d\n", ft_find_next_prime(32));
	return (0);
}
