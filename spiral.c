#include <stdio.h>

int		goEast(int arr[5][5], int *i, int *j)
{
	if (*j == 4 || arr[*i][*j+1])
		return(0);
	(*j)++;
	return(1);
}

int		goSouth(int arr[5][5], int *i, int *j)
{
	if (*i == 4 || arr[*i+1][*j])
		return(0);
	(*i)++;
	return(1);
}

int		goWest(int arr[5][5], int *i, int *j)
{
	if (*j == 0 || arr[*i][*j-1])
		return(0);
	(*j)--;
	return(1);
}

int		goNorth(int arr[5][5], int *i, int *j)
{
	if (*i == 0 || arr[*i-1][*j])
		return(0);
	(*i)--;
	return(1);
}

void	printArr(int arr[5][5])
{
	for (int i=0; i<5; i++)
	{
		for (int j=0; j<5; j++)
		{
			printf("[%d", arr[i][j]);
			if (arr[i][j] < 10)
				printf(" ");
			printf("]");
		}
		printf("\n");
	}
}

int		main(void)
{
	int	arr[5][5] = {0,};
	int	i=0, j=0;
	int	(*fnArr[4])(int[5][5], int*, int*) = {goEast, goSouth, goWest, goNorth};
	int	fnIdx = 0;

	for (int num=1; num <= 25; num++)
	{
		arr[i][j] = num;
		if (!fnArr[fnIdx](arr, &i, &j))
		{
			fnIdx = fnIdx == 3 ? 0 : fnIdx + 1;
			fnArr[fnIdx](arr, &i, &j);
		}
	}
	printArr(arr);
}