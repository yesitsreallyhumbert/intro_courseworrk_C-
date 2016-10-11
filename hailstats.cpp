/* Hector Amaya
USC email: Hamaya@usc.edu
Description: The purpose of this program is to cycle through
the range provided by the user and find the values
that provide the min/max iterations through our algorithm. */

#include <iostream>
#include <cmath>
#include <climits>

int main(){

   // Declare variables
   int beginrange = 0;
   int endrange = 0;
   int min = -1;
   int max = -1;
   int minAchievedBy = -1;
   int maxAchievedBy = -1;
   bool valid = true;
   
   //request user input and loop until valid range achieved
   do{
   
      std::cout << "Enter the range you want to search: ";
      std::cin >> beginrange >> endrange;
      if(beginrange >= endrange){
      std::cout << "Invalid range." << std::endl;
      valid = true;
      
    }
    
   else{
      valid = false;     
    }
   
     }while(valid == true);
   
  // loop through all values in range 
   for (int i = beginrange; i <= endrange; i++){ 
      int current = i; 
      int counter = 0;
      
      // loop used to calculate min/max for current value
      while(i != 1){
         ++counter;
         // if current value is even, follow this calculation
         if(i % 2 == 0){
         
              i /= 2;
            }
         //if current value (i) is odd, use this formula.
         else {
         
            i = i * 3 + 1;
            }
        }
   //every iteration checks and replaces the value of max if true     
   if(counter > max || max == -1){
      max = counter;
      maxAchievedBy = current;
      }
   //every iteration checks and replaces the value of min if true    
   if(counter < min || min == -1){
      min = counter;
      minAchievedBy = current;
      }
      
      i = current;
   }
   // prints results
   std::cout << "Minimum length: " << min << std::endl;
   std::cout << "Achieved by: " << minAchievedBy << std::endl;
   std::cout << "Maximum length: " << max << std::endl;
   std::cout << "Achieved by: " << maxAchievedBy << std::endl;
     
   return 0;
  }
