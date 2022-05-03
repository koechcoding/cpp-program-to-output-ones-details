#include<iostream>
using namespace std;

int main()
{
   int row, col, n[10][10], m[10][10], sum[10][10];

   cout<<"Enter the number of rows(should be >1 and <10): ";
   cin>>row;
   cout<<"Enter the number of column(should be >1 and <10): ";
   cin>>col;
   cout << "Enter the elements of the first matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j < col;j++ ) {
       cin>>n[i][j];
     }
   }
   cout << "Enter the elements of the second matrix: ";
   for (int i = 0;i<row;i++ ) {
     for (int j = 0;j<col;j++ ) {
       cin>>m[i][j];
     }
   }

   cout<<"Output: ";
   for (int i = 0;i<row;i++ ) {
      for (int j = 0;j<col;j++ ) {
        sum[i][j]=n[i][j]+m[i][j];
        cout<<sum[i][j]<<" ";
      }
  }

   return 0;
}