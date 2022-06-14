#include <iostream.h>
#include <stdio.h>
#include <conio.h> 
#include <math.h> 

using namespace std;
int main()
{
cout << "Phan 2. Bai 6:\n";
int A[50];

// Nhap gia tri cho A[]
srand(time(NULL));
int i =0, j=0;
for (i=0; i<50; i++)
	{
    	A[i] = rand()%10;
	}
	
// dem so phan tu bang 2
int count0 = 0;
for (i=0; i<50; i++)
{
		if ( A[i] > 0)
			{
		       count0++;  //dem so ptu lon hon 0
			}
}
cout << "so phan tu lon hon 0 la: "<< count0<< endl;

//  in ra man hinh so nguyen to
 cout << "Cac so nguyen to trong mang A la: ";
 for(int i = 0; i < 50; i++) 
 	{
      bool soNguyenTo = true;
      for(int j = 2; j <= sqrt(A[i]); j++) 
	  	{
          if( A[i] == 2 || A[i] % j == 0)
		  	 {
                soNguyenTo = false;
                break;
             }
          
        }
      if(soNguyenTo == true &&  A[i] != 1 &&  A[i] != 0) 
	  	{
          cout << A[i] << " ";
        }
     }
 cout << endl << endl;
// sap xep thep thu tu giam dan
cout << "Sap xep phan tu mang A: ";
 for(int i = 0; i < 50; i++) 
 	{
      for(int j = i + 1; j < 50; j++) 
	  	{
          if(A[i] < A[j])
		  	 {
               int swap = A[i];
               A[i] = A[j];
               A[j] = swap;
              }
        }
       cout << A[i] << " ";
     }
cout << endl;
getch();
return 0;
}