#include <stdio.h>
#include <string.h>

void reverseSentence(char sentence[], int start, int end) {
    if (start >= end) {
        return;
    }

    char temp = sentence[start];
    sentence[start] = sentence[end];
    sentence[end] = temp;

    reverseSentence(sentence, start + 1, end - 1);
}

int main() {
    char sentence[100];

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    
    size_t len = strlen(sentence);
    if (len > 0 && sentence[len - 1] == '\n') {
        sentence[len - 1] = '\0';
    }

 
    reverseSentence(sentence, 0, strlen(sentence) - 1);

  
    printf("Reversed sentence: %s\n", sentence);

    return 0;
}

