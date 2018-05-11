#include <iostream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* qsort */

int n, a[105];

int compare (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main ()
{
    scanf("%d", &n);
    for(int i=0; i<n; i++) scanf("%d", &a[i]);
    qsort (a, n, sizeof(int), compare);
    for(int i=0; i<n; i++) printf("%d ", a[i]);
    return 0;
}
