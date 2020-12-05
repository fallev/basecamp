/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faugusto <faugusto@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 22:54:15 by vvarussa          #+#    #+#             */
/*   Updated: 2020/11/30 02:01:40 by faugusto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_board(int puzzle[][4])
{
	int		t;
	int		i;
	char	c;

	t = 0;
	while (t < 4)
	{
		i = 0;
		while (i < 4)
		{
			c = puzzle[t][i] + '0';
			write(1, &c, 1);
			write(1, " ", 1);
			i++;
		}
		write(1, "\n", 1);
		t++;
	}
}

int		size_of_set(int *set)
{
	int i;

	i = 0;
	while (*(set + i) != 0)
		i++;
	return (i);
}

void	copy_to(int *set, int *new)
{
	int i;

	i = 0;
	while (i <= size_of_set(set))
	{
		*(new + i) = *(set + i);
		i++;
	}
}

void	merge_set(int *set, int *new)
{
	int temp[5];
	int i;
	int r;
	int t;

	i = 0;
	r = 0;
	while (i < size_of_set(new))
	{
		t = 0;
		while (t < size_of_set(set))
		{
			if (*(set + t) == *(new + i))
			{
				*(temp + r) = *(new + i);
				r++;
			}
			t++;
		}
		i++;
	}
	*(temp + r) = 0;
	copy_to(temp, set);
}

int		valid(int (*puzzle)[4], int *row_column, int guess, int *titulos)
{
	int		regras[5];
	int		row;
	int		column;
	int		x;
	int		i;
	int		defined_sets[4][4][5] =
	{
		{
			{4, 0},
			{1, 2, 3, 0},
			{1, 2, 3, 0},
			{1, 2, 3, 0}
		},
		{
			{1, 2, 3, 0},
			{4, 1, 2, 0},
			{1, 2, 3, 4, 0},
			{1, 2, 3, 4, 0}
		},
		{
			{1, 2, 0},
			{1, 2, 3, 0},
			{1, 2, 3, 4, 0},
			{1, 2, 3, 4, 0}
		},
		{
			{1, 0},
			{2, 0},
			{3, 0},
			{4, 0}
		}
	};
	row = row_column[0];
	column = row_column[1];
	x = 0;
	while (x < 4)
	{
		if (puzzle[row][x] == guess)
			return (0);
		if (puzzle[x][column] == guess)
			return (0);
		x++;
	}
	if (row == 2 && titulos[column] == 3 &&
puzzle[row - 2][column] == 2 && puzzle[row - 1][column] == 1 && guess != 3)
		return (0);
	if (column == 2 && titulos[row + 8] == 3 &&
puzzle[row][column - 2] == 2 && puzzle[row][column - 1] == 1 && guess != 3)
		return (0);
	copy_to(defined_sets[titulos[column] - 1][row], regras);
	merge_set(regras, defined_sets[titulos[column + 4] - 1][3 - row]);
	merge_set(regras, defined_sets[titulos[row + 8] - 1][column]);
	merge_set(regras, defined_sets[titulos[row + 12] - 1][3 - column]);
	i = 0;
	while (i < size_of_set(regras))
	{
		if (guess == *(regras + i))
			return (1);
		i++;
	}
	return (0);
}

int		find_empty_cell(int (*puzzle)[4], int *row, int *column) 
{
	int x;
	int y;

	x = 0;
	y = 0;
	while (x < 4)
	{
		while (y < 4)
		{
			if (puzzle[x][y] == 0)
			{
				*row = x;
				*column = y;
				return (1);
			}
			y++;
		}
		x++;
		y = 0;
	}
	return (0);
}

int		solve(int (*puzzle)[4], int *titulos)
{
	int row;
	int column;
	int t;
	int row_column[2];

	t = 0;
	row = 0;
	column = 0;
	t = 0;
	if (find_empty_cell(puzzle, &row, &column) == 0)
	{
		return (1);
	}
	t = 4;
	while (t > 0)
	{
		row_column[0] = row;
		row_column[1] = column;
		if (valid(puzzle, row_column, t, titulos) == 1)
		{
			puzzle[row][column] = t;
			if (solve(puzzle, titulos) == 1)
			{
				return (1);
			}
			puzzle[row][column] = 0;
		}
		t--;
	}
	return (0);
}

int		main(int argc, char **argv)
{
	int puzzle[4][4] = {{0, 0, 0, 0},
						{0, 0, 0, 0},
						{0, 0, 0, 0},
						{0, 0, 0, 0}};
	int i;
	int t;
	int titulos[16];

	i = 0;
	t = 0;
	while (argv[1][i] != '\0')
	{
		if (argv[1][i] < 5 + '0' && argv[1][i] > 0 + '0')
		{
			*(titulos + t) = argv[1][i] - '0';
			t++;
			i++;
		}
		else
			i++;
	}
	if (i != 31 || t != 16 || argc != 2)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	if (solve(puzzle, titulos) != 1)
	{
		write(1, "Error\n", 6);
		return (0);
	}
	print_board(puzzle);
}
