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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/Other/dyf/DataExt.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {2U, 0U};
static unsigned int ng4[] = {3U, 0U};
static int ng5[] = {24, 0};
static unsigned int ng6[] = {4U, 0U};
static int ng7[] = {16, 0};



static int sp_res(char *t1, char *t2)
{
    char t13[8];
    char t14[8];
    char t26[8];
    char t30[8];
    char t45[8];
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
    int t12;
    char *t15;
    char *t16;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    char *t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    char *t46;
    char *t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;

LAB0:    t0 = 1;
    xsi_set_current_line(17, ng0);
    t3 = (t1 + 2840);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB7;

LAB8:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB9;

LAB10:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB11;

LAB12:
LAB14:
LAB13:    xsi_set_current_line(43, ng0);
    t3 = (t1 + 3000);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    t10 = (t1 + 2520);
    xsi_vlogvar_assign_value(t10, t6, 0, 0, 32);

LAB15:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(18, ng0);
    t8 = (t1 + 3000);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t1 + 2520);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 32);
    goto LAB15;

LAB5:    xsi_set_current_line(19, ng0);

LAB16:    xsi_set_current_line(20, ng0);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);

LAB17:    t9 = ((char*)((ng1)));
    t12 = xsi_vlog_unsigned_case_compare(t8, 2, t9, 2);
    if (t12 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB15;

LAB7:    xsi_set_current_line(27, ng0);

LAB27:    xsi_set_current_line(28, ng0);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);

LAB28:    t10 = ((char*)((ng1)));
    t12 = xsi_vlog_unsigned_case_compare(t9, 2, t10, 2);
    if (t12 == 1)
        goto LAB29;

LAB30:    t3 = ((char*)((ng2)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 2, t3, 2);
    if (t7 == 1)
        goto LAB31;

LAB32:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 2, t3, 2);
    if (t7 == 1)
        goto LAB33;

LAB34:    t3 = ((char*)((ng4)));
    t7 = xsi_vlog_unsigned_case_compare(t9, 2, t3, 2);
    if (t7 == 1)
        goto LAB35;

LAB36:
LAB37:    goto LAB15;

LAB9:    xsi_set_current_line(35, ng0);

LAB38:    xsi_set_current_line(36, ng0);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t11) = t23;
    t16 = (t13 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(37, ng0);
    t3 = (t1 + 3000);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t11 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 0);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 65535U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 16, t14, 16);
    t16 = (t1 + 2520);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 32);

LAB41:    goto LAB15;

LAB11:    xsi_set_current_line(39, ng0);

LAB42:    xsi_set_current_line(40, ng0);
    t4 = (t1 + 2680);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t13, 0, 8);
    t11 = (t13 + 4);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 1);
    t20 = (t19 & 1);
    *((unsigned int *)t13) = t20;
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 1);
    t23 = (t22 & 1);
    *((unsigned int *)t11) = t23;
    t16 = (t13 + 4);
    t33 = *((unsigned int *)t16);
    t34 = (~(t33));
    t35 = *((unsigned int *)t13);
    t36 = (t35 & t34);
    t37 = (t36 != 0);
    if (t37 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(41, ng0);
    t3 = (t1 + 3000);
    t4 = (t3 + 56U);
    t6 = *((char **)t4);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t11 = (t6 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 0);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 65535U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 65535U);
    t15 = ((char*)((ng7)));
    t16 = (t1 + 3000);
    t17 = (t16 + 56U);
    t24 = *((char **)t17);
    memset(t30, 0, 8);
    t25 = (t30 + 4);
    t27 = (t24 + 4);
    t33 = *((unsigned int *)t24);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t27);
    t37 = (t36 >> 15);
    t38 = (t37 & 1);
    *((unsigned int *)t25) = t38;
    xsi_vlog_mul_concat(t26, 16, 1, t15, 1U, t30, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t26, 16, t14, 16);
    t28 = (t1 + 2520);
    xsi_vlogvar_assign_value(t28, t13, 0, 0, 32);

LAB45:    goto LAB15;

LAB18:    xsi_set_current_line(21, ng0);
    t10 = (t1 + 3000);
    t11 = (t10 + 56U);
    t15 = *((char **)t11);
    memset(t14, 0, 8);
    t16 = (t14 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t17);
    t21 = (t20 >> 0);
    *((unsigned int *)t16) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t16);
    *((unsigned int *)t16) = (t23 & 255U);
    t24 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t24, 24, t14, 8);
    t25 = (t1 + 2520);
    xsi_vlogvar_assign_value(t25, t13, 0, 0, 32);
    goto LAB26;

LAB20:    xsi_set_current_line(22, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t11 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 8);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 8);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 255U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 24, t14, 8);
    t16 = (t1 + 2520);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 32);
    goto LAB26;

LAB22:    xsi_set_current_line(23, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t11 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 16);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 255U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 24, t14, 8);
    t16 = (t1 + 2520);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 32);
    goto LAB26;

