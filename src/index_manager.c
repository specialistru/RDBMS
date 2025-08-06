#include "index_manager.h"
#include <stdio.h>

void index_manager_init(void) {
    printf("Index manager initialized.\n");
}

void index_manager_create(void) {
    printf("Index created.\n");
}

void index_manager_drop(void) {
    printf("Index dropped.\n");
}

void index_manager_shutdown(void) {
    printf("Index manager shutdown.\n");
}
