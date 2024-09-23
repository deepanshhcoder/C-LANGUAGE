#include <stdio.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    
    printf("Enter %d elements for the array:\n", size);
    for (int i = 0; i < size; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter the element to search: ");
    scanf("%d", &target);

    int found = 0;  

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            printf("Element found at index %d\n", i);
            found = 1;  
            break;      
        }
    }

    if (!found) {
        printf("Element not found in the array\n");
    }

    return 0;
}
