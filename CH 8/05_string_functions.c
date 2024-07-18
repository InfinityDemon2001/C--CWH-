# include <stdio.h>
# include <string.h>

int main() {
    char st[] = "Allen";
    char s1[56] = "Allen";
    char s2[56] = "Sabu";

    // printf("%d", strlen(st));

    char target[30];
    strcpy(target, st);  // target now contains "Allen"
    // printf("%s %s", st, target);

    strcat(s1, s2);  // s1 now contains "ALlenSabu" <in space in between>
    // printf("%s %s", s1, s2);

    int a = strcmp("deep", "joke");  // DJ is negative
    printf("%d", a);
    
    return 0;
}