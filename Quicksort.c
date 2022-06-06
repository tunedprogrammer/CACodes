#include<stdio.h>
#include<conio.h>
void quicksort(int[],int,int);
int partition(int[],int,int);
void main()
{
int i,n,a[20],ch=1;
clrscr();
while(ch)
{
printf("\n enter the number of elements\n");
scanf("%d",&n);
printf("\n enter the array elements\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
quicksort(a,0,n-1);
printf("\n\nthe sorted array elements are\n\n");
for(i=0;i<n;i++)
printf("\n%d",a[i]);
printf("\n\n do u wish to continue (0/1)\n");
scanf("%d",&ch);
}
getch();
}
void quicksort(int a[],int low,int high)
{
int mid;
if(low<high)
{
mid=partition(a,low,high);
quicksort(a,low,mid-1);
quicksort(a,mid+1,high);
}
}
int partition(int a[],int low,int high) {
int key,i,j,temp,k;
key=a[low];
i=low+1;
j=high;
while(i<=j) {
while(i<=high && key>=a[i])
i=i+1;
while(key<a[j])
j=j
-1;
if(i<j)
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
else {}
}
k=a[j];
a[j]=a[low];
a[low]=k;
return j;
}
