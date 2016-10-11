/* Hector Amaya
USC email: Hamaya@usc.edu
Description: The purpose of this program is to
take user input and enter into our algorithm in
order to find the amount of iterations undergone
to get the desired result of 1, then print it. */

#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>

int main(){

    //variables
    int input = 0;
    int counter1 = 0;
    int counter2 = 0;

    std::cout << "Enter a positive integer: ";
    std::cin >> input;

    // Let the loop be forever in your favor (loops through input)
    while(input != 1){
        // runs this calculation if input is even 
        if(input % 2 == 0){

            input /= 2;
            counter1++;
            std::cout << input << " ";

            }
        // runs this calculation if input is odd 
        else {

            input = (input * 3) + 1;
            counter2++;
            std::cout << input << " ";

            }

        }    

    // Loop ends if 1 is reached, print length of cycle
    std::cout << std::endl;
    std::cout << "Length: " << counter1 + counter2 << std::endl;

    return 0;
    }
