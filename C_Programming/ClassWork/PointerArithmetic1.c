#include<stdio.h>
int main()
{
    int arr[]={11,21,51,101,121};

    int*p = NULL;
    int*q = NULL;
  
    p = &(arr[1]);
    q = &(arr[4]);


    printf("data fetch by p is : %d\n",*p);    //21
    printf("data fetch by q is : %d\n",*q);    //121





    return 0;
}