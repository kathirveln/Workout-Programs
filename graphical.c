#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include<graphics.h>
#define SIZE 50

 void graph(int x1, int y1,int x2,int y2) {

   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TurboC3\\BGI");

   line(100,420,100,60);
   line(100,420,600,420);

   outtextxy(95,35,"Y");
   outtextxy(610,405,"X");
   outtextxy(85,415,"O");

   outtextxy(300,50,"GRAPHICAL METHOD");

   line(x1+100,y1+200,x2+200,y2+100);



}


	int linear(int *x,int n) {
		int a,b,c,s,i;
		for(i=0;i<n;i++) {
		 if(i==0) {
		  // a=x[i]*0;
		   a=(x[i+2])/(x[i+1]);
		 }
		 else {
		   // c=x[i]*0;
		    b=x[i+1]/x[0];
		 }
		}
		 printf("%d\t%d",a,b);
	       graph(0,a,b,0);
		return 1;
	}






int main() {
 int n,i,j,n1,k,s;
 int z[SIZE],c[SIZE],d[SIZE],x[SIZE];
 clrscr();
 printf("Enter the number of decision variable\n");
 scanf("%d",&n);
 printf("Enter the Maximum or Minimum objective values\n");
	for(i=0;i<2;i++){
	scanf("%d",&z[i]);
	}

 printf("Enter the number of constraints");
 scanf("%d",&n1);

 for(i=0;i<n1;i++) {
     printf("Enter the %dst constraint\n",i+1);
     if(i==0) {
	 for(j=0;j<=n;j++) {
	    scanf("%d",&c[j]);
	 }
     } else {

	 for(k=0;k<=n;k++){
	 scanf("%d",&d[k]);
	 }
      }
  }
      linear(c,n);



getch();
return 1;
}

