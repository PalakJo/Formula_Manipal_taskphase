#include <stdio.h>
#include <string.h>

// Recursive function to compress the string
void compress(const char *in, char *out, int i, int count, int *outi) {
    // Base case: If the end of the string is reached
    if (in[i] == '\0') {
        // Add the last character and its count (if greater than 1)
        out[*outi] = in[i - 1];
        (*outi)++;
        if (count > 1) {
            *outi += sprintf(&out[*outi], "%d", count);
        }
        out[*outi] = '\0'; // Null-terminate the string
        return;
    }

    // If the current character matches the next one, increase the count
    if (in[i] == in[i - 1]) {
        compress(in, out, i + 1, count + 1, outi);
    } else {
        // Add the previous character and its count (if greater than 1)
        out[*outi] = in[i - 1];
        (*outi)++;
        if (count > 1) {
            *outi += sprintf(&out[*outi], "%d", count);
        }

        // Continue with the next character
        compress(in, out, i + 1, 1, outi);
    }
}

int main() {
    char in[100], out[100];
    int outi = 0; // Index for the output string

    printf("Enter a string: ");
    scanf("%s", in);

    // Start the recursive compression
    compress(in, out, 1, 1, &outi);

    printf("Compressed String: %s\n", out);

    return 0;
}

