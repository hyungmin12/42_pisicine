/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yebikim <yebikim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 16:55:08 by yebikim           #+#    #+#             */
/*   Updated: 2022/05/22 22:05:58 by hyyoo            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	square(char a, char b, char c, int x)
{
	int	i;

	i = 1;
	while (i <= x)
	{
		if (i == 1)
			ft_putchar(a);
		else if (i == x)
			ft_putchar(c);
		else
			ft_putchar(b);
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;

	i = 1;
	if (x < 0 || y <= 0)
		return ;
	while (i <= y)
	{
		if (i == 1)
			square('A', 'B', 'C', x);
		else if (i == y)
			square('C', 'B', 'A', x);
		else
			square('B', ' ', 'B', x);
		ft_putchar('\n');
		i++;
	}
}
