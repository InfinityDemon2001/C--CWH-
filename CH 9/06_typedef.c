# include <stdio.h>
# include <string.h>

typedef struct employee {
    int code;  // This declares a new user defined data type!
    float salary;
    char name[10];
} Emp;  // Semicolon is important

int main() {
    // typedef int allen;
    // allen a = 88;
    // printf("The value of a is %d\n", a);

    // typedef struct employee Emp;
    Emp e1;
    Emp* ptr1 = &e1;
    e1.code = 4511;
    strcpy(e1.name, "Allen");
    e1.salary = 54.44;

    printf("%d %.2f %s\n", e1.code, e1.salary, e1.name);
    printf("%d %.2f %s\n", ptr1 -> code, ptr1 -> salary, ptr1 -> name);
    
    return 0;
}