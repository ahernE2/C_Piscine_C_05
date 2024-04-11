/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alejhern <alejhern@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 13:40:03 by alejhern          #+#    #+#             */
/*   Updated: 2024/04/11 13:42:01 by alejhern         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	result = nb;
	i = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	if (power > 0)
		result *= ft_recursive_power(nb, power - 1);
	return (result);
}
