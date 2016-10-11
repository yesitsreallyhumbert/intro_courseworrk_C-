#include <iostream>
#include <cmath>

/* Author: Hector Amaya
 * Program: compute_sin
 * Description: Reads a number x from input, an angle in radians. 
 *    Computes an approximation to sin(x) using an 8th-order Taylor series.
 */

using namespace std;

int fact(int); // declares a function the skeleton defines for you.

int main(int argc, char *argv[])
{
   // Declare any variables you need here
   double userInput = 0;
   
   // Prompt the user
   cout << "Enter x in radians:  ";
   
   // get input
   cin >> userInput;
   
   // Do some operations
   double p1 = pow(userInput, 3) / fact(3);
   double p2 = pow(userInput, 5) / fact(5);
   double p3 = pow(userInput, 7) / fact(7);
   double fin = userInput - p1 + p2 - p3;
   
   // Print the result to the user
   cout << fin << endl;
   
   // You're done
   return 0;
   
}

// here's the actual definition of fact, declared earlier.
int fact(int n)
{
   int result = 1;
   for (int i = 1; i <= n; i++) {
      result = result * i;
   }
   return result;
}

