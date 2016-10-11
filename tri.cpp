#include <iostream>
#include <cmath>

int main(){
int input;

std::cout << "please enter a number between 15 and 75: ";
std::cin >> input;

double rad = ((input * M_PI) / 180);

for (int i = 0; i < 30; i++){
    double x = tan(rad) * i;
   if(x >= 20 && x <= 30){
   std::cout <<"********************";
   }
   
   else {
   for (int j = 0; j < x; j++){
  
   std::cout << "*";
   }
   }
std::cout << std::endl;

}





   return 0;
}
