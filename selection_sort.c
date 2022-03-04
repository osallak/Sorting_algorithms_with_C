/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   selection_sort.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osallak <osallak@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 10:54:09 by osallak           #+#    #+#             */
/*   Updated: 2022/03/04 21:35:29 by osallak          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	selection_sort(int *tab, int size)
{
	int	tmp;

	for (int i = 0; i < size; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (tab[i] > tab[j])
			{
				tmp = tab[i];
				tab[i] = tab[j];
				tab[j] = tmp;
			}
		}
	}
}

//main function just for test
int	main(void)
{
	//befor the sort
	int tab[] = {5, 4, 55, 0, -1};
	selection_sort(tab, 5);
	//it will look like this after we call the sort function : -1 0 4 5 55
	//print the result
	for (int i = 0; i < 5; i++)
		printf("%d ", tab[i]);
}
