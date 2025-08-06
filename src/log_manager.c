#include "log_manager.h"
#include <stdio.h>

void log_manager_init(void) {
    printf("Log manager initialized.\n");
}

void log_manager_write(const char* message) {
    printf("Log: %s\n", message);
}

void log_manager_shutdown(void) {
    printf("Log manager shutdown.\n");
}
