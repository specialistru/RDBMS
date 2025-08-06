#ifndef SQL_PARSER_H
#define SQL_PARSER_H

// SAP HANA+ Grade Block 0.3: SQL Parser
void sql_parser_init(void);
void sql_parser_parse(const char* query);
void sql_parser_shutdown(void);

#endif     // SQL_PARSER_H
