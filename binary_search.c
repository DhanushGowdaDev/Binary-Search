#include <stdio.h>

int main()
{
    int n, i, key, low, high, mid, iterations = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];   // array created after taking n

    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while (low <= high)
    {
        iterations++;
        mid = (low + high) / 2;

        if (arr[mid] == key)
        {
            printf("Element %d found at position %d\n", key, mid + 1);
            printf("Number of iterations = %d\n", iterations);
            return 0;
        }
        else if (arr[mid] < key)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    printf("Element %d not found\n", key);
    printf("Number of iterations = %d\n", iterations);

    return 0;
}
