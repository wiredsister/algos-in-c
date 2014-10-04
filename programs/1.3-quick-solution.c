#include <stdio.h>
#define N 10000
main() 
{
    int i, p, q, t, id[N];
    for (i = 0; i < N; i++) id[i] = i;
    /* here we create the array, giving it N members */
    while (scanf("%d %d\n", &p, &q) == 2) 
	{
	    if (id[p] == id[q]) continue;
	    for (t = id[p], i = 0; i < N; i++)
		if (id[i] == t) id[i] = id[q];
	    /* if id[p] is equal to id[q] 
	       print the union */
	    printf(" %d %d\n", p, q);
	}
}

