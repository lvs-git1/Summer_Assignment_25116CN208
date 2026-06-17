#include <stdio.h>

int main()
{
    int arr1[100], arr2[100], unionArray[200];
    int n1, n2, i, j, k = 0;
    int isDuplicate;

    printf("Enter the number of elements in first array: ");
    scanf("%d", &n1);

    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++){
        scanf("%d", &arr1[i]);

        isDuplicate = 0;

        for(j = 0; j < k; j++){
            if(arr1[i] == unionArray[j]){
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0){
            unionArray[k++] = arr1[i];
        }
    }

    printf("Enter the number of elements in second array: ");
    scanf("%d", &n2);

    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++){
        scanf("%d", &arr2[i]);

        isDuplicate = 0;

        for(j = 0; j < k; j++){
          if(arr2[i] == unionArray[j]){
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate == 0){
            unionArray[k++] = arr2[i];
        }
    }

    printf("Union of arrays:\n");
    for(i = 0; i < k; i++){
        printf("%d ", unionArray[i]);
    }

    printf("\n");

    return 0;
}