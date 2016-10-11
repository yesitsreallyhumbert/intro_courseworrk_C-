#include <iostream>
#include <cmath>
#include <ctime> 
#include <cstdlib>

int roll(){
   int random = rand() % 6 + 1;
   return random;
}

void printHistogram(int counts[21]){
   for(int i = 0; i < 21; i++){
      std::cout << i + 4 << ": ";
      for(int j = 0; j < counts[i]; j++){
         std::cout << "x";
         
      }
      std::cout << std::endl;
   }

}

 int main(){
   srand(time(0));
   int n = 0;
   int counts[21];
   
   for(int k = 0; k < 21; k++){
      counts[k] = 0;
   }
   
   std::cout << "Enter a number:";
   std::cin >> n;    
   
   for (int i = 0; i < n; i++){
     int sum = 0;  
     for(int j = 0; j <=3; j++){
         sum += roll();
      }
    counts[sum - 4] = ++counts[sum - 4];
    //counts[i] = sum;
   }
   printHistogram(counts); 



   return 0;
}

