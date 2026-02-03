#include<stdio.h>
#include<stdlib.h>
int main() {
int *data = (int*)malloc(100 * sizeof(int));
if (data == NULL) {
    printf("Memory allocation failed\n");
    return 1;
}
printf ("Memory successfully allocated using malloc.\n");
free(data);
printf("Memory successfully freed.\n");
return 0;
}
