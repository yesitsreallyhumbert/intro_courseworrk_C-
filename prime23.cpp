#include <iostream>
#include <cmath>

int main(){

int input = 0;

std::cout << "Please enter a natural number: ";
std::cin >> input;
int counter2 = 0;
int counter3 = 0;


while (input % 2 == 0 || input % 3 == 0){
   if(input % 2 == 0){
   input /= 2;
   counter2++;
   
   }
   else if(input % 3 == 0){
   input /= 3;
   counter3++;
   
   }
   else{
   
   
   }
}

if ( input == 1){
   std::cout << "yes, " << counter2 << " 2's and " << counter3
   << " 3's " << std::endl;
}
else {
   std::cout << "No. " << std::endl;
}


   return 0;
}
