#include "user_manager.h"
#include <stdio.h>

void user_manager_init(void) {
    printf("User manager initialized.\n");
}

void user_manager_create(const char* username) {
    printf("User created: %s\n", username);
}

void user_manager_delete(const char* username) {
    printf("User deleted: %s\n", username);
}

void user_manager_shutdown(void) {
    printf("User manager shutdown.\n");
}
