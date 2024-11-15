/*
    Hangman version 2: copied from geeksforgeeks.

    conclusion: doesn't work properly, don't really understand it.
*/
#include <ctype.h> //for character manipulation e.g tolower
#include <stdbool.h> //for using boolean data types(true and false)
#include <stdio.h> //for input and output functions
#include <stdlib.h> // for general utility functions
#include <string.h> //For string manipulation functions
#include <time.h> //for using the system time to seed the random number generator

// define: constants are defined for max word length and max tries allowed
#define MAX_WORD_LENGTH 50 
#define MAX_TRIES 6

//struct to hold a word and its hint
struct WordWithHint{
    char word[MAX_WORD_LENGTH];
    char hint[MAX_WORD_LENGTH];
};

//displayWord to show the current state of the geussed word.
void displayWord(const char word[], const bool guessed[]);
//drawHangman to visually represent the hangman based on the number of incorrect guesses.
void drawHangman(int tries);

//main function
int main()
{
    srand(time(NULL)); //Seed the random number generator.

    //Structure initialization: here "WordWithHunt" is an array of structures.
    //each structure contains a word and its corresponding hint.
    struct WordWithHint wordList[] = {
        {"elephant","A large mammal with a trunk"},
        {"pizza","A popular italian dish"},
        {"beach","Sandyshore by the sea"},
        {"hangman", "game where you guess words"},
    };
    
    //generates random word
    int wordIndex = rand() % 4; //randomly select a word

    //pointer initialization
    //SecretWord points to the randomly selected word in the wordList
    //hint points to the corresponding hint for that word.
    const char* secretWord = wordList[wordIndex].word;
    const char* hint = wordList[wordIndex].hint;

    //strlen(secretWord) calculates the length of the selected word
    //this calculates how many letter the player needs to geuss
    int wordLength= strlen(secretWord);

    //this is an array, it will hold the current state of the guessed word, initialized to zero(empty)
    char guessedWord[MAX_WORD_LENGTH] = { 0 };

    //this is another array but boolean, it tracks whether each letter of the alphabet has been guessed.
    //it is initialized to false for all letters, indicating that no letters have been geussed yet.
    //the index for each letter is determined by its position in the alphabet a =0 b = 1 etc.
    bool guessedLetters[26] = { false };

    printf("Welcome to Hangman!\n");
    printf("Hint: %s\n", hint);

    int tries = 0;


    //main game loop, continues until the player has used up all their tries.
    while(tries < MAX_TRIES)
    {
        printf("\n");
        displayWord(guessedWord, guessedLetters);
        drawHangman(tries);

        char guess;
        printf("Enter a letter: ");
        scanf("%c", &guess);
        guess = tolower(guess);

        //checks if the letter has already been guessed.
        if (guessedLetters[guess - 'a']){
            printf("You've already guessed that letter, Try agaim. \n");
            continue;
        }

        //marks the guessed letter as guessed.
        guessedLetters[guess - 'a'] = true;
        bool found = false;

        for(int i = 0; i < wordLength; i++){
            if(secretWord[i] == guess){
                found = true;
                guessedWord[i] = guess;
            }
        }

        if(found){
            printf("Good Guess!\n");
        }
        else
        {
            printf("Sorry, the letter '%c' is not in the " " word.\n", guess);
            tries++;
        }
        //winning condition
        if(strcmp(secretWord, guessedWord) == 0){
            printf("\nCongratulations! You've guessed the " " word: %s\n", secretWord);
            break;
        }
    }
    //loss condition
    if (tries >= MAX_TRIES){
            printf("\nSorry, you've run out of tries. The word " " was: %s \n", secretWord);
        }

        return 0;
}

void displayWord(const char word[], const bool guessed[])
{
    printf("Word:");
    for (int i = 0; word[i] != '\0'; i++)
        if (guessed[word[i] - 'a']){
            printf("%c", word[i]);
        }
        else
        {
            printf("_ ");
        }
        printf("\n");
}

void drawHangman(int tries)
{
    const char* hangmanParts[]
    = { "    ________",    "    |       |",
        "   |        0",   "    |      /|\\",
        "   |       / \\", "    |"};
    
    printf("\n");
    for(int i = 0; i <= tries; i++){
        printf("%s\n", hangmanParts[i]);
    }
}
