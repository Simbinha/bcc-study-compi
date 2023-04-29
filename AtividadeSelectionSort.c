#include <stdio.h>
#include <string.h>

char inputString[100];
int stringLength;

void stringSort(){
    

    printf("Digite a string que quer: ");
    fgets(inputString, sizeof inputString, stdin);

    stringLength = strlen(inputString);
    stringLength -= 1;

    for (int outerCharIndex = 1; outerCharIndex < stringLenght; outerCharIndex++)
    {
        for (int innerCharIndex = 0; innerCharIndex < stringLenght - outerCharIndex; innerCharIndex++){
            
            if (inputString[innerCharIndex] > inputString[innerCharIndex + 1]){
                char charCopy = inputString[innerCharIndex];
                inputString[innerCharIndex] = inputString[innerCharIndex + 1];
                inputString[innerCharIndex + 1] = charCopy;
            }
        }
    }
};


int main(){
    
    stringSort();
    
    printf("String Ordenada: ");
    printf("%s", inputString);
    
    return 0;
}