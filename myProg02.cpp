// myProg02.cpp
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
  string line;

  int ducks = 0;
  int no_ducks = 0;
  int combined = 0;
  
  myDuck.open(argv[1]);
  getline(myDuck, line);
  while(myDuck){
    if(line == "duck"){
      ducks += 1;
    }
    else{
      no_ducks += 1;
    }
    combined += 1;
    getline(myDuck, line);
  }
  
  cout << "Report for " << argv[1] << ":" << endl;
  cout << "   Animal count:    " << combined << endl;
  cout << "   Duck count:      " << ducks << endl;
  cout << "   Non duck count:  " << no_ducks << endl;
  
  myDuck.close();
  
  return 0;
}
