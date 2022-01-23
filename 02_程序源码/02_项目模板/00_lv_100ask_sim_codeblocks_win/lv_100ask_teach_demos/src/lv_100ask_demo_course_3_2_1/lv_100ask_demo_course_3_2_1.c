/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_3_2_1.c
 * @author  ���ʿƼ�
 * @version V1.0
 * @date    2022-01-20
 * @brief	3_2_1 �εĿ��ô���
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2022-01-20     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2021 ���ڰ������Ƽ����޹�˾<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if 1 // LV_USE_100ASK_DEMO_COURSE_3_2_1

#include <stdio.h>
#include "lv_100ask_demo_course_3_2_1.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/
static void btn_toggle_event_cb(lv_event_t * e)
{
    lv_obj_t * obj = lv_event_get_target(e);        // ��ȡ�����¼��Ĳ���(����)
    lv_event_code_t code = lv_event_get_code(e);    // ��ȡ��ǰ����(����)�������¼�����

    switch(code){
        case LV_EVENT_VALUE_CHANGED:
            printf("LV_EVENT_VALUE_CHANGED\n");
            break;
        default:
            //printf("NONE\n");
            break;
    }
}

void lv_100ask_demo_course_3_2_1(void)
{
    /* ����һ��btn����(����) */
    lv_obj_t * btn = lv_btn_create(lv_scr_act());       // ����һ��btn����(����),���ĸ������ǻ��Ļ����

    // �޸İ�ť���������󣩾��α������ֵ���ʽ
    //lv_obj_set_style_bg_color(btn, lv_color_hex(0x1e1e1e), LV_PART_MAIN | LV_STATE_PRESSED);

    // ���� LV_OBJ_FLAG_CHECKABLE �������󱻵��ʱ��ѡ���л�(Toggle)״̬��Ч��
    // �䴥������ LV_EVENT_VALUE_CHANGED �¼�����
    //lv_obj_add_flag(btn, LV_OBJ_FLAG_CHECKABLE);

    // ���� LV_EVENT_VALUE_CHANGED �¼�����ʾ��
    //lv_obj_add_event_cb(btn, btn_toggle_event_cb, LV_EVENT_VALUE_CHANGED, NULL);
}


#endif /* LV_USE_100ASK_DEMO_COURSE_3_2_1 */
