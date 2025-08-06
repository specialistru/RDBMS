#ifndef LOG_MANAGER_H
#define LOG_MANAGER_H

// SAP HANA+ Grade Block 0.8: Log Manager
void log_manager_init(void);
void log_manager_write(const char* message);
void log_manager_shutdown(void);

#endif     // LOG_MANAGER_H
