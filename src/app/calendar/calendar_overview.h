/*
© 2026 Monterro · Fathia & Bintang. All rights reserved.
*/
#ifndef _CALENDAR_OVREVIEW_H
    #define _CALENDAR_OVREVIEW_H

    #define CALENDAR_OVREVIEW_INFO_LOG               log_i
    #define CALENDAR_OVREVIEW_DEBUG_LOG              log_i
    #define CALENDAR_OVREVIEW_ERROR_LOG              log_i
    
    #define CALENDAR_OVREVIEW_HIGHLIGHTED_DAYS       31

    /**
     * @brief setup calendar overview tile
     */
    void calendar_overview_setup();
    /**
     * @brief get calendar overview tile number
     * 
     * @return  calendar overview tile number
     */
    uint32_t calendar_overview_get_tile( void );
    /**
     * @brief refresh calendar date ui
     */
    void calendar_overview_refresh_showed_ui( void );

#endif // _CALENDAR_OVREVIEW_H
