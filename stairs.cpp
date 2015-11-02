#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;

int main() {
  //ofstream myfile;
  //myfile.open ("mymat.txt");
  int dim=3;
  //cin >> dim;
  char stairs[dim][dim];
    for(int i=0;i<dim;++i)
    {
        for(int j=0;j<dim;++j)
        {
	  if(j<(dim-i-1))
		{
		  stairs[i][j] = '1';
		}
	  else
	    {
	    stairs[i][j] = '2';
	    }
        }
    }
 for(int i=0;i<dim;++i)
    {
        for(int j=0;j<dim;++j)
        {
	  cout << stairs[i][j] ;
	}
	cout << " " << endl;
    }
}
