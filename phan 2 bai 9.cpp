#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;


int main()
{
cout << "phan 2 bai 9:"  << endl;


int row = 5, col = 5;

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
int sum3 =0, sum10=0;
for (i=0; i<row; i++)
{
	for(j=0; j<col; j++)
	{
		if (j == 2) 
			{
		       sum3 = sum3 + A[i][j];
			}
		if (j == 3) 
			{
		       sum10= sum10 + A[i][j];
			}
	}
}
// tong phan tu tren duong cheo phu
int sumDgCheo = 0;
	for(i=0;i<row;i++)
	{	
	    sumDgCheo+=A[i][row-1-i]*A[i][row-1-i];
	}
 
// sap xep theo cot
for(int i=0;i<row;i++)
    {
    	int maxDong= -999;
    	int minDong= 999;
        for(int j=0;j<col;j++)
        {           
           if(maxDong < A[i][j])
           {
          	  maxDong = A[i][j];
      		}
   		   if(minDong > A[i][j])
           {
          	  minDong = A[i][j];
      		}
        } cout<<"Max dong["<<i<<"] la: "<<maxDong<<endl;
		int doiCho = minDong;
		A[i][col-1] = maxDong;
		minDong = doiCho;
				
    }

cout<< "Tong cac phan tu o hai cot 3 va 10: " << sum3 + sum10 << endl;

cout<< "Tong binh phuon cac phan tu o duong cheo phu: " << sumDgCheo << endl;
for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) 
	  	{
         cout<<A[i][j]<<"\t";
      } cout<<endl;
 }

getch();
return 0;
}
