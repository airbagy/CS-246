#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

using namespace std;

// Note: you do not have to use any of the provided 
// structures or functions.
// Do not expect more information about these structures 
// and functions than what is specified here, their names, 
// and on the assignment pdf.
// If you do use these structures and functions, you can change 
// them as you need.

// structure to hold command line options once parsed
struct Options{
  bool all;
  bool chars;
  bool words;
  bool lines;
  int numFiles;
  string* files;
  Options(): all(true), chars(true), words(true), lines(true), numFiles(0), files(nullptr) {}
  ~Options(){
    delete[] files;
  }
};

// structure to hold counts of each input stream
struct Counts{
  string name; 
  int chars;
  int words;
  int lines;
  Counts(): chars(0), words(0), lines(0){}
};


// print the counts for one Counts object
void printCounts(Counts& count, Options& ops){

}


// sets c to represent the contents of input
void fillCounts(Counts& c, string input = "" ){

}

// handles reading and writing each input stream to the program
void handleInputs(Options& ops){

}

// interpret command line arguments and set variables of Options
void handleArgs(int argc, char* argv[], Options& ops){

  // determine which flags are present and the number of files read
  // note, the first argument is the name of the program and should 
  // be ignore -> start at 1
  for (int i = 1; i < argc; ++i ){


  }

}


// argc is the number of command line arguments read
// argv is an array of c-style strings, i.e. char*'s where each element of
//    argv is a null-terminated, whitespace delimited, command-line argument
int main(int argc, char* argv[]){
  Options ops;

}

