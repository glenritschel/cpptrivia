#include <iostream>
using namespace std;

int nbrs[] = {9,7,3,4,6,5,0,1,2,8};
int nbrsSize = sizeof(nbrs)/sizeof(int);
int * pNbrs = &nbrs[0];

int partition(int * pNbrs, int pivot, int last);
void qsort(int * pNbrs, int pivot, int last)
{
  int middle;
  if (pivot < last)
  {
    middle = partition(pNbrs, pivot, last);
    qsort(pNbrs, pivot, middle);
    qsort(pNbrs, middle + 1, last);
  }
}

int partition(int * pNbrs, int pivot, int last)
{
  int x = pNbrs[pivot];
  int i = pivot - 1;
  int j = last + 1;
  while (1) 
  {
    j = j - 1;
    while (pNbrs[j] <= x)
    {
      j = j - 1;
    }
    i = i + 1;
    while (pNbrs[i] >= x)
    {
      i = i + 1;
    }
    if (i < j) 
    { 
      int temp = pNbrs[i];
      pNbrs[i] = pNbrs[j];
      pNbrs[j] = temp;
    }
    else
    {
      return j;
    }
  }
}

int main()
{
  
  ::qsort(pNbrs, (int)(nbrsSize/2), (int)(nbrsSize - 1));
  for (int i = 0; i < nbrsSize; ++i)
  {
    cout << nbrs[i] << "\n";
  }
  return 0;
}




