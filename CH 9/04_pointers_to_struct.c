# include <stdio.h>
# include <string.h>

struct employee {
    int code;  // This declares a new user defined data type!
    float salary;
    char name[10];
};  // Semicolon is important

int main() {
    struct employee e1;
    e1.code = 56;

    struct employee *ptr;

    ptr = &e1;

    // Now we can print structure elements using 
    // printf("%d", (*ptr).code);
    printf("%d", ptr -> code);  // Exactly same as (*ptr).code)
    
    return 0;
}