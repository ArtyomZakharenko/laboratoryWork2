#include <stdio.h>

int
main ()
{
  int i, j;
  const int size = 3;
  int array[3][3] = { {1, 2, 3}, {4, 5, 6}, {10, 8, 9} };

  for (i = 0; i < size; i++)
    {
      for (j = 0; j < size; j++)
	{
	  printf ("%2d", array[i][j]);
	}
      printf ("\n");
    }
  int maxElement = array[0][0];
  for (i = 1; i < size; i++)
    {
      if (maxElement < array[i][i])
	{
	  maxElement = array[i][i];
	}
    }

  for (i = 1; i < size; i++)
    {
      for (j = 0; j < i; j++)
	{
	  if (array[i][j] > maxElement)
	    {
	      printf ("%d", array[i][j]);
	    }
	}
    }
  printf ("%d", maxElement);
  return 0;
}
