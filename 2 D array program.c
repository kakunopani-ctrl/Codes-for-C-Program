#include <stdio.h>

int main(void) {
    int m[2][3] = {{1,2,3}, {4, 5, 6}};  // Fill missing elements in first row
    for (int i = 0; i < 2; i++) {            // Loop through rows
        for (int j = 0; j < 3; j++) {        // Loop through columns
            printf("%d%c", m[i][j], (j == 2) ? '\n' : ' ');
        }
    }
    return 0;
}
