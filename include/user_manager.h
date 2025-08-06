#ifndef USER_MANAGER_H
#define USER_MANAGER_H

// SAP HANA+ Grade Block 0.10: User Manager
void user_manager_init(void);
void user_manager_create(const char* username);
void user_manager_delete(const char* username);
void user_manager_shutdown(void);

#endif     // USER_MANAGER_H
