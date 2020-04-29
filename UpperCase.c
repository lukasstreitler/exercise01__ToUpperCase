#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// halloxxxx
 
/*
 * turns the given String into upper-case characters
*/
void toUpperCase(char* text){
    // put your code here!
    while(*text != '\0'){
        if (*text >= 'a' && *text <= 'z'){
            *text = *text - 32;
        }
        text++;
    }
}

void test(char* text){
  char* newString = malloc(strlen(text)*sizeof(char)+1);
  strcpy(newString, text);
  toUpperCase(newString);
  printf("%s --> %s\n", text, newString);
}


int main(int argc, char const *argv[]) {

  test("xyz");
  test("this is a test");
  test("this IS a test!"); // THIS IS A TEST!
  test("numbers 123"); // NUMBERS 123
  
  return 0;
}
