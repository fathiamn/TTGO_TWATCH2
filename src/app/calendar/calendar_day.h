/*
© 2026 Monterro · Fathia & Bintang. All rights reserved.
*/
#ifndef _CALENDAR_DAY_H
    #define _CALENDAR_DAY_H

    #
    #define CALENDAR_DAY_INFO_LOG               log_i
    #define CALENDAR_DAY_DEBUG_LOG              log_d
    #define CALENDAR_DAY_ERROR_LOG              log_e
    /**
     * @brief setup calendar overview tile
     */
    void calendar_day_setup();
    /**
     * @brief get calendar overview tile number
     * 
     * @return  calendar overview tile number
     */
    uint32_t calendar_day_get_tile( void );
    void calendar_day_overview_refresh( int year, int month, int day );

#endif // _CALENDAR_DAY_H
