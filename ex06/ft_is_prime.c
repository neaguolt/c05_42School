/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:35:11 by deb               #+#    #+#             */
/*   Updated: 2024/08/19 13:19:36 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

int	ft_is_prime(int nb)
{
	int	div;

	if (nb == 2)
		return (1);
	div = 2;
	while ((div <= nb) && (nb % div))
		div++;
	if (div == nb)
		return (1);
	return (0);
}
