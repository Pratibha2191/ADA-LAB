#include <stdio.h>

void sort(int a[], int n)
{
    int i, j;
    int swapped;

    for (i = 0; i < n - 1; i++)
    {
        swapped = 0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swapped = 1;
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
        if (!swapped)
            return;
    }
}

int main()
{
    int n, a[20];
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for (int j = 0; j < n; j++)
        scanf("%d",&a[j]);
    sort(a, n);
    printf("After sorting :");
    for (int j = 0; j < n; j++)
      printf("%d",a[j]);
}
