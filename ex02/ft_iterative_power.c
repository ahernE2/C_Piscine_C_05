/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 12:48:56 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/11 13:27:55 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (i < power)
	{
		result *= nb;
		i ++;
	}
	return (result);
}
