#ifndef MVCC_H
#define MVCC_H

// SAP HANA+ Grade Block: MVCC (Многоверсионное управление)
void mvcc_init(void);
void mvcc_commit(void);
void mvcc_rollback(void);
void mvcc_shutdown(void);

#endif // MVCC_H
