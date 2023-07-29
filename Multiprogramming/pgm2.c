#include <stdio.h>

int main()
{
    int i, m, n, tot, s[20];
    
    printf("Enter total memory size: ");
    scanf("%d", &tot);

    printf("Enter no. of processes: ");
    scanf("%d", &n);

    printf("Enter memory for OS: ");
    scanf("%d", &m);

    for (i = 0; i < n; i++)
    {
        printf("Enter size of process %d: ", i + 1);
        scanf("%d", &s[i]);
    }

    tot -= m;
    for (i = 0; i < n; i++)
    {
        if (tot >= s[i])
        {
            printf("Allocate memory to process %d\n", i + 1);
            tot -= s[i];
        }
        else
        {
            printf("Process P%d is blocked\n", i + 1);
        }
    }

    printf("External Fragmentation is = %d\n", tot);

    return 0;
}
