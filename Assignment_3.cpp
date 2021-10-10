#include<iostream>
using namespace std;
int main ()
{
    int m, n, i, j, A[10][10];
  cout<<"Enter the no. of rows :";
  cin>>m;
  cout<<"Enter the no. of column :";
  cin>>n;
    cout << "Enter the array elements : ";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> A[i][j];
        }
    }
    cout<<"Right Diagonal of matrix is\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       { if (i==j)
          {
             cout << A[i][j] << "  ";
          }
       }
    }
    cout<<"\n"<<"Left Diagonal of matrix is\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
       { 
           if (i+j==n-1)
          {
             cout << A[i][j] << "  ";
          }
       }
    }
}