LAB24:    xsi_set_current_line(24, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t9 = *((char **)t6);
    memset(t14, 0, 8);
    t10 = (t14 + 4);
    t11 = (t9 + 4);
    t18 = *((unsigned int *)t9);
    t19 = (t18 >> 24);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t11);
    t21 = (t20 >> 24);
    *((unsigned int *)t10) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t23 & 255U);
    t15 = ((char*)((ng1)));
    xsi_vlogtype_concat(t13, 32, 32, 2U, t15, 24, t14, 8);
    t16 = (t1 + 2520);
    xsi_vlogvar_assign_value(t16, t13, 0, 0, 32);
    goto LAB26;

LAB29:    xsi_set_current_line(29, ng0);
    t11 = (t1 + 3000);
    t15 = (t11 + 56U);
    t16 = *((char **)t15);
    memset(t14, 0, 8);
    t17 = (t14 + 4);
    t24 = (t16 + 4);
    t18 = *((unsigned int *)t16);
    t19 = (t18 >> 0);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t24);
    t21 = (t20 >> 0);
    *((unsigned int *)t17) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t23 & 255U);
    t25 = ((char*)((ng5)));
    t27 = (t1 + 3000);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t30, 0, 8);
    t31 = (t30 + 4);
    t32 = (t29 + 4);
    t33 = *((unsigned int *)t29);
    t34 = (t33 >> 7);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t32);
    t37 = (t36 >> 7);
    t38 = (t37 & 1);
    *((unsigned int *)t31) = t38;
    xsi_vlog_mul_concat(t26, 24, 1, t25, 1U, t30, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t26, 24, t14, 8);
    t39 = (t1 + 2520);
    xsi_vlogvar_assign_value(t39, t13, 0, 0, 32);
    goto LAB37;

LAB31:    xsi_set_current_line(30, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 8);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 8);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 255U);
    t16 = ((char*)((ng5)));
    t17 = (t1 + 3000);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    memset(t30, 0, 8);
    t27 = (t30 + 4);
    t28 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (t33 >> 15);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t28);
    t37 = (t36 >> 15);
    t38 = (t37 & 1);
    *((unsigned int *)t27) = t38;
    xsi_vlog_mul_concat(t26, 24, 1, t16, 1U, t30, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t26, 24, t14, 8);
    t29 = (t1 + 2520);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 32);
    goto LAB37;

LAB33:    xsi_set_current_line(31, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 16);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 16);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 255U);
    t16 = ((char*)((ng5)));
    t17 = (t1 + 3000);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    memset(t30, 0, 8);
    t27 = (t30 + 4);
    t28 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (t33 >> 23);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t28);
    t37 = (t36 >> 23);
    t38 = (t37 & 1);
    *((unsigned int *)t27) = t38;
    xsi_vlog_mul_concat(t26, 24, 1, t16, 1U, t30, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t26, 24, t14, 8);
    t29 = (t1 + 2520);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 32);
    goto LAB37;

LAB35:    xsi_set_current_line(32, ng0);
    t4 = (t1 + 3000);
    t6 = (t4 + 56U);
    t10 = *((char **)t6);
    memset(t14, 0, 8);
    t11 = (t14 + 4);
    t15 = (t10 + 4);
    t18 = *((unsigned int *)t10);
    t19 = (t18 >> 24);
    *((unsigned int *)t14) = t19;
    t20 = *((unsigned int *)t15);
    t21 = (t20 >> 24);
    *((unsigned int *)t11) = t21;
    t22 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t22 & 255U);
    t23 = *((unsigned int *)t11);
    *((unsigned int *)t11) = (t23 & 255U);
    t16 = ((char*)((ng5)));
    t17 = (t1 + 3000);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    memset(t30, 0, 8);
    t27 = (t30 + 4);
    t28 = (t25 + 4);
    t33 = *((unsigned int *)t25);
    t34 = (t33 >> 31);
    t35 = (t34 & 1);
    *((unsigned int *)t30) = t35;
    t36 = *((unsigned int *)t28);
    t37 = (t36 >> 31);
    t38 = (t37 & 1);
    *((unsigned int *)t27) = t38;
    xsi_vlog_mul_concat(t26, 24, 1, t16, 1U, t30, 1);
    xsi_vlogtype_concat(t13, 32, 32, 2U, t26, 24, t14, 8);
    t29 = (t1 + 2520);
    xsi_vlogvar_assign_value(t29, t13, 0, 0, 32);
    goto LAB37;

