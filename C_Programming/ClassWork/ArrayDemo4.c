#include<stdio.h>

int main()

{
    int arr[5] = {10,20,30,40,50};

    printf("sizeof arr :%d\n",sizeof(arr));

    printf("arr : %d\n",arr);
    printf("&arr : %d\n",&arr);

    printf("arr + 1 : %d\n",arr + 1);
    printf("&arr + 1 : %d\n",&arr + 1);

    return 0;
}