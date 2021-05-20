
#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<dos.h>
void selection(int *a,int n)
{
    delay(1000);
    int i,j,temp,min;
    for(i=0;i<n-1;i++)
    {
         min=i;
	for(j=i+1;j<n;j++)
	 {
	    if(a[j]<a[min])
	     {
	        min=j;
	       }
	    }

            temp=a[i];a[i]=a[j];a[j]=temp;
          }
     }


   void main()
   {
   //FILE *fp;
     clock_t  c1,c2;
     int i,datasize=1;
     long int n=1000;
      int *a;
      clrscr();
     //p=fopen("values.dat","w+");
    //if(fp==NULL)
    //{
    //rintf("cannot open file");
     //exit(1);
    // }
       while(datasize<=10)
       {
	 a=(int *)calloc(n,sizeof(int));
	 if(a==NULL)
	 {
	    printf("INSUFFICIENT MEMORY\N");
	    exit(1);
	   }
	   randomize();
	   int MAXINT;
	   for(i=0;i<=n-1;i++) a[i]=rand() % MAXINT;
	   c1=clock();
	   selection(a,n);
	   c2=clock();
	   free(a);
	   if((c2 -c1) != 0)
	   {
	   printf("%d\t%f\n",n,(c2-c1)/CLK_TCK);
	    datasize++;
	   }
	   n=n+1000;
	  }
      //	  fclose(fp);
	  }
