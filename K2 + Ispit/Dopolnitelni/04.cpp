//gi sodrzhi site standardni biblioteki
#include <bits/stdc++.h>
using namespace std;


//Од тастатура се внесуваат димензиите m и n на матрица од цели броеви, Аmxn, ( 0 < m, n < 30 ) и нејзините елементи. Потоа се
//внесуваат два цели броја r и k  (индекси на редица/колона од матрицата, т.е. 0 <= r < m и 0 <= k < n).
//Да се напише програма која ja трансформира матрицата А така што елементите над редицата r и лево од колоната k се
//заменуваат со минималната вредност од матрицата А.


void printResult(int array[100][100], int m, int n, int r, int k) {

   int minVal=array[0][0];

   //find min value in the matrix
   for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
         if (array[i][j]<minVal) {
            minVal=array[i][j];
         }
      }
   }

   for (int i=0; i<r; i++) {
      for (int j=0; j<k; j++) {
         array[i][j]=minVal;
      }
   }

   for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
         cout<<array[i][j]<<" ";
      }
      cout<<endl;
   }
}

int main() {

   int array[100][100];
   int m,n;
   int r,k;

   cin>>m>>n;
   cin>>r>>k;

   for (int i=0; i<m; i++) {
      for (int j=0; j<n; j++) {
         cin>>array[i][j];
      }
   }

   printResult(array, m,n,r,k);

   return 0;
}
