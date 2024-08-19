/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 11:59:28 by deb               #+#    #+#             */
/*   Updated: 2024/08/19 12:21:30 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb);

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	square;

	if (nb < 0)
		return (0);
	sqrt = 0;
	square = 0;
	while (square <= nb)
	{
		sqrt++;
		square = sqrt * sqrt;
		if (square == nb)
			return (sqrt);
	}
	return (0);
}
