#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <stdlib.h>
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

   double factor = atof(argv[1]);   
   double numbers[100];
   string items[100];
   int item_count; // n
   read(argv[2], &item_count, numbers, items);

   
   for(int i = 0; i < item_count; i++){
      cout << numbers[i] * factor << " " << items[i] << endl;
   
   }

   return 0;
}
