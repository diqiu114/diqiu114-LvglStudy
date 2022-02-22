/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_3_4_1.c
 * @author  ���ʿƼ�
 * @version V1.0
 * @date    2022-02-18
 * @brief	3_4_1 �εĿ��ô���
 ******************************************************************************
 * Change Logs:
 * Date           Author          Notes
 * 2022-02-18     zhouyuebiao     First version
 ******************************************************************************
 * @attention
 *
 * Copyright (C) 2008-2022 ���ڰ������Ƽ����޹�˾<https://www.100ask.net/>
 * All rights reserved
 *
 ******************************************************************************
 */


/*********************
 *      INCLUDES
 *********************/
#include "../../lv_100ask_teach_demos.h"

#if 1 // LV_USE_100ASK_DEMO_COURSE_3_4_1

//#include <stdio.h>
#include "lv_100ask_demo_course_3_4_1.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/
static void sw_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *sw = lv_event_get_target(e);

    if (code == LV_EVENT_VALUE_CHANGED)
    {
        // �жϿ���״̬
        /* ��ʽ1 */
        // ���� bool ���ͣ� ��-1 �� ��-2
        //if(lv_obj_has_state(sw, LV_STATE_CHECKED))
        //    LV_LOG_USER("ON!");
        //else
        //    LV_LOG_USER("OFF!");

        // ������д��
        LV_LOG_USER("State: %s", lv_obj_has_state(sw, LV_STATE_CHECKED) ? "ON" : "OFF");


        /* ��ʽ2 */
        //if(lv_obj_get_state(sw) & LV_STATE_CHECKED)
        //    LV_LOG_USER("ON!");
        //else
        //    LV_LOG_USER("OFF!");
        //LV_LOG_USER("State: %s", (lv_obj_get_state(sw) & LV_STATE_CHECKED) ? "ON" : "OFF");
    }

}


void lv_100ask_demo_course_3_4_1(void)
{
    /* ����һ�� switch ����(����) */
    lv_obj_t * sw = lv_switch_create(lv_scr_act());       // ����һ�� switch ����(����),���ĸ������ǻ��Ļ����
    lv_obj_center(sw);                                    // ����1���ö�����У����
    //lv_obj_align(sw, LV_ALIGN_CENTER, 0, 0);            // ����2���ö�����У���Ϊ���

    // �޸Ŀ��ض���Ĵ�С��ע����������� 1:1 (���磺��߶���100)������ֻ�ܿ���һ����Բ
    //lv_obj_set_size(sw, 200, 100);

    // ������
    //lv_obj_add_state(sw, LV_STATE_CHECKED);                       // ����Ĭ�ϴ��ڹر�״̬����������Ϊ��״̬
    //lv_obj_add_state(sw, LV_STATE_CHECKED | LV_STATE_DISABLED);   // ��ǰ״̬�ǿ������Ҳ��ɸ���

    // �ز���
    //lv_obj_clear_state(sw, LV_STATE_CHECKED);	        // ��
    //lv_obj_add_state(sw, LV_STATE_DISABLED); 		        // ��ǰ״̬�ǹأ����Ҳ��ɸ���

    // �������״̬��һ������������(�ⲿ)���
    //lv_obj_clear_state(sw, LV_STATE_ DISABLED);       // �������״̬����ť������ʹ��

    // ����¼��������ǵ�����أ��ı俪�ص�״̬ʱ���ᴥ�� LV_EVENT_VALUE_CHANGED �¼�����
    // ��Ȼ���ǿ��Դ����������������¼����ͣ����磺 LV_EVENT_CLICKED
    lv_obj_add_event_cb(sw, sw_event_handler, LV_EVENT_VALUE_CHANGED, NULL);

}


#endif /* LV_USE_100ASK_DEMO_COURSE_3_4_1 */