LAB39:    xsi_set_current_line(36, ng0);
    t17 = (t1 + 3000);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t38 = *((unsigned int *)t25);
    t40 = (t38 >> 16);
    *((unsigned int *)t26) = t40;
    t41 = *((unsigned int *)t28);
    t42 = (t41 >> 16);
    *((unsigned int *)t27) = t42;
    t43 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t43 & 65535U);
    t44 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t44 & 65535U);
    t29 = ((char*)((ng1)));
    xsi_vlogtype_concat(t14, 32, 32, 2U, t29, 16, t26, 16);
    t31 = (t1 + 2520);
    xsi_vlogvar_assign_value(t31, t14, 0, 0, 32);
    goto LAB41;

LAB43:    xsi_set_current_line(40, ng0);
    t17 = (t1 + 3000);
    t24 = (t17 + 56U);
    t25 = *((char **)t24);
    memset(t26, 0, 8);
    t27 = (t26 + 4);
    t28 = (t25 + 4);
    t38 = *((unsigned int *)t25);
    t40 = (t38 >> 16);
    *((unsigned int *)t26) = t40;
    t41 = *((unsigned int *)t28);
    t42 = (t41 >> 16);
    *((unsigned int *)t27) = t42;
    t43 = *((unsigned int *)t26);
    *((unsigned int *)t26) = (t43 & 65535U);
    t44 = *((unsigned int *)t27);
    *((unsigned int *)t27) = (t44 & 65535U);
    t29 = ((char*)((ng7)));
    t31 = (t1 + 3000);
    t32 = (t31 + 56U);
    t39 = *((char **)t32);
    memset(t45, 0, 8);
    t46 = (t45 + 4);
    t47 = (t39 + 4);
    t48 = *((unsigned int *)t39);
    t49 = (t48 >> 31);
    t50 = (t49 & 1);
    *((unsigned int *)t45) = t50;
    t51 = *((unsigned int *)t47);
    t52 = (t51 >> 31);
    t53 = (t52 & 1);
    *((unsigned int *)t46) = t53;
    xsi_vlog_mul_concat(t30, 16, 1, t29, 1U, t45, 1);
    xsi_vlogtype_concat(t14, 32, 32, 2U, t30, 16, t26, 16);
    t54 = (t1 + 2520);
    xsi_vlogvar_assign_value(t54, t14, 0, 0, 32);
    goto LAB45;

}

static void Cont_11_0(char *t0)
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

LAB0:    t1 = (t0 + 3920U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(11, ng0);
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
    *((unsigned int *)t3) = (t10 & 3U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 3U);
    t12 = (t0 + 4584);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 3U;
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
    xsi_driver_vfirst_trans(t12, 0, 1);
    t25 = (t0 + 4488);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_47_1(char *t0)
{
    char t23[8];
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
    int t19;
    char *t20;
    char *t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    t1 = (t0 + 4168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2120U);
    t3 = *((char **)t2);
    t2 = (t0 + 1640U);
    t4 = *((char **)t2);
    t2 = (t0 + 1800U);
    t5 = *((char **)t2);
    t2 = (t0 + 3976);
    t6 = (t0 + 848);
    t7 = xsi_create_subprogram_invocation(t2, 0, t0, t6, 0, 0);
    t8 = (t0 + 2680);
    xsi_vlogvar_assign_value(t8, t3, 0, 0, 2);
    t9 = (t0 + 2840);
    xsi_vlogvar_assign_value(t9, t4, 0, 0, 3);
    t10 = (t0 + 3000);
    xsi_vlogvar_assign_value(t10, t5, 0, 0, 32);

LAB4:    t11 = (t0 + 4072);
    t12 = *((char **)t11);
    t13 = (t12 + 80U);
    t14 = *((char **)t13);
    t15 = (t14 + 272U);
    t16 = *((char **)t15);
    t17 = (t16 + 0U);
    t18 = *((char **)t17);
    t19 = ((int  (*)(char *, char *))t18)(t0, t12);
    if (t19 != 0)
        goto LAB6;

LAB5:    t12 = (t0 + 4072);
    t20 = *((char **)t12);
    t12 = (t0 + 2520);
    t21 = (t12 + 56U);
    t22 = *((char **)t21);
    memcpy(t23, t22, 8);
    t24 = (t0 + 848);
    t25 = (t0 + 3976);
    t26 = 0;
    xsi_delete_subprogram_invocation(t24, t20, t0, t25, t26);
    t27 = (t0 + 4648);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    t30 = (t29 + 56U);
    t31 = *((char **)t30);
    memcpy(t31, t23, 8);
    xsi_driver_vfirst_trans(t27, 0, 31);
    t32 = (t0 + 4504);
    *((int *)t32) = 1;

LAB1:    return;
LAB6:    t11 = (t0 + 4168U);
    *((char **)t11) = &&LAB4;
    goto LAB1;

}


extern void work_m_00000000001554683165_1370908904_init()
{
	static char *pe[] = {(void *)Cont_11_0,(void *)Cont_47_1};
	static char *se[] = {(void *)sp_res};
	xsi_register_didat("work_m_00000000001554683165_1370908904", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000001554683165_1370908904.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
