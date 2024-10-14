/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pyarova <pyarova@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:36:13 by pyarova           #+#    #+#             */
/*   Updated: 2024/10/08 12:02:39 by pyarova          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 1;
	while (i <= nb / i)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("Square root of 16: %d\n", ft_sqrt(0));
	printf("Square root of 25: %d\n", ft_sqrt(25));
	printf("Square root of 10: %d\n", ft_sqrt(10));
	printf("Square root of 2147395600: %d\n", ft_sqrt(2147395600));
	return (0);
}*/
