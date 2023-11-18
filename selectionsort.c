#include <stdio.h>

int main()
{
    int arr[] = {2,4,6,5,8,7,10,9};
    for (int i = 0; i<8; i++)
    {
        for (int j = i+1; j<8; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for (int i = 0; i<8; i++)
    {
        printf("%d ",arr[i]);
    }
}



