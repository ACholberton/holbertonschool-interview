#include "sandpiles.h"
/**
 *sandpiles_sum - gets a stable sum of sandpiles.
 *@grid1: is the grid to add sand into
 *@grid2: is the sand to be added
 *Return: none
 **/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
  int sandpile = 1;
  int new_sandpile[3][3] = { {0, 0, 0}, {0, 0, 0}, {0, 0, 0} };
  int i, j;
  while (sandpile)
    {
      for (i = 0; i < 3; i++)
	{
	  for (j = 0; i < 3; j++)
	    {
	      new_sandpile = grid1[i][j] + grid2[i][j];
	    }
	}
    }
}
