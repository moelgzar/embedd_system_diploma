#include <stdio.h>
#include <string.h>

void reverseWords(char str[]) {
    int start = 0, end = 0;

    int length = strlen(str);
    int left = 0, right = length - 1;
    while (left < right) {
        char temp = str[left];
        str[left] = str[right];
        str[right] = temp;
        left++;
        right--;
    }

    while (str[end] != '\0') {
        while (str[start] == ' ' && str[start] != '\0') {
            start++;
        }
        end = start;
        while (str[end] != ' ' && str[end] != '\0') {
            end++;
        }

        left = start;
        right = end - 1;
        while (left < right) {
            char temp = str[left];
            str[left] = str[right];
            str[right] = temp;
            left++;
            right--;
        }

        start = end;
    }
}

int main() {
    char inputString[] = "mohamed gamal";

    printf("Original string: %s\n", inputString);

    reverseWords(inputString);

    printf("Reversed words: %s\n", inputString);

    return 0;
}
