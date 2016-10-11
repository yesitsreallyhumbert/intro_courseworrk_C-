#include <iostream>
using namespace std;

int main(){

int userInput = 0;
cout << "Enter a number between 0 and 999: ";
while(cin >> userInput){
   //12
   cout << "1's digit: " << userInput % 10 << endl;
   userInput /= 10;
   cout << "10's digit: " << userInput % 10 << endl;
   userInput /= 10;
   cout << "100's digit: " << userInput << endl;
         


}






return 0;
}
