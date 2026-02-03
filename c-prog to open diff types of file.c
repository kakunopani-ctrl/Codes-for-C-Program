#include <stdio.h>
#include <stdlib.h>
int main() {
    char path[100];
    printf("Enter the path of the file to open: ");
    scanf("%s", path);
    system(path);
    return 0;
}
