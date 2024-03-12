#include <stdio.h>

int main () {
    int length;
    char userPass[] = {}, encryptedUserPass[length];

    printf("enter your passwored to be encryped: ");
    scanf("%s",userPass);

    length = sizeof(userPass) / sizeof(userPass[0]);

    for (int i = 0; i < length; i++) {
        encryptedUserPass[i] = userPass[i] + 3;
    }
    
    return 0;
}