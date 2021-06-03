#include <stdio.h>

int search(int a[], int key, int n)
{
    if (n < 0)
        return -1;
    else if (a[n] == key)
        return n;

    else
        return search(a, key, n - 1);
}
int main()
{
    int n, arr[100], x;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d",&arr[i]);
    printf("Enter number to the found: ");
    scanf("%d",&x);
    int index = search(arr, x, n - 1);
    if (index == -1)
        printf("Not found");
    else
        printf("Found at index:%d", index);

    return 0;
}
