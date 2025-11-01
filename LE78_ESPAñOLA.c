#include <stdio.h>
#include <string.h>  // for strlen()

int main() {
    // -----------------------------
    // PART 1: FIND LARGEST ELEMENT
    // -----------------------------
    int n;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int numbers[n]; // array to hold user input

    // input values
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    // find largest
    int largest = numbers[0];
    for (int i = 1; i < n; i++) {
        if (numbers[i] > largest)
            largest = numbers[i];
    }

    printf("\nThe largest element in the array is: %d\n", largest);

    // -----------------------------
    // PART 2: COUNT VOWELS
    // -----------------------------
    char text[200];
    int vowels = 0;

    printf("\nEnter a string: ");
    getchar(); // clear leftover newline from scanf
    fgets(text, sizeof(text), stdin); // read string input

    // check each character
    for (int i = 0; i < strlen(text); i++) {
        char c = text[i];
        if (c == 'a' || c == 'A' ||
            c == 'e' || c == 'E' ||
            c == 'i' || c == 'I' ||
            c == 'o' || c == 'O' ||
            c == 'u' || c == 'U') {
            vowels++;
        }
    }

    printf("The number of vowels in the string is: %d\n", vowels);

    return 0;
}
