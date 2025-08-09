PostgreSQL (Продукт)
└─ СУБД (Система)
    ├─ Ядро / Архитектурные подсистемы (~25+)
    │    ├─ Parser / Lexer
    │    ├─ Планировщик запросов (Planner)
    │    ├─ Оптимизатор (Optimizer)
    │    ├─ Executor
    │    ├─ Транзакционный менеджер (MVCC)
    │    ├─ Хранилище данных (Storage Manager)
    │    ├─ Индексы (B-tree, GIN, GiST, Bloom, SP-GiST, BRIN и др.)
    │    ├─ WAL / Журнал транзакций (Checkpoint, Recovery)
    │    ├─ Управление блокировками (Lock Manager)
    │    ├─ Буферный менеджер (Buffer Manager)
    │    ├─ Репликация (Streaming Replication, Logical Replication)
    │    ├─ Снапшоты и точки сохранения (Savepoints)
    │    ├─ Аутентификация и безопасность (SSL, SCRAM, LDAP, RADIUS)
    │    ├─ Расширения / Плагины (API для UDF, FDW, расширений)
    │    ├─ Мониторинг и статистика (Stats Collector, EXPLAIN ANALYZE)
    │    ├─ Парсинг и планирование SQL функций и процедур
    │    ├─ Управление памятью и кешированием
    │    ├─ Поддержка JSON/JSONB, XML, HSTORE
    │    ├─ Аналитические функции и оконные функции
    │    ├─ Планировщик ресурсов (Resource Scheduler)
    │    ├─ Конвертеры и кодеки (например, для кодировок)
    │    ├─ Управление расширениями с контролем версий
    │    ├─ Система обработки ошибок и логирования ядра
    │    ├─ Система настройки параметров (GUC)
    │    ├─ Поддержка параллельного выполнения запросов
    │    └─ Дополнительные языки процедур (PL/pgSQL, PL/Python, PL/Perl)
    ├─ Фоновые процессы (~15)
    │    ├─ Postmaster (основной процесс)
    │    ├─ Backend-процессы (обработка подключений)
    │    ├─ Background Writer
    │    ├─ Checkpointer
    │    ├─ WAL Writer
    │    ├─ Autovacuum Launcher и Worker
    │    ├─ Stats Collector
    │    ├─ Logging Collector
    │    ├─ Archiver
    │    ├─ Replication Workers (Streaming и Logical)
    │    ├─ Parallel Query Workers
    │    ├─ Logical Decoding Worker
    │    ├─ Bgworker — внешние фоновые процессы расширений
    │    ├─ Resource Scheduler Workers
    │    └─ Worker для расширений (например, pg_cron)
    ├─ Расширения contrib (~70+)
    │    ├─ pgcrypto, citext, tablefunc, postgres_fdw, intarray
    │    ├─ pg_stat_statements, pg_trgm, hstore, btree_gin, btree_gist
    │    ├─ fuzzystrmatch, cube, dblink, earthdistance
    │    └─ и многие другие, расширяющие функциональность
    ├─ Утилиты и CLI-инструменты (~15)
    │    ├─ psql (CLI клиент)
    │    ├─ pg_dump, pg_restore (резервное копирование/восстановление)
    │    ├─ pg_basebackup (бэкап с копированием файлов)
    │    ├─ pg_ctl (управление сервером)
    │    ├─ vacuumdb, reindexdb, clusterdb
    │    ├─ pgbench (тестирование производительности)
    │    ├─ pg_upgrade (обновление версии)
    │    ├─ pg_config (вывод конфигурации)
    │    ├─ pg_resetwal (сброс WAL в аварийных случаях)
    │    └─ дополнительные админские утилиты
    ├─ Внешние интерфейсы / API (~10+)
    │    ├─ libpq (C API)
    │    ├─ psycopg2 (Python)
    │    ├─ JDBC (Java)
    │    ├─ ODBC
    │    ├─ Perl DBI
    │    ├─ .NET Npgsql
    │    ├─ Foreign Data Wrappers (fdw) — доступ к другим БД
    │    ├─ JSON/REST API через расширения (например, PostgREST)
    │    └─ GraphQL-интерфейсы (через сторонние расширения)
    ├─ Документация, тесты, и примеры кода (~отдельно)
    │    ├─ Автоматические тесты (тестовые сценарии)
    │    ├─ Примеры конфигураций и использования
    │    └─ Документация по API и архитектуре
****
