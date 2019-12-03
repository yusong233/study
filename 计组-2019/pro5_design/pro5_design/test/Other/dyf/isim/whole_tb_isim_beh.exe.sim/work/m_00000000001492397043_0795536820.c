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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/Other/dyf/mux.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {4, 0};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {2, 0};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {3U, 0U};



static int sp_result(char *t1, char *t2)
{
    char t12[8];
    char t14[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;

LAB0:    t0 = 1;
    xsi_set_current_line(86, ng0);
    t3 = (t1 + 3160);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t6, 2);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 2, t3, 2);
    if (t7 == 1)
        goto LAB9;

LAB10:
LAB11:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(87, ng0);
    t8 = (t1 + 3320);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = ((char*)((ng2)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_add(t12, 32, t10, 32, t11, 32);
    t13 = (t1 + 3000);
    xsi_vlogvar_assign_value(t13, t12, 0, 0, 32);
    goto LAB11;

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t1 + 3320);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t13 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 32, t11, 32, t13, 32);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t8, 32, t12, 32);
    t15 = (t1 + 3000);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB11;

LAB7:    xsi_set_current_line(89, ng0);
    t4 = (t1 + 3640);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 32);
    goto LAB11;

LAB9:    xsi_set_current_line(90, ng0);

LAB12:    xsi_set_current_line(90, ng0);
    t4 = (t1 + 3800);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = ((char*)((ng4)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_lshift(t12, 28, t8, 26, t9, 32);
    t10 = (t1 + 2680);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 28);
    xsi_set_current_line(92, ng0);
    t3 = (t1 + 2680);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t8 = (t1 + 3320);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t13 = (t10 + 4);
    t16 = *((unsigned int *)t10);
    t17 = (t16 >> 28);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t13);
    t19 = (t18 >> 28);
    *((unsigned int *)t11) = t19;
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t20 & 15U);
    t21 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t21 & 15U);
    xsi_vlogtype_concat(t12, 32, 32, 2U, t14, 4, t6, 28);
    t15 = (t1 + 3000);
    xsi_vlogvar_assign_value(t15, t12, 0, 0, 32);
    goto LAB11;

}

static void Cont_97_0(char *t0)
{
    char t27[8];
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
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 4720U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 2120U);
    t7 = *((char **)t2);
    t2 = (t0 + 4528);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    t10 = (t0 + 3160);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 2);
    t11 = (t0 + 3320);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 3480);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 32);
    t13 = (t0 + 3640);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 32);
    t14 = (t0 + 3800);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 26);

LAB4:    t15 = (t0 + 4624);
    t16 = *((char **)t15);
    t17 = (t16 + 80U);
    t18 = *((char **)t17);
    t19 = (t18 + 272U);
    t20 = *((char **)t19);
    t21 = (t20 + 0U);
    t22 = *((char **)t21);
    t23 = ((int  (*)(char *, char *))t22)(t0, t16);
    if (t23 != 0)
        goto LAB6;

LAB5:    t16 = (t0 + 4624);
    t24 = *((char **)t16);
    t16 = (t0 + 3000);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t0 + 848);
    t29 = (t0 + 4528);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 5120);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t27, 8);
    xsi_driver_vfirst_trans(t31, 0, 31);
    t36 = (t0 + 5040);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t15 = (t0 + 4720U);
    *((char **)t15) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000001492397043_0795536820_init()
{
	static char *pe[] = {(void *)Cont_97_0};
	static char *se[] = {(void *)sp_result};
	xsi_register_didat("work_m_00000000001492397043_0795536820", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000001492397043_0795536820.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
