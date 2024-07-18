# include <stdio.h>
# include <string.h>

struct employee {
    int code;  // This declares a new user defined data type!
    float salary;
    char name[10];
};  // Semicolon is important

int main() {
    struct employee facebook[100];  // Array of structures

    // We can access the data using:
    facebook[0].code = 100;
    facebook[1].code = 77;

    struct employee allen = {100, 71.22, "Allen"};
    printf("%d %.2f %s\n", allen.code, allen.salary, allen.name);
    
    return 0;
}