// countDucks.cpp
// Author: Jason Lee
// Example program to read from file and count occurences

#include <iostream> // for printf()
#include <cstdlib> // for exit(), perror()
#include <fstream> // for ifstream
#include <string>
using namespace std;

int main(int argc, char *argv[])
{
  if (argc!=2) {
    // if argc is not 2, print an error message and exit
    cerr << "Usage: "<< argv[0] << " inputFile" << endl;
    exit(1); // defined in cstdlib
  }

  ifstream myDuck;
  int n = 0;
  string line;
  
  myDuck.open(argv[1]);
  getline(myDuck, line);
  while(myDuck){
    if(line == "duck"){
      n += 1;
    }
    getline(myDuck, line);
  }
  cout << "There were " << n << " ducks in " << argv[1] << endl;
  myDuck.close();
  
  return 0;
}
