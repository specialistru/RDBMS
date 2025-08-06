#ifndef TRANSACTION_MANAGER_H
#define TRANSACTION_MANAGER_H

// SAP HANA+ Grade Block 0.4: Transaction Manager
void transaction_manager_init(void);
void transaction_manager_begin(void);
void transaction_manager_commit(void);
void transaction_manager_rollback(void);
void transaction_manager_shutdown(void);

#endif // TRANSACTION_MANAGER_H
