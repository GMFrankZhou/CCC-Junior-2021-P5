#include <iostream>
#include "src/myfunction.h"
using namespace std;

int main() 
{
  int m,n,k;
  cin >>m>>n>>k;  
  char canvas[m][n];
  char *row;
  char rc;
  int  l;

  for(int i=0;i<m;i++)
  {
    row=canvas[i];
    int j=0;
    while (j<n)
    {
      *row++='B';
      j++;
    }
  } 

  for(int kk=1;kk<=k;kk++)
  {
    cin>>rc>>l;
    if (rc=='R')
    {
      for (int j=0;j<n;j++)
        {
          flipcell(&canvas[l-1][j]);
        }
    } else
    {
      for (int i=0;i<n;i++)
        {
          flipcell(&canvas[i][l-1]);
        }
    }
  }

  int numberofgold=0;
  char *cp=&canvas[0][0];

  for (int i=0;i<m*n;i++)
  {
    if (*cp++=='G')
    {
      numberofgold++;
    }
  }

  cout <<numberofgold;
}