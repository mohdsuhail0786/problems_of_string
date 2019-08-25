#include<stdio.h>
//#include<conio.h>


void radixsort (int[], int);

void
main ()
{
  int r[50], i, n;
  //clrscr();
  printf ("\n enter the no of elements=");
  scanf ("%d", &n);
  printf ("\n enter the elements of the array=");
  for (i = 0; i < n; i++)
    {
      scanf ("%d", &r[i]);
    }
  radixsort (r, n);
  //getch();
}

void
radixsort (int r[], int n)
{
  int basket[10][10], i, j, k, l, buck[10], max, pass = 0, d, t, m;
  max = r[0];
  for (i = 1; i < n; i++)
    {
      if (max < r[i])
	max = r[i];
    }

  while (max > 0)
    {
      pass++;
      max = max / 10;
    }
  d = 1;
  for (i = 0; i < pass; i++)
    {
      for (j = 0; j < 10; j++)
	buck[j] = 0;

      for (k = 0; k < n; k++)
	{
	  t = (r[k] / d) % 10;
	  basket[t][buck[t]] = r[k];
	  buck[t]++;
	}
      m = 0;
      for (k = 0; k < 10; k++)
	{
	  for (l = 0; l < buck[k]; l++)
	    {
	      r[m] = basket[k][l];
	      m++;
	    }
	}


      d = d * 10;
    }

  printf ("\n your sorted array is=");
  for (i = 0; i < n; i++)
    {
      printf ("%d ", r[i]);
    }
}

