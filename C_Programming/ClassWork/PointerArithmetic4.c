#include<stdio.h>
int main()
{
    int arr[]={11,21,51,101,121};

    int*p = NULL;
    int*q = NULL;
  
    p = &(arr[1]);
    q = &(arr[4]); 

   //p + q; //not  allowed

    q = q-2;

   printf("Data pointed by p : %d\n",*q);
   
   
   return 0 ;
}