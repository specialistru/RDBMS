#include "mvcc.h"
#include <stdio.h>

void mvcc_init(void) {
    printf("MVCC initialized.\n");
}

void mvcc_commit(void) {
    printf("MVCC commit.\n");
}

void mvcc_rollback(void) {
    printf("MVCC rollback.\n");
}

void mvcc_shutdown(void) {
    printf("MVCC shutdown.\n");
}
