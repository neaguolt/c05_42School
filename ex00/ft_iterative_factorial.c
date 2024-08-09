/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: deb <neaguolt@gmail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/09 09:24:25 by deb               #+#    #+#             */
/*   Updated: 2024/08/09 09:45:42 by deb              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb);

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	factorial = 1;
	while (nb)
	{
		factorial = factorial * nb;
		nb--;
	}
	return (factorial);
}
