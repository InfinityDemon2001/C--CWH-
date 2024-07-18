# include <stdio.h>

int sum(int*, int*);

// Sum should change the value of x
int sum(int* a, int* b) {
    *a = 6;

    return (*a + *b);
}

int main() {
    int x = 1, y = 6;
    
    printf("The sum of x and y is %d\n", sum(&x, &y));
    
    return 0;
}