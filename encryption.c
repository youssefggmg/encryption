#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    char userPass[50] = {}, encryptedUserPass[50] = {};
    int i;

    printf("Enter your password: ");
    scanf("%s", &userPass);

    for (i = 0; userPass[i] != '\0'; i++) {
        encryptedUserPass[i] = userPass[i] + 3;
    }

	printf("Your encrypted password is: ");
    for (i = 0; userPass[i] != '\0'; i++) {
        printf("%c", encryptedUserPass[i]);
    }
    printf(".\n");
    
	for (i = 0; userPass[i] != '\0'; i++) {
        userPass[i] = encryptedUserPass[i] - 3;
    }
    
    printf("Your unencrypted password is: ");
    for (i = 0; userPass[i] != '\0'; i++) {
        printf("%c", userPass[i]);
    }
    printf(".");
	
	return 0;
}