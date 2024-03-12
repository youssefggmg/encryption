#include <stdio.h>

int main () {
    char userPass[] = {}, encryptedUserPass[];
    int length, i;

    printf("Enter your password to be encryped: ");
    scanf("%s",userPass);

    length = sizeof(userPass) / sizeof(userPass[0]);

    for (i = 0; i < length; i++) {
        encryptedUserPass[i] = userPass[i] + 3;
    }

    printf("Your unencrypted password is: ");
    for (i = 0; i < length; i++) {
        printf("%c", encryptedUserPass[i]);
    }
    printf(".");
    
    return 0;
}