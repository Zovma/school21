#include <stdio.h>

void maxmin(int *prob1, int *prob2, int *prob3, int *max, int *min);


/* Find a max & min probabilities */
int main()
{
    float x, y, z;
    scanf("%f %f %f", &x, &y, &z);

    int x1 = x;
	int y1 = y;
	int z1 = z;
	if (x - x1 > 0 || y - y1 > 0 || z - z1 > 0){
		printf("n/a");}
    else{
    int max, min;
    maxmin(&x1, &y1, &z1, &max, &min);
    printf("%d %d", max, min);
    }

    return 0;
}


/* This function should be kept !!! (Your AI) */
/* But errors & bugs should be fixed         */
void maxmin(int *prob1, int *prob2, int *prob3, int *max, int *min)
{
    *max = *min = *prob1;
    
    if(*prob2 > *max)
        *max = *prob2;
    if(*prob2 < *min)
        *min = *prob2;
    if(*prob3 > *max)
        *max = *prob3;
    if(*prob3 < *min)
        *min = *prob3;
}


