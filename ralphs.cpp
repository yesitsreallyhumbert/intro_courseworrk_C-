#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <stdlib.h>
#include <fstream>
using namespace std;

void read(const char filename[], int* n, double numbers[], string items[]){
   ifstream inFile(filename);
   *n = 0;
   while(!inFile.fail()){
      inFile >> numbers[*n] >> items[*n];
      
      if(!inFile.fail()){
         *n = (*n) + 1;
      }
   }

   inFile.close();
   
   
}

int main(int argc, char* argv[]){

   //double factor = atof(argv[1]);   
   double numbers[100];
   string items[100];
   int item_count; // n
  
   
   double price[100];
   string needs[100];
   int count = 0;
   
   read(argv[1], &item_count, numbers, items);
   read(argv[2], &count, price, needs);
    
   bool impossible = false;
   double total = 0;
   int foundCount = 0;
   for(int i = 0; i < item_count; i++){
      bool found = false;
      for(int j = 0; j < count; j++){
         if(items[i] == needs[j]){
            total += numbers[i] * price[j];
            found = true;
            foundCount++;
         
         }
              
      }
      if(!found){
            impossible = true;
         }   
   }
   /*if(foundCount != item_count){
      cout << "Impossible " << endl;
   } */
   
   if(impossible){
      cout << "Impossible " << endl;
   }
   else{
      cout << total << endl;
   }
   
   /*for(int i = 0; i < item_count; i++){
      cout << numbers[i] * factor << " " << items[i] << endl;
   
   } */

   return 0;
}
