# include <stdio.h>

int main() {
    FILE* ptr;
    ptr = fopen("allen2.txt", "a");

    // char c = fgetc(ptr);  // Used to read a character from a file
    // printf("%c\n", c);

    fputc('c', ptr);

    fclose(ptr); 

    return 0;
}