#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <string>
using namespace std;

int main() {
  ifstream myfile;
  myfile.open("mytime.txt");
  string tempo;
  int hh,gg;
  if (myfile.is_open())
    {
      cout <<" start reading " << endl;
      myfile >> tempo;
      std::cout << tempo << std::endl;
       myfile >> hh >> gg;
       std::size_t found = tempo.find("PM");
       if (found!=std::string::npos)
	 std::cout << "found at: " << found << '\n';
       myfile >> hh >> gg;
       int tot = 10*hh + gg;
       cout <<" hh : " << hh << endl;
    }
  return 0;
}
