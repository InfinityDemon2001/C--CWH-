# include <stdio.h>

int main() {
    int n = 3;

    for(int i = 0; i < n; i ++) {
        // This loop runs from 0 to 2
        // If i = 0 ---> print 1 star
        // If i = 1 ---> print 3 star
        // If i = 2 ---> print 5 star
        // no_of_stars = (2 * i + 1)

        for(int j = 0; j < 2 * i + 1; j ++) {
            printf("*");
        } 
        
        printf("\n");
    }
    return 0;
}