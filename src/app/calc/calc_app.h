/*
© 2026 Monterro · Fathia & Bintang. All rights reserved.
*/
#ifndef _CALC_APP_H
    #define _CALC_APP_H

    /**
     * @brief setup calc app
     * 
     */
    void calc_app_setup( void );
    /**
     * @brief get to calc app tile number
     * 
     * @return uint32_t tilenumber
     */
    uint32_t calc_app_get_app_main_tile_num( void );
    /**
     * @brief call back function when enter the app
     * 
     * @param obj           object
     * @param event         event
     */
    void enter_calc_app_event_cb( lv_obj_t * obj, lv_event_t event );
    /**
     * @brief call back function when exit the app
     * 
     * @param obj           object
     * @param event         event
     */
    void exit_calc_app_main_event_cb( lv_obj_t * obj, lv_event_t event );

#endif // _CALC_APP_H
