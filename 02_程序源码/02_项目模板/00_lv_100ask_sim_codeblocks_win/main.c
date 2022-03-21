
/**
 * @file main
 *
 */

/*********************
 *      INCLUDES
 *********************/
#include <stdlib.h>
#include <unistd.h>

#include "lvgl/lvgl.h"
#include "lv_100ask_teach_demos/lv_100ask_teach_demos.h"
#include "lv_demos/src/lv_demo_widgets/lv_demo_widgets.h"
#include "lv_drivers/win32drv/win32drv.h"

#include <windows.h>


/*********************
 *      DEFINES
 *********************/

/**********************
 *      TYPEDEFS
 **********************/

/**********************
 *  STATIC PROTOTYPES
 **********************/
static void hal_init(void);
static int tick_thread(void *data);

/**********************
 *  STATIC VARIABLES
 **********************/

/**********************
 *      MACROS
 **********************/

/**********************
 *   GLOBAL FUNCTIONS
 **********************/

int APIENTRY WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR szCmdLine, int nCmdShow)
{
    /*Initialize LittlevGL*/
    lv_init();

    /*Initialize the HAL for LittlevGL*/
    lv_win32_init(hInstance, SW_SHOWNORMAL, 1024, 600, NULL);

    /*Output prompt information to the console, you can also use printf() to print directly*/
    LV_LOG_USER("LVGL initialization completed!");
    //printf("www.100ask.net: Lvgl initialization complete!\n");


    /*Run the demo*/
    lv_100ask_demo_course_2_1_1();
	//lv_100ask_demo_course_2_2_2();
	//lv_100ask_demo_course_2_2_3();
	//lv_100ask_demo_course_2_2_4();
	//lv_100ask_demo_course_2_2_5();
	//lv_100ask_demo_course_2_2_6();

	//lv_100ask_demo_course_3_1_1();
	//lv_100ask_demo_course_3_1_2();
	//lv_100ask_demo_course_3_2_1();
	//lv_100ask_demo_course_3_3_1();
	//lv_100ask_demo_course_3_4_1();
	//lv_100ask_demo_course_3_5_1();
	//lv_100ask_demo_course_3_6_1();


    while(!lv_win32_quit_signal) {
        /* Periodically call the lv_task handler.
         * It could be done in a timer interrupt or an OS task too.*/
        lv_task_handler();
        usleep(10000);       /*Just to let the system breath*/
    }
    return 0;
}
