#include "sql_parser.h"
#include <stdio.h>

void sql_parser_init(void) {
    printf("SQL parser initialized.\n");
}

void sql_parser_parse(const char* query) {
    printf("Parsing query: %s\n", query);
}

void sql_parser_shutdown(void) {
    printf("SQL parser shutdown.\n");
}
