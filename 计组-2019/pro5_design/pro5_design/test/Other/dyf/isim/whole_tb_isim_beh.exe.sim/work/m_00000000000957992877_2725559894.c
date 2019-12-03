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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/Other/dyf/alu.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {4U, 0U};
static int ng6[] = {1, 0};
static int ng7[] = {0, 0};
static unsigned int ng8[] = {5U, 0U};
static unsigned int ng9[] = {6U, 0U};
static unsigned int ng10[] = {7U, 0U};
static unsigned int ng11[] = {10U, 0U};
static unsigned int ng12[] = {11U, 0U};
static unsigned int ng13[] = {12U, 0U};
static unsigned int ng14[] = {13U, 0U};



static int sp_result(char *t1, char *t2)
{
    char t14[8];
    char t45[8];
    char t46[8];
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
    char *t12;
    char *t13;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;

LAB0:    t0 = 1;
    xsi_set_current_line(22, ng0);
    t3 = (t1 + 3320);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t6, 4);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB11;

LAB12:    t3 = ((char*)((ng8)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB13;

LAB14:    t3 = ((char*)((ng9)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB15;

LAB16:    t3 = ((char*)((ng10)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB17;

LAB18:    t3 = ((char*)((ng11)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB19;

LAB20:    t3 = ((char*)((ng12)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB21;

LAB22:    t3 = ((char*)((ng13)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB23;

LAB24:    t3 = ((char*)((ng14)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 4, t3, 4);
    if (t7 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(41, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t1 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB29:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(23, ng0);
    t8 = (t1 + 2840);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 3000);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_add(t14, 32, t10, 32, t13, 32);
    t15 = (t1 + 2680);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB29;

LAB5:    xsi_set_current_line(24, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_minus(t14, 32, t8, 32, t11, 32);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB29;

LAB7:    xsi_set_current_line(25, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t18 = (t16 | t17);
    *((unsigned int *)t14) = t18;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB30;

LAB31:
LAB32:    t40 = (t1 + 2680);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 32);
    goto LAB29;

LAB9:    xsi_set_current_line(26, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t11);
    t18 = (t16 & t17);
    *((unsigned int *)t14) = t18;
    t12 = (t8 + 4);
    t13 = (t11 + 4);
    t15 = (t14 + 4);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t13);
    t21 = (t19 | t20);
    *((unsigned int *)t15) = t21;
    t22 = *((unsigned int *)t15);
    t23 = (t22 != 0);
    if (t23 == 1)
        goto LAB33;

LAB34:
LAB35:    t40 = (t1 + 2680);
    xsi_vlogvar_assign_value(t40, t14, 0, 0, 32);
    goto LAB29;

LAB11:    xsi_set_current_line(27, ng0);

LAB36:    xsi_set_current_line(28, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t46, 0, 8);
    xsi_vlog_signed_less(t46, 32, t8, 32, t11, 32);
    t12 = (t46 + 4);
    t16 = *((unsigned int *)t12);
    t17 = (~(t16));
    t18 = *((unsigned int *)t46);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB37;

LAB38:    xsi_set_current_line(29, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t1 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB39:    goto LAB29;

LAB13:    xsi_set_current_line(31, ng0);

LAB40:    xsi_set_current_line(32, ng0);
    t4 = (t1 + 2840);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3000);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    t12 = (t8 + 4);
    if (*((unsigned int *)t12) != 0)
        goto LAB42;

LAB41:    t13 = (t11 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB42;

LAB45:    if (*((unsigned int *)t8) < *((unsigned int *)t11))
        goto LAB43;

LAB44:    t26 = (t14 + 4);
    t16 = *((unsigned int *)t26);
    t17 = (~(t16));
    t18 = *((unsigned int *)t14);
    t19 = (t18 & t17);
    t20 = (t19 != 0);
    if (t20 > 0)
        goto LAB46;

LAB47:    xsi_set_current_line(33, ng0);
    t3 = ((char*)((ng7)));
    t4 = (t1 + 2680);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB48:    goto LAB29;

LAB15:    xsi_set_current_line(35, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB29;

LAB17:    xsi_set_current_line(36, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB29;

LAB19:    xsi_set_current_line(37, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3160);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t45, 0, 8);
    xsi_vlog_signed_arith_rshift(t45, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t45, 0, 0, 32);
    goto LAB29;

LAB21:    xsi_set_current_line(38, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t45, 0, 8);
    xsi_vlog_signed_arith_rshift(t45, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t45, 0, 0, 32);
    goto LAB29;

LAB23:    xsi_set_current_line(39, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_lshift(t14, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB29;

LAB25:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    t9 = (t1 + 3480);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memset(t14, 0, 8);
    xsi_vlog_unsigned_rshift(t14, 32, t8, 32, t11, 5);
    t12 = (t1 + 2680);
    xsi_vlogvar_assign_value(t12, t14, 0, 0, 32);
    goto LAB29;

LAB30:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t26);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = *((unsigned int *)t27);
    t33 = (~(t32));
    t34 = *((unsigned int *)t11);
    t35 = (t34 & t33);
    t36 = (~(t31));
    t37 = (~(t35));
    t38 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t38 & t36);
    t39 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t39 & t37);
    goto LAB32;

LAB33:    t24 = *((unsigned int *)t14);
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t24 | t25);
    t26 = (t8 + 4);
    t27 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t26);
    t32 = (~(t30));
    t33 = *((unsigned int *)t11);
    t34 = (~(t33));
    t36 = *((unsigned int *)t27);
    t37 = (~(t36));
    t31 = (t29 & t32);
    t35 = (t34 & t37);
    t38 = (~(t31));
    t39 = (~(t35));
    t41 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t41 & t38);
    t42 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t42 & t39);
    t43 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t43 & t38);
    t44 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t44 & t39);
    goto LAB35;

LAB37:    xsi_set_current_line(28, ng0);
    t13 = ((char*)((ng6)));
    t15 = (t1 + 2680);
    xsi_vlogvar_assign_value(t15, t13, 0, 0, 32);
    goto LAB39;

LAB42:    t15 = (t14 + 4);
    *((unsigned int *)t14) = 1;
    *((unsigned int *)t15) = 1;
    goto LAB44;

LAB43:    *((unsigned int *)t14) = 1;
    goto LAB44;

LAB46:    xsi_set_current_line(32, ng0);
    t27 = ((char*)((ng6)));
    t40 = (t1 + 2680);
    xsi_vlogvar_assign_value(t40, t27, 0, 0, 32);
    goto LAB48;

}

static void Cont_13_0(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;

LAB0:    t1 = (t0 + 4400U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1480U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 0);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 31U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 31U);
    t12 = (t0 + 5064);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 31U;
    t18 = t17;
    t19 = (t3 + 4);
    t20 = *((unsigned int *)t3);
    t17 = (t17 & t20);
    t21 = *((unsigned int *)t19);
    t18 = (t18 & t21);
    t22 = (t16 + 4);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 | t17);
    t24 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t24 | t18);
    xsi_driver_vfirst_trans(t12, 0, 4);
    t25 = (t0 + 4968);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_45_1(char *t0)
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

LAB0:    t1 = (t0 + 4648U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 1480U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 1960U);
    t6 = *((char **)t2);
    t2 = (t0 + 2280U);
    t7 = *((char **)t2);
    t2 = (t0 + 4456);
    t8 = (t0 + 848);
    t9 = xsi_create_subprogram_invocation(t2, 0, t0, t8, 0, 0);
    t10 = (t0 + 2840);
    xsi_vlogvar_assign_value(t10, t3, 0, 0, 32);
    t11 = (t0 + 3000);
    xsi_vlogvar_assign_value(t11, t4, 0, 0, 32);
    t12 = (t0 + 3160);
    xsi_vlogvar_assign_value(t12, t5, 0, 0, 5);
    t13 = (t0 + 3320);
    xsi_vlogvar_assign_value(t13, t6, 0, 0, 4);
    t14 = (t0 + 3480);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 5);

LAB4:    t15 = (t0 + 4552);
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

LAB5:    t16 = (t0 + 4552);
    t24 = *((char **)t16);
    t16 = (t0 + 2680);
    t25 = (t16 + 56U);
    t26 = *((char **)t25);
    memcpy(t27, t26, 8);
    t28 = (t0 + 848);
    t29 = (t0 + 4456);
    t30 = 0;
    xsi_delete_subprogram_invocation(t28, t24, t0, t29, t30);
    t31 = (t0 + 5128);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    memcpy(t35, t27, 8);
    xsi_driver_vfirst_trans(t31, 0, 31);
    t36 = (t0 + 4984);
    *((int *)t36) = 1;

LAB1:    return;
LAB6:    t15 = (t0 + 4648U);
    *((char **)t15) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000000957992877_2725559894_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Cont_45_1};
	static char *se[] = {(void *)sp_result};
	xsi_register_didat("work_m_00000000000957992877_2725559894", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000000957992877_2725559894.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
