#include <iostream>
#include <string>

//sat¥y what standard-library names we use
using std::cin;	using std::endl;
using std::cout; using std::string;

int main() {
  //ask for the person's name
  std::cout << "Please enter your first name: ";

  //read the name
  std::string name;
  std::cin >> name;

  //build the message that we intend to write
  const std::string greeting = "Hello, " + name + "!";

  // the number of blanks surrounding the greeting
  const int pad = 1;

  // total number of rows to write
  const int rows = pad*2 + 3;
  const std::string::size_type cols = greeting.size() + pad * 2 + 2;

  // separate the output from the input
  cout << endl;

  // write rown rows of output
  int r = 0;


  // invariant : we have written r rows so far
  for(int r=0; r != rows; ++r) {
    // write a row of output (as we will desclibe in 2.4/22

    string::size_type c = 0;

    while(c != cols) {

      if (r == pad + 1 && c == pad + 1) {
	cout << greeting;
	c += greeting.size();
      } else {
	if(r==0 || r == rows - 1 ||
	    c == 0 || c == cols -1)
	  cout << "*";
	else
	  cout << " ";
	++c;
      }
    } 
    cout << endl;
  }

  return 0;
}

