#include <stdio.h>
void bubble_sort(int [], int);
int main()
{
int array[100], n, i;
printf("Enter number of elements\n");
scanf("%d", &n);
printf("Enter %d integers\n", n);
for (i = 0; i < n; i++)
scanf("%d", &array[i]);
bubble_sort(array, n);
printf("Sorted list in ascending order:\n");
for (i = 0; i < n; i++)
printf("%d\n", array[i]);
return 0;
}
void bubble_sort(int list[], int n)
{
int j, k, temp;
for (j = 0 ; j < n - 1; j++) {
for (k = 0 ; k < n - j - 1; k++) {
if (list[k] > list[k+1]) {
/* Swapping */
temp = list[k];
list[k] = list[k+1];
list[k+1] = temp;
}
}
}
}