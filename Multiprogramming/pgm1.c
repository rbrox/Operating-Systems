#include <stdio.h>

int main()
{
    int ms, i, ps[20], n, size, p[20], s, intr = 0;

    printf("Enter size of memory: ");
    scanf("%d", &ms);

    printf("Enter memory for OS: ");
    scanf("%d", &s);

    ms -= s;
    printf("Enter no. of partitions to be divided: ");
    scanf("%d", &n);

    size = ms / n;

    for (i = 0; i < n; i++)
    {
        printf("Enter process and process size: ");
        scanf("%d %d", &p[i], &ps[i]);

        if (ps[i] <= size)
        {
            intr += size - ps[i];
            printf("Process[%d] is allocated.\n", p[i]);
        }
        else
        {
            printf("Process[%d] is blocked.\n", p[i]);
        }
    }

    printf("Total Internal fragmentation is %d\n", intr);

    return 0;
}
