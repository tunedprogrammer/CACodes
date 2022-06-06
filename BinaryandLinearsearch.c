/* Implementation of recursive binary search and sequential search */
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#define max 20
int pos;
int binsearch(int,int[],int,int,int);
int linsearch(int,int[],int);
void main()
{
int ch=1;
double t;
int n,i,a[max],k,op,low,high,pos;
clock_t begin,end;
clrscr();
while(ch)
{
printf("\n.....MENU.....\n 1.Binary Search\n 2.Linear Search\n 3.Exit\n");
printf("\nEnter your choice\n");
scanf("%d",&op);
switch(op)
{
case 1:printf("\nEnter the number of elements \n");
scanf("%d",&n);
printf("\nEnter the elements of an array in order\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the elements to be searched\n");
scanf("%d",&k);
low=0;high=n-1;
begin=clock();
pos=binsearch(n,a,k,low,high);
end=clock();
if(pos==-1)
printf("\n\n Unsuccessful search");
else
printf("\n Element %d is found at position %d",k,pos+1);
printf("\n Time taken is %lf CPU1 cycles\n",(end-
begin)/CLK_TCK);
getch();
break;
case 2:printf("\nEnter the number of elements\n");
scanf("%d",&n);
printf("\nEnter the elements of an array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nEnter the elements to be searched\n");
scanf("%d",&k);
begin=clock();
pos=linsearch(n,a,k);
end=clock();
if(pos==-1)
printf("\n\n Unsuccessful search");
else
printf("\n Element %d is found at position %d",k,pos+1);
printf("\n Time taken is %lf CPU cycles\n",(end-begin)/CLK_TCK);
getch();
break;
default:printf("\nInvalid choice entered\n");
exit(0);
}
printf("\n Do you wish to run again (1/0) \n");
scanf("%d",&ch);
}
getch();
}
int binsearch(int n,int a[],int k,int low,int high)
{
int mid;
delay(1000);
mid=(low+high)/2;
if(low>high)
return 
-1;
if(k==a[mid])
return(mid);
else
if(k<a[mid])
return binsearch(n,a,k,low,mi
d
-1);
else
return binsearch(n,a,k,mid+1,high);
}
int linsearch(int n,int a[],int k) {
delay(1000);
if(n<0)
return 
-1;
if(k==a[n
-1])
return(n
-1);
else
return linsearch(n
-1,a,k);
}
