/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/Other/dyf/ext.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {16, 0};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {0, 0};



static int sp_result(char *t1, char *t2)
{
    char t8[8];
    char t14[8];
    char t15[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t0 = 1;
    xsi_set_current_line(13, ng0);
    t3 = (t1 + 2520);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(17, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t1 + 2200);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB11:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(14, ng0);
    t9 = (t1 + 2360);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng1)));
    xsi_vlogtype_concat(t8, 32, 32, 2U, t12, 16, t11, 16);
    t13 = (t1 + 2200);
    xsi_vlogvar_assign_value(t13, t8, 0, 0, 32);
    goto LAB11;

LAB5:    xsi_set_current_line(15, ng0);
    t4 = (t1 + 2360);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    t10 = ((char*)((ng3)));
    t11 = (t1 + 2360);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t15, 0, 8);
    t16 = (t15 + 4);
    t17 = (t13 + 4);
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t15) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t16) = t23;
    xsi_vlog_mul_concat(t14, 16, 1, t10, 1U, t15, 1);
    xsi_vlogtype_concat(t8, 32, 32, 2U, t14, 16, t9, 16);
    t24 = (t1 + 2200);
    xsi_vlogvar_assign_value(t24, t8, 0, 0, 32);
    goto LAB11;

LAB7:    xsi_set_current_line(16, ng0);
    t4 = ((char*)((ng1)));
    t6 = (t1 + 2360);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    xsi_vlogtype_concat(t8, 32, 32, 2U, t10, 16, t4, 16);
    t11 = (t1 + 2200);
    xsi_vlogvar_assign_value(t11, t8, 0, 0, 32);
    goto LAB11;

}

static void Cont_21_0(char *t0)
{
    char t21[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    t1 = (t0 + 3440U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 3248);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 2360);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 16);
    t8 = (t0 + 2520);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);

LAB4:    t9 = (t0 + 3344);
    t10 = *((char **)t9);
    t11 = (t10 + 80U);
    t12 = *((char **)t11);
    t13 = (t12 + 272U);
    t14 = *((char **)t13);
    t15 = (t14 + 0U);
    t16 = *((char **)t15);
    t17 = ((int  (*)(char *, char *))t16)(t0, t10);
    if (t17 != 0)
        goto LAB6;

LAB5:    t10 = (t0 + 3344);
    t18 = *((char **)t10);
    t10 = (t0 + 2200);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 848);
    t23 = (t0 + 3248);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 3840);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t21, 8);
    xsi_driver_vfirst_trans(t25, 0, 31);
    t30 = (t0 + 3760);
    *((int *)t30) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 3440U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000001349521712_1839639961_init()
{
	static char *pe[] = {(void *)Cont_21_0};
	static char *se[] = {(void *)sp_result};
	xsi_register_didat("work_m_00000000001349521712_1839639961", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000001349521712_1839639961.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
