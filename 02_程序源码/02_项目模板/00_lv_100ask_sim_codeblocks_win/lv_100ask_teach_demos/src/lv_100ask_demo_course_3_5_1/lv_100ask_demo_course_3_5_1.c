/**
 ******************************************************************************
 * @file    lv_100ask_demo_course_3_5_1.c
 * @author  ���ʿƼ�
 * @version V1.0
 * @date    2022-02-18
 * @brief	3_5_1 �εĿ��ô���
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

#if 1 // LV_USE_100ASK_DEMO_COURSE_3_5_1

//#include <stdio.h>
#include "lv_100ask_demo_course_3_5_1.h"


/*********************
 *      DEFINES
 *********************/


/**********************
 *  STATIC VARIABLES
 **********************/
static void cb_event_handler(lv_event_t * e)
{
    lv_event_code_t code = lv_event_get_code(e);
    lv_obj_t *cb = lv_event_get_target(e);

    if (code == LV_EVENT_VALUE_CHANGED)
    {
        const char * txt = lv_checkbox_get_text(cb);

        // �жϿ���״̬
        /* ��ʽ1 */
        // ���� bool ���ͣ� ��-1 �� ��-2
        //if(lv_obj_has_state(cb, LV_STATE_CHECKED))
        //    LV_LOG_USER("%s: CHECKED!", txt);
        //else
        //    LV_LOG_USER("%s: UNCHECKED!", txt);

        // ������д��
        LV_LOG_USER("%s: %s", txt, lv_obj_has_state(cb, LV_STATE_CHECKED) ? "CHECKED" : "UNCHECKED");


        /* ��ʽ2 */
        //if(lv_obj_get_state(cb) & LV_STATE_CHECKED)
        //    LV_LOG_USER("%s: CHECKED!", txt);
        //else
        //    LV_LOG_USER("%s: UNCHECKED!", txt);
        //LV_LOG_USER("%s: %s", txt, (lv_obj_get_state(cb) & LV_STATE_CHECKED) ? "CHECKED" : "UNCHECKED");
    }

}

void lv_100ask_demo_course_3_5_1(void)
{
    /* ����һ�� checkbox ����(����) */
    lv_obj_t * cb = lv_checkbox_create(lv_scr_act());     // ����һ�� switch ����(����),���ĸ������ǻ��Ļ����
    lv_checkbox_set_text(cb, "100ASK LVGL Tutorial" LV_SYMBOL_PLAY);  // �޸ĸ�ѡ�����ʾ����(����)

    lv_obj_center(cb);                                    // ����1���ö�����У����
    //lv_obj_align(cb, LV_ALIGN_CENTER, 0, 0);            // ����2���ö�����У���Ϊ���

    //lv_obj_set_style_text_font(cb, &lv_font_montserrat_32, 0); // �޸ĸ�ѡ����ʾ���ֵ�����
    //lv_obj_set_style_pad_all(cb, 20, LV_PART_INDICATOR);       // �޸ĸ�ѡ��ѡ��Ĵ�С
    //lv_obj_set_style_pad_column(cb, 100, 0);                   // ���ø�ѡ��Ĺ�ѡ�����ʾ���ֵľ���

    //lv_obj_set_style_bg_opa(cb, 100, LV_PART_MAIN);                         // �޸ĸ�ѡ��ı���͸����
    //lv_obj_set_style_bg_color(cb, lv_color_hex(0xc43e1c), LV_PART_MAIN);    // �޸ĸ�ѡ��ı�����ɫ

    //lv_obj_set_style_bg_color(cb, lv_color_hex(0xc43e1c), LV_PART_INDICATOR);   // �޸Ĺ�ѡ�򲿷֣���ѡʱ�ı�����ɫ
    //lv_obj_set_style_bg_color(cb, lv_color_hex(0x7719aa), LV_PART_INDICATOR | LV_STATE_CHECKED); // �޸Ĺ�ѡ�򲿷֣�����ѡʱ�ı�����ɫ


    // ��ѡ����
    //lv_obj_add_state(cb, LV_STATE_CHECKED);                       // ��ѡ��Ĭ�ϴ��ڲ���ѡ״̬����������Ϊ��ѡ״̬״̬
    //lv_obj_add_state(cb, LV_STATE_CHECKED | LV_STATE_DISABLED);   // ��ǰ״̬�ǹ�ѡ״̬�����Ҳ��ɸ���

    // ����ѡ����
    //lv_obj_clear_state(cb, LV_STATE_CHECKED);	        // ����ѡ
    //lv_obj_add_state(cb, LV_STATE_DISABLED); 		    // ��ǰ״̬�ǲ���ѡ״̬�����Ҳ��ɸ���

    // �������״̬��һ������������(�ⲿ)���
    //lv_obj_clear_state(cb, LV_STATE_DISABLED);       // �������״̬����ѡ�������ʹ��

    // ����¼��������ǵ����ѡ�򣬸ı乴ѡ���״̬ʱ���ᴥ�� LV_EVENT_VALUE_CHANGED �¼�����
    // ��Ȼ���ǿ��Դ����������������¼����ͣ����磺 LV_EVENT_CLICKED
    lv_obj_add_event_cb(cb, cb_event_handler, LV_EVENT_VALUE_CHANGED, NULL);
}


#endif /* LV_USE_100ASK_DEMO_COURSE_3_5_1 */
