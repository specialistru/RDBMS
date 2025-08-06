#include "main.h"
#include <stdio.h>
// Подключение всех архитектурных блоков
#include "storage.h"
#include "transaction_manager.h"
#include "index_manager.h"
#include "optimizer.h"
#include "buffer_manager.h"
#include "log_manager.h"
#include "metadata_manager.h"
#include "user_manager.h"
#include "calc_engine.h"
#include "sql_parser.h"

// SAP HANA+ Grade: Основная точка входа

void system_init(void) {
    printf("System initialization...\n");
    storage_init();
    transaction_manager_init();
    index_manager_init();
    optimizer_init();
    buffer_manager_init();
    log_manager_init();
    metadata_manager_init();
    user_manager_init();
    calc_engine_init();
    sql_parser_init();
}

void run_main_loop(void) {
    printf("Running main loop...\n");
    calc_engine_execute();
    optimizer_optimize();
    sql_parser_parse("SELECT * FROM DUMMY;");
    transaction_manager_begin();
    index_manager_create();
    buffer_manager_flush();
    log_manager_write("Main loop log entry");
    metadata_manager_update();
    user_manager_create("hana_admin");
    transaction_manager_commit();
    user_manager_delete("hana_admin");
    transaction_manager_rollback();
    index_manager_drop();
}

void system_shutdown(void) {
    printf("System shutdown...\n");
    sql_parser_shutdown();
    calc_engine_shutdown();
    user_manager_shutdown();
    metadata_manager_shutdown();
    log_manager_shutdown();
    buffer_manager_shutdown();
    optimizer_shutdown();
    index_manager_shutdown();
    transaction_manager_shutdown();
    storage_shutdown();
}

int main(void) {
    system_init();
    run_main_loop();
    system_shutdown();
    return 0;
}
