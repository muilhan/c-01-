/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muilhan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 12:49:16 by muilhan           #+#    #+#             */
/*   Updated: 2022/09/02 13:59:08 by muilhan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

void	ft_swap(int *ptr1, int *ptr2)
{
	int	c;

	c = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = c;
}

/*int	main(void)
{
	int	x;
	int	y;

	x = 18;
	y = 32;
	ft_swap (&x, &y);
	printf("x : %d y : %d", x, y);
}*/
