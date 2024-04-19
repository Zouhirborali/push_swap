#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 100

void shuffle(int array[], int size) {
    srand(time(NULL)); // Seed the random number generator
    for (int i = size - 1; i > 0; i--) {
        int j = rand() % (i + 1); // Generate a random index
        // Swap array[i] and array[j]
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
    }
}

int main() {
    int numbers[SIZE];
    
    // Initialize the array with numbers from 0 to 500
    for (int i = 0; i < SIZE; i++) {
        numbers[i] = i;
    }
    
    // Shuffle the array
    shuffle(numbers, SIZE);
    
    // Print the shuffled array
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
