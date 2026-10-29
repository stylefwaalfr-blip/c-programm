#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

int main(void)
{
    int arr[SIZE];
    int i;
    int min, max;
    long sum = 0;
    double average;

    srand((unsigned int)time(NULL));

    
    for (i = 0; i < SIZE; i++) {
        arr[i] = rand() % 100 + 1;
    }

    
    for (i = 0; i < SIZE; i++) {
        if (i > 0) {
            printf(" ");
        }
        printf("%d", arr[i]);
    }
    printf("\n");

    
    min = arr[0];
    max = arr[0];
    for (i = 0; i < SIZE; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
        sum += arr[i];
    }

    
    average = (double)sum / SIZE;

    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Average: %.2f\n", average);

    return 0;
}
