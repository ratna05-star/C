#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n;
    /* read the size of the array */
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    /* dynamically allocate an array of n integers */
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return 0;
    }

    /* read the n integers */
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    /* compute the sum */
    long long sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    /* output the result */
    printf("%lld\n", sum);

    /* free the allocated memory */
    free(arr);
  
