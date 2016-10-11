// hangman.cpp
// Hangman game illustrates string library functions, 
// character arrays, arrays of pointers, etc.
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

using namespace std;

// Prototype. we'll define this below.
int processGuess(char* word, const char* targetWord, char guess);

// Define an array of strings (since a string is just a char array)
//  and since string are just char *'s, we really want an array of char *'s
const char* wordBank[] = {"computer", "president", "trojan", "program",
                          "coffee", "library", "football", "popcorn", 
                          "science", "engineer"};

const int numWords = 10;

int main()
{
  srand(time(0));
  char guess;
  bool wordGuessed = false;
  int numTurns = 10;

  // Pick a random word from the wordBank
  const char* targetWord = wordBank[rand() % numWords];

  // More initialization code as needed
  char word[80];  // a blank array to use to build up the answer
  for (int i = 0; i < strlen(targetWord); i++) {
       word[i] = '*';
   }                 // It should be initialized with *'s and then
   word[strlen(targetWord)] = '\0';      //  change them to the actual letters when the 
                  //  user guesses the letter






  
  // An individual game continues until a word
  //  is guessed correctly or 10 turns have elapsed
   while( numTurns > 0 && wordGuessed == false){
         cout << "The current word is: " << word << endl;
         cout << "Number of turns: " << numTurns << endl;
         cout << "Please guess: " << endl;
         cin >> guess;
         if (processGuess(word, targetWord, guess) == 0){
            numTurns--;
         }
         if(strcmp(targetWord, word) == 0){
            wordGuessed = true;
         }
       
   }
     cout << "the word was: " << targetWord << endl;
     if (wordGuessed == false){
            cout << "You lose! " << endl;
         }
      else{
         cout << "You Win! " << endl;
      }


  // Print out end of game status
   

    
  return 0;
}

// Given the current version of the word, target/selected word, and
// the character that the user just guessed, change the word to 
// "turn on" any occurrences the guess character and return a count
// of how many occurrences of 'guess' were found
int processGuess(char* word, const char* targetWord, char guess)
{
   int count = 0;
   for (int i = 0; i < strlen(targetWord); i++){
      
      if(targetWord[i] == guess){
         word[i] = guess;
         count++;
      }
   }
      return count;
   


}

