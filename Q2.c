#include<stdio.h>

void bubbleSort(int a[],int n)
{
int i,j,temp;

for(i=0;i<n-1;i++)
{
for(j=0;j<n-i-1;j++)
{
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
}

int main()
{
int n,i;
int waste[50];

printf("Enter number of waste materials: ");
scanf("%d",&n);


printf("Enter material codes:\n");

for(i=0;i<n;i++)
scanf("%d",&waste[i]);


bubbleSort(waste,n);


printf("Sorted recyclable materials:\n");

for(i=0;i<n;i++)
printf("%d ",waste[i]);


return 0;
}
Input
Enter number of waste materials: 6

Enter material codes:
5
2
8
1
4
3
Output
Sorted recyclable materials:

1 2 3 4 5 8
