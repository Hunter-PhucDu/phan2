#include <iostream.h>
#include<conio.h>
#include<stdio.h>
#include<math.h>

using namespace std;
int main()
{
	
cout <<"phan 2 bai 10:" << endl;

int rowA, colA, rowB, colB;
cout << "\nnhap ma tran A: "<<"\nso dong = "; cin>>rowA;
                    cout << "so cot: "; cin>>colA;
cout << "\nnhap ma tran B: "<<"\nso dong = "; cin>>rowB;
                    cout << "so cot: "; cin>>colB;
                    cout<<endl;
int mtA[rowA][colA];
int mtB[rowB][colB];
int i, j, mtResut[100][100];
srand(time(NULL));
for (i=0; i<rowA; i++)
{
	for(j=0; j<colA; j++)
	{
		mtA[i][j] = rand()%10;
			
	}
}
for (i=0; i<rowB; i++)
{
	for(j=0; j<colB; j++)
	{
		mtB[i][j] = rand()%10;			
	}
}
//in ra man hinh ma tran
cout<<"\nMa tran A la: \n";
   for (i = 0; i < rowA; i++) {
      for (j = 0; j < colA; j++) {
         cout<<"\t"<< mtA[i][j];
      }
      cout<<"\n";
   }

cout<<"\nMa tran B la: \n";
   for (i = 0; i < rowB; i++) {
      for (j = 0; j < colB; j++) {
         cout<<"\t"<< mtB[i][j];
      }
      cout<<"\n";
   }
//  nhap phep tinh

string mode;
cout << "\nBan muon: Cong, Tru hay Nhan ma tran? ";
cout << "\nNhap Mode: "; cin>> mode;

// neu nhap cong ma tran
if (mode =="Cong" || mode=="cong")
{
   if (rowA != rowB || colA != colB) 
   	{
      cout << "\nHai ma tran khong cung kich co!";
      exit(0);
   }
   else if (rowA == rowB && colA == colB) 
   	{
      for (i = 0; i < rowA; i++)
       {
        for (j = 0; j < colB; j++)
	     {
         mtResut[i][j] = mtA[i][j] + mtB[i][j];
         }
       }
    }
}
// neu nhap tru ma tram
else if (mode =="Tru" || mode=="tru")
{
   if (rowA != rowB || colA != colB) 
   	{
      cout << "\nHai ma tran khong cung kich co!";
      exit(0);
   }
   else if (rowA == rowB && colA == colB) 
   	{
      for (i = 0; i < rowA; i++)
       {
        for (j = 0; j < colB; j++)
	     {
         mtResut[i][j] = mtA[i][j] - mtB[i][j];
         }
       }
    }
}

// neu nhap nhan ma tram
else if (mode =="Nhan" || mode=="nhan")
{
int i,j,k;
    for(i=0;i<rowA;i++)
    {
        for(j=0;j<colB;j++)
        {
            mtResut[i][j]=0;
            for(k=0;k<colA;k++)
            {
                mtResut[i][j] += mtA[i][k] * mtB[k][j];
            }
        }
    }
}
 
//Hien thi ma tran ket qua
cout<<"\nKet qua cua phep "<<mode<<" hai ma tran la: \n";
   for (i = 0; i < rowA; i++) {
      for (j = 0; j < colA; j++) {
         cout<<"\t"<< mtResut[i][j];
      }
      cout<<"\n";
   }

getch();
return 0;
}