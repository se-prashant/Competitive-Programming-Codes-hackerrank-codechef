#include<stdio.h>
int main()
{
    int n,i,j=0,k=0;
    printf("no of elements in array\n");
    scanf("%d",&n);
    int a[n],o[n],e[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)//creating a even and a odd array
    {
        if(a[i]%2==0)
        {
        e[i]=a[i];
        o[i]=0;
        }
        else
            {
            o[i]=a[i];
            e[i]=0;
            }

    }
    /*IF YOU WANT TO LOOK EVEN AND ODD ARRAY USE THIS CODE
    puts("even array is:");
    for(i=0;i<n;i++)
        printf("%d\t",e[i]);
    puts("odd array is:");
    for(i=0;i<n;i++)
        printf("%d\t",o[i]);
        */
int temp1,temp2,x[n],y[n],b[n];//GENERATING A NEW ARRAY IN WHICH  EVEN AND ODD ELEMNTS ARE INTERCHANGED
printf("\n");
    for(i=0;i<n;i++)
{
    temp1=e[i];//FOR EVEN ELEMENTS SWAPPING
    x[i]=e[i];
    x[i]=e[(n-1)-i];
    e[(n-1)-i]=e[i];
temp2=o[i];//FOR ODD ELEMNTS
y[i]=o[i];
y[i]=o[(n-1)-i];
o[(n-1)-i]=o[i];
}/*IF YOU WANT TO LOOK SWAAPES ARRAY
for(i=0;i<n;i++)
    printf("%d\t",x[i]);
printf("\n");
for(i=0;i<n;i++)
    printf("%d\t",y[i]);
}*/
//FOR NEW ARRAY ADD X[N] AND  Y[N]
printf("after swapping the even and odd elements the new array obtained is:\n");
for(i=0;i<n;i++)
{
b[i]=x[i]+y[i];
printf("%d\t",b[i]);
}
return 0;
}
