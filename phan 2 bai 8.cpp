#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;


int main()
{
cout << "phan 2 bai 8:"  << endl;


int row = 50, col = 50;

int A[row][col];
srand(time(NULL));
int i =0, j=0;
for (i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		A[i][j] = rand()%50;
			
	}
}
// xuat mang 
 for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) 
	  	{
         cout<<A[i][j]<<"\t";
      } cout<<endl;
 }
// tong cac phan tu tren hang chan
int sum = 0;
for (i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if (i % 2 ==0) 
			{
		       sum = sum + A[i][j];
			}
	}
}
// tong binh phuong phan tu tren duong cheo chinh
int sumDgCheo = 0;
 for (i = 0; i < row; i++) {
      
            sumDgCheo = sumDgCheo + A[i][i]*A[i][i];
      
 }
// sap xep theo cot
for(int k=0;k<row;k++)
    {
    	int maxCot= -999;
        for(int i=0;i<col;i++)
        {           
           if(maxCot < A[i][k])
           {
          	  maxCot = A[i][k];
      		}
        } cout<<"Max cot["<<k<<"] la: "<<maxCot<<endl;		
    }
for(int k=0;k<row;k++)
    {
        for(int i=0;i<col-1;i++)
        {
            for(int j=i+1;j<col;j++)
            {
                if(A[j][k]<A[i][k])
                {
               	  int swap = A[j][k];
                  A[j][k] = A[i][k];
                  A[i][k] = swap;
                }
            }
        }
    }        


cout<< "Tong cac phan tu o hang chan: " << sum << endl;
cout<< "Tong binh phuon cac phan tu o duong cheo chinh: " << sumDgCheo << endl;
for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) 
	  	{
         cout<<A[i][j]<<"\t";
      } cout<<endl;
 }

getch();
return 0;
}
