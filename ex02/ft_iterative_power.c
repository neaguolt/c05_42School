/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 18:17:44 by deb               #+#    #+#             */
/*   Updated: 2024/08/18 18:29:37 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	it;
	int	res;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	it = 0;
	res = 1;
	while (it < power)
	{
		res = res * nb;
		it++;
	}
	return (res);
}
