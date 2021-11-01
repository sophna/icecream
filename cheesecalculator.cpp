#include <iostream>
#include <iomanip> //should be included in order to use 'setprecision(n)', 'setw(n)' manipulator
#include <math.h> //in order to use the 'round' predefined function
#include <string> //to use function 'to_string'

using namespace std;

const float KGS_OF_CHEESE_IN_CONTAINER = 2.76;
const int HEADER_WIDTH = 70; //total lenght of the stream to output the program data
const int HEADER_WIDTH_LEFT_ALIGN = 49; //number of chars for the cheesy program banner including text
const int HEADER_WIDTH_RIGHT_ALIGN = 21; //numbers of chars for the cheesy progam banner to complete up to 70 chars
const int RESULT_RIGHT_ALIGN_WIDTH = 10; //number of chars for the digits results
const int RESULT_LEFT_ALIGN_WIDTH =  60; //number of chars for the text part
const float COST = 4.12; //cost to produce each container
const float PROFIT = 1.45; //profit from each container

int main()
{
  
  int kgsOfCheese; //variable to store the user input for the kilograms of cheese produced
  int containers; //variable to store the calculated containers of cheese

  cout << setfill('*'); //use setfill to change the fill char to *
  cout << setw(HEADER_WIDTH) << "" << endl; //set the width of the line to 70 chars, output a null char to print the whole stream
  cout << setw(HEADER_WIDTH_LEFT_ALIGN) << "Welcome to the cheese calculator" << setw(HEADER_WIDTH_RIGHT_ALIGN) << "" << endl; //message is 28 chars lenght, fill up to HEADER_WIDTH_LEFT_ALIGN chars and then up to HEADER_WIDTH_RIGHT_ALIGN chars after the message
  cout << setw(HEADER_WIDTH) << "" << endl << endl; //output the * in the third row

  cout << "Please enter the total number of kilograms of cheese produced: ";
  cin >> kgsOfCheese; //assign user input to variable kgsOfCheese
  containers=round(kgsOfCheese/KGS_OF_CHEESE_IN_CONTAINER); //use 'round' predifened function to round to the nearest integer
  
  cout << setfill(' '); //change the fill char to whitespace char
  //left align the text to up to RESULT_LEFT_ALIGN_WIDTH number of chars, right align 'containers' up to RESULT_RIGHT_ALIGN_WIDTH number of chars
  cout << setw(RESULT_LEFT_ALIGN_WIDTH) << left <<  "The number of containers to hold the cheese is:" << setw(RESULT_RIGHT_ALIGN_WIDTH) << right <<containers << endl;
  
  cout << setprecision(2)<<fixed; //use setprecision(2) to use 2 decimal places, and 'fixed' to use fixed format to show all digits
    //there is no need to use 'setprecision(2)' and 'fixed' again, since the cout will keep such manipulators
    
  /* the same logic for aligment applies to the next part:
   -align s1/s2 to the left up to RESULT_LEFT_ALIGN_WIDTH number of chars
   -align the result to the right up to RESULT_RIGHT_ALIGN_WIDTH number of chars  */
  string s1 = "The cost of producing " + to_string(containers) + " container(s) of cheese is: $";
  cout << setw(RESULT_LEFT_ALIGN_WIDTH)<< left << s1  << setw(RESULT_RIGHT_ALIGN_WIDTH) << right << containers * COST << endl;

  string s2 = "The profit from producing " + to_string(containers) + " container(s) of cheese is: $";
  cout << setw(RESULT_LEFT_ALIGN_WIDTH)<< left << s2  << setw(RESULT_RIGHT_ALIGN_WIDTH) << right << containers * PROFIT << endl;
}

