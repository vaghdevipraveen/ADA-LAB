#include <stdio.h>
#include <stdlib.h>
void linear()
{
  int array[100], key, c, n=100;
  
  printf("genrating random nos.:\n");

  for (c = 0; c < n; c++)
  {
    array[c]=rand()%100 +1;
    printf("\t%d\t",array[c]);
  }

   printf("\nEnter value to find\n");
  scanf("%d", &key);


  for (c = 0; c < n; c++)
  {
    if (array[c] == key)    
    {
      printf("%d is present at  %d.\n", key, c+1);
      break;
    }
  }
  if (c == n)
    printf("%d is not in the array.\n", key);

}
void binary()
{
    int c, first,min, last, middle, n=100, search, array[100];
    int temp=0;
  printf("generating sorted random integers:\n");
   for (c = 0; c < n; c++)
    {
        array[c]=rand()%100 +1;
    }

 for(int i=0;i<n;i++)
 {  min=i;
     for(int j=i+1;j<=n;j++)
     {
         if(array[j]<array[min])
         min=j;
     }
     temp=array[i];
     array[i]=array[min];
     array[min]=temp;
 }
 for(int i=0;i<n;i++)
 printf("\t%d\t",array[i]);
    
 
  printf("\nEnter value to find\n");
  scanf("%d", &search);

  first = 0;
  last = n - 1;
  middle = (first+last)/2;

  while (first <= last) {
    if (array[middle] < search)
      first = middle + 1;
    else if (array[middle] == search) {
      printf("%d found at location %d.\n", search, middle+1);
      break;
    }
    else
      last = middle - 1;

    middle = (first + last)/2;
  }
  if (first > last)
    printf("Not found! %d isn't present\n", search);

  
}
void main()
{
    int ch;
    printf("please enter choice 1 linear 2 binary:\n");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:linear();
    break;
    case 2:binary();
    break;
    }
}