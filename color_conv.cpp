#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   // Enter your code here
   int red = 0;
   int green = 0;
   int blue = 0;
   
   double denom = 255;
   double cyan = 0;
   double magenta = 0;
   double yellow = 0;
   double black = 0;
   
   
   cout << "Enter a value for red: ";
   cin >> red;
   
   cout << "Enter a value for green: ";
   cin >> green;
   
   cout << "Enter a value for blue: ";
   cin >> blue;
   
   
   double max1 = max(((double)red /denom), ((double)green/denom));
   double white = max(max1, (double)blue / denom);
   
   cyan = (white - ((double)red / denom)) / white;
   magenta = (white - ((double)green / denom)) / white;
   yellow = (white - ((double)blue / denom)) / white;
   black = 1 - white;
   
   cout << "cyan: " << cyan << endl;
   cout << "magenta: " << magenta << endl;
   cout << "yellow: " << yellow << endl;
   cout << "black: " << black << endl;
   
   
   
   return 0;
}
