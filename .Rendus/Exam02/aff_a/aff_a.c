/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/09/18 17:07:43 by exam              #+#    #+#             */
/*   Updated: 2015/09/18 17:34:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	j = 0;
	if (argc == 2)
	{
		while (argv[i])
		{
			while (argv[i][j])
			{
				if (argv[i][j] == 'a')
					write(1, "a", 1);
				j++;
			}
			i++;
		}
	}
	else
		write(1, "a", 1);
	write(1, "\n", 1);
	return (0);
}
