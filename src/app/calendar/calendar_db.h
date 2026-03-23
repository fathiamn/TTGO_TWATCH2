/*
© 2026 Monterro · Fathia & Bintang. All rights reserved.
*/
#ifndef _CALENDAR_DB_H
    #define _CALENDAR_DB_H

    // #define CALENDAR_DB_FORCE_CREATE_DB
    #define CALENDAR_DB_CREATE_TEST_DATA

    #define CALENDAR_DB_INFO_LOG    log_d
    #define CALENDAR_DB_DEBUG_LOG   log_d
    #define CALENDAR_DB_ERROR_LOG   log_e

//    #define CALENDAR_DB_FILE        "/home/sharan/.hedge/spiffs/calendar.db"       /** @brief calendar database file */
    #define CALENDAR_DB_FILE        "/spiffs/calendar.db"       /** @brief calendar database file */
    /**
     * @brief sql exec callback function definition, this function is called on every result line
     * 
     * @param   data        user define data
     * @param   argc        number of arguments
     * @param   argv        arguments pointer table
     * @param   azColName   colum name pointer table
     */
    typedef int ( * SQL_CALLBACK_FUNC ) ( void *data, int argc, char **argv, char **azColName );
    /**
     * @brief setup sqlite3 interface and check if a database exist
     */
    void calendar_db_setup( void );
    /**
     * @brief open calendar db and holds it open in background
     * 
     * @return  true if no error, false if failed
     */
    bool calendar_db_open( void );
    /**
     * @brief close calendar db
     */
    void calendar_db_close( void );
    /**
     * @brief query an sql request
     * 
     * @param   callback    pointer to a callback funtion for the results
     * @param   sql         pointer to a sql query string
     * 
     * @return  true if was success or false if was failed
     */
    bool calendar_db_exec( SQL_CALLBACK_FUNC callback, const char *sql );
#endif // _CALENDAR_DB_H
