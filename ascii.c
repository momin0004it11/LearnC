#include <stdio.h>
int main() {  
    char c;
    printf("Enter a character:\n ");
    scanf("%c", &c);  
    
    // %d displays the integer value of a character
    // %c displays the actual character
    printf("ASCII value of %c = %d\n\n", c, c);
    
    return 0;
}

