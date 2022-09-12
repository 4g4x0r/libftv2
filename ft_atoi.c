/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: guortun- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:04:05 by guortun-          #+#    #+#             */
/*   Updated: 2022/08/23 12:00:02 by guortun-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	num;
	int		neg;

	num = 0;
	neg = 1;
	while (*str == 32 || (*str <= 13 && *str >= 9))
		str++;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			neg *= -1;
		str++;
	}
	if (!(*str >= 48 && *str <= 57))
		return (0);
	while (*str >= 48 && *str <= 57)
	{
		num = num * 10 + (*str - 48);
		str++;
	}
	if (num > 9223372036854775807 && neg == 1)
		return (-1);
	else if (num > 9223372036854775807 && neg == -1)
		return (0);
	return (num * neg);
}
