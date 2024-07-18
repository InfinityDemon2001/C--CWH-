# include <stdio.h>

int main() {
    FILE* ptr;

    char name1[34], name2[34];
    int salary1, salary2;

    ptr = fopen("salary.txt", "w");

    printf("Enter name of Employee \n");
    scanf("%s", &name1);

    printf("Enter salary of Employee \n");
    scanf("%d", &salary1);

    printf("Enter name of Employee 2\n");
    scanf("%s", &name2);

    printf("Enter salary of Employee 2\n");
    scanf("%d", &salary2);

    fprintf(ptr, "%s", name1);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary1);
    fprintf(ptr, "%c", '\n');
    fprintf(ptr, "%s", name2);
    fprintf(ptr, "%s", ", ");
    fprintf(ptr, "%d", salary2);
    
    return 0;
}