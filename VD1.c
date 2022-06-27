#include <stdio.h>
#include <conio.h>
main()
{
int i,n,max,min, chiSoMax, chiSoMin; int a[20]; printf("\n\tNhap vao so n,toi da la 20: ");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
printf("\nNhap vao phan tu thu %d: ",i);
scanf("%d",&a[i]);
}
{
max=a[1];
for(i=1;i<=n;i++)
{
if(max<a[i])
{
max=a[i];
chiSoMax= i; // luu v? trí max
}
}
printf("\nSo lon nhat trong mang la %d dung thu %d",max,chiSoMax); min=a[1];
for(i=1;i<=n;i++)
{
if(min>a[i])
{
min=a[i];
chiSoMin = i; // luu v? trí min
}
}
printf("\nSo nho nhat trong mang la %d dung thu %d",min,chiSoMin);
}
getch();
}
