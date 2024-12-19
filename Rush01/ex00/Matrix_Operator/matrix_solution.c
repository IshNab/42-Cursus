/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_solution.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dinepomu <dinepomu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/13 11:08:13 by ahugi             #+#    #+#             */
/*   Updated: 2024/10/13 17:52:41 by dinepomu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Populate matrix initial solution for the skyscraper problem
1) Edges
	1.1) 4 with 1
	1.2) 1 with 4
{	
		col1up1, col2up, col3up, col4up 
row1left[a00, 	a01, 	a02, 	a03]row1right
row2left[a10, 	a11,	a12, 	a13]row2right	
row3left[a20, 	a21, 	a22, 	a23]row3right
row4lef	[a30, 	a31, 	a32, 	a33]row4right
}		col1down col2down col3down col4down


if(a[0][0] = 4(a00=col1up1) = a [0][0] = 1;
a01(a01=col2up) = a01;
a02(a02=col3up) = a02;
a03(a03=col4up) = a03;
a13(a30=row1right) = a03;
a12(a31=row2right) = a13;
a11(a32=row3right) = a23;
a10(a33=row4right) = a33;
a20(a10=col1down) = a30;
a21(a11=col2down) = a31;
a22(a12=col3down) = a32;
a23(a13=col4down) = a33;
a33(a20=row1left) = a00;
a32(a21=row2left) = a10;
a31(a22=row3left) = a20;
a30(a23=row4left) = a30;
*/
#include <stdlib.h>

int	**ft_matrix_solution(int **matrix_flags)
{
	int	**matrix_solution;
	int	i;
	int	j;

	i = 0;
	matrix_solution = (int **)malloc(4 * sizeof(int *));
	while (i < 4)
	{
		matrix_solution[i] = (int *)malloc(4 * sizeof(int));
		i++;
	}
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (matrix_flags[i][j] == 1)
				matrix_solution[i][j] = 4;
			else if (matrix_flags[i][j] == 4)
				matrix_solution[i][j] = 1;
			else
			{
				matrix_solution[i][j] = 0;
			}
			j++;
		}
		i++;
	}
	return (matrix_solution);
}
