/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmoliele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 22:07:56 by mmoliele          #+#    #+#             */
/*   Updated: 2017/05/22 22:52:29 by mmoliele         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

void	toupper(char ch);

int		main(int agc, char **arg)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (agc > 1)
	{
		while (arg[i] && arg[i] != '\0')
		{
			j = 0;
			while (arg[i][j] && arg[i][j] != '\0')
			{
				toupper(arg[i][j]);
				j++;
			}
			i++;
		}
	}
	else
	{
		std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
	}
	return (0);
}

void	toupper(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - ('a' - 'A');
		std::cout<<c;
	}
	else if (c >= 'A' && c <= 'Z')
	{
		std::cout<<c;
	}
	else
		std::cout<<c;
}
