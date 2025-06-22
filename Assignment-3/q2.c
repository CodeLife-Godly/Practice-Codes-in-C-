#include <stdio.h>
int main(){
    char character;
    printf("Enter character:");
    scanf("%c",&character);

    char vowels[] = {'a','e','i','o','u'};
    for(int i=0;i<5;i++){
        if(vowels[i]==character){
            printf("It is vowel!");
            return 0;
        }
    }
    printf("It is a consonant.");
    return 0;
}

