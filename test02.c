#include <stdio.h>
int main(void)
{
    int time, distance;
    printf("Enter time:\n");
    scanf("%d", &time);
    distance = 5 * time * time;
    printf("distance is %d\n", distance);
    return 0;
}
   