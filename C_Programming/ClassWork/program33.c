


# include<stdio.h>

void Display(int iNo)
{
      int icnt =0;

      //filter
    if(iNo < 0)
    {
        printf("Invalid input");
        return ;
    }
     for(icnt=iNo; icnt >=0 ; icnt --)
     {

        printf("%d\n",icnt);
     }
}
int main()
{
    
    int iValue=0;

    printf("Enter the frequncy :");
    scanf("%d",&iValue);

    Display(iValue);
   
    return 0;

}