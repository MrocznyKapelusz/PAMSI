#include <iostream>
#include "MergeSort.h"

void Merge(int p, int s, int k, int *d,int *p1)
{
	/*
	int i = pocz, j = sr;
	int d = pocz;
	while (d < kon) 
	{
		if (j < kon && (i == sr) || *(src + i) > *(src + j))
		{
			*(dst+d) = *(src+j);
			j++;
		}
		else
		{
			*(dst + d) = *(src + i);
			i++;
		}
		++d;
	}
	*/
	
	int i1 = p;
	int i2 = s;
	int tmp;
	int i=p;
	while(i<=k)
	{
		if (i1 == s) //mlodsza pusta
		{
			*(p1+i)= *(d+i2);
			i2++;
			tmp = *(p1 + i);
		}
		else 
		{
			if ( i2 > k) //starsza pusta
			{
				*(p1 + i) = *(d + i1);
				i1++;
				tmp = *(p1 + i);
			}
			else {
				
				
					if (*(d + i1) > *(d + i2))
					{
						*(p1 + i) = *(d + i2);
						i2++;
						tmp = *(p1 + i);
					}
					else
					{
						*(p1 + i) = *(d + i1);
						i1++;
						tmp = *(p1 + i);
					}
				
			}
		}
		i++;
	}
	
	for (int j = p; j <=k; j++)*(d + j) = *(p1 + j);
	
}

void MergeSort(int poczatek, int koniec,int *d, int *p1)
{
	int srodek = (poczatek + koniec + 1) / 2;
	if ((srodek - poczatek) > 1) MergeSort(poczatek, srodek - 1,d,p1);
	if ((koniec - srodek) > 0) MergeSort(srodek, koniec,d,p1);
	
	Merge(poczatek, srodek, koniec, d,p1);
	
	
}
