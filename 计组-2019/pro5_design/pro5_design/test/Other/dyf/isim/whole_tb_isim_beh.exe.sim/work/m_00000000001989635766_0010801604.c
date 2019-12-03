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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/Other/dyf/dm.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {15U, 0U};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {12U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};
static unsigned int ng7[] = {4U, 0U};
static unsigned int ng8[] = {8U, 0U};
static int ng9[] = {0, 0};
static int ng10[] = {1024, 0};
static int ng11[] = {1, 0};
static const char *ng12 = "%d@%h: *%h <= %h";
static int ng13[] = {31, 0};
static int ng14[] = {16, 0};
static int ng15[] = {15, 0};
static int ng16[] = {24, 0};
static const char *ng17 = "%d@%h: *%h \t<= %h";
static int ng18[] = {23, 0};
static int ng19[] = {8, 0};
static int ng20[] = {7, 0};



static int sp_func_be(char *t1, char *t2)
{
    char t10[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;
    char *t25;
    int t26;

LAB0:    t0 = 1;
    xsi_set_current_line(31, ng0);
    t3 = (t1 + 4712);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);

LAB2:    t6 = ((char*)((ng1)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t6, 3);
    if (t7 == 1)
        goto LAB3;

LAB4:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB5;

LAB6:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t5, 3, t3, 3);
    if (t7 == 1)
        goto LAB7;

LAB8:
LAB10:
LAB9:    xsi_set_current_line(45, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t1 + 4552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB11:    t0 = 0;

LAB1:    return t0;
LAB3:    xsi_set_current_line(32, ng0);
    t8 = ((char*)((ng2)));
    t9 = (t1 + 4552);
    xsi_vlogvar_assign_value(t9, t8, 0, 0, 4);
    goto LAB11;

LAB5:    xsi_set_current_line(33, ng0);

LAB12:    xsi_set_current_line(34, ng0);
    t4 = (t1 + 4872);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);
    memset(t10, 0, 8);
    t9 = (t10 + 4);
    t11 = (t8 + 4);
    t12 = *((unsigned int *)t8);
    t13 = (t12 >> 1);
    t14 = (t13 & 1);
    *((unsigned int *)t10) = t14;
    t15 = *((unsigned int *)t11);
    t16 = (t15 >> 1);
    t17 = (t16 & 1);
    *((unsigned int *)t9) = t17;
    t18 = (t10 + 4);
    t19 = *((unsigned int *)t18);
    t20 = (~(t19));
    t21 = *((unsigned int *)t10);
    t22 = (t21 & t20);
    t23 = (t22 != 0);
    if (t23 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(35, ng0);
    t3 = ((char*)((ng3)));
    t4 = (t1 + 4552);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);

LAB15:    goto LAB11;

LAB7:    xsi_set_current_line(37, ng0);

LAB16:    xsi_set_current_line(38, ng0);
    t4 = (t1 + 4872);
    t6 = (t4 + 56U);
    t8 = *((char **)t6);

LAB17:    t9 = ((char*)((ng1)));
    t26 = xsi_vlog_unsigned_case_compare(t8, 2, t9, 2);
    if (t26 == 1)
        goto LAB18;

LAB19:    t3 = ((char*)((ng5)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB20;

LAB21:    t3 = ((char*)((ng6)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB22;

LAB23:    t3 = ((char*)((ng3)));
    t7 = xsi_vlog_unsigned_case_compare(t8, 2, t3, 2);
    if (t7 == 1)
        goto LAB24;

LAB25:
LAB26:    goto LAB11;

LAB13:    xsi_set_current_line(34, ng0);
    t24 = ((char*)((ng4)));
    t25 = (t1 + 4552);
    xsi_vlogvar_assign_value(t25, t24, 0, 0, 4);
    goto LAB15;

LAB18:    xsi_set_current_line(39, ng0);
    t11 = ((char*)((ng5)));
    t18 = (t1 + 4552);
    xsi_vlogvar_assign_value(t18, t11, 0, 0, 4);
    goto LAB26;

LAB20:    xsi_set_current_line(40, ng0);
    t4 = ((char*)((ng6)));
    t6 = (t1 + 4552);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB26;

LAB22:    xsi_set_current_line(41, ng0);
    t4 = ((char*)((ng7)));
    t6 = (t1 + 4552);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB26;

LAB24:    xsi_set_current_line(42, ng0);
    t4 = ((char*)((ng8)));
    t6 = (t1 + 4552);
    xsi_vlogvar_assign_value(t6, t4, 0, 0, 4);
    goto LAB26;

}

static int sp_rd_result(char *t1, char *t2)
{
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    t0 = 1;
    xsi_set_current_line(54, ng0);
    t3 = (t1 + 5192);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB2;

LAB3:    xsi_set_current_line(55, ng0);
    t3 = ((char*)((ng9)));
    t4 = (t1 + 5032);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB4:    t0 = 0;

LAB1:    return t0;
LAB2:    xsi_set_current_line(54, ng0);
    t12 = (t1 + 5352);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t1 + 5032);
    xsi_vlogvar_assign_value(t15, t14, 0, 0, 32);
    goto LAB4;

}

static void Cont_23_0(char *t0)
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

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 2392U);
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
    t12 = (t0 + 8240);
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
    t25 = (t0 + 8080);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_24_1(char *t0)
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

LAB0:    t1 = (t0 + 6520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 2392U);
    t4 = *((char **)t2);
    memset(t3, 0, 8);
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 2);
    *((unsigned int *)t3) = t7;
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 2);
    *((unsigned int *)t2) = t9;
    t10 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t10 & 1073741823U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 1073741823U);
    t12 = (t0 + 8304);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 1073741823U;
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
    xsi_driver_vfirst_trans(t12, 0, 29);
    t25 = (t0 + 8096);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_25_2(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    t1 = (t0 + 6768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(25, ng0);
    t2 = ((char*)((ng1)));
    t4 = (t0 + 3672U);
    t5 = *((char **)t4);
    xsi_vlogtype_concat(t3, 32, 32, 2U, t5, 30, t2, 2);
    t4 = (t0 + 8368);
    t6 = (t4 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t3, 8);
    xsi_driver_vfirst_trans(t4, 0, 31);
    t10 = (t0 + 8112);
    *((int *)t10) = 1;

LAB1:    return;
}

static void Cont_48_3(char *t0)
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
    unsigned int t30;
    unsigned int t31;
    char *t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 7016U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 2232U);
    t3 = *((char **)t2);
    t2 = (t0 + 3512U);
    t4 = *((char **)t2);
    t2 = (t0 + 6824);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t2, 0, t0, t5, 0, 0);
    t7 = (t0 + 4712);
    xsi_vlogvar_assign_value(t7, t3, 0, 0, 3);
    t8 = (t0 + 4872);
    xsi_vlogvar_assign_value(t8, t4, 0, 0, 2);

LAB4:    t9 = (t0 + 6920);
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

LAB5:    t10 = (t0 + 6920);
    t18 = *((char **)t10);
    t10 = (t0 + 4552);
    t19 = (t10 + 56U);
    t20 = *((char **)t19);
    memcpy(t21, t20, 8);
    t22 = (t0 + 848);
    t23 = (t0 + 6824);
    t24 = 0;
    xsi_delete_subprogram_invocation(t22, t18, t0, t23, t24);
    t25 = (t0 + 8432);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memset(t29, 0, 8);
    t30 = 15U;
    t31 = t30;
    t32 = (t21 + 4);
    t33 = *((unsigned int *)t21);
    t30 = (t30 & t33);
    t34 = *((unsigned int *)t32);
    t31 = (t31 & t34);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t29);
    *((unsigned int *)t29) = (t36 | t30);
    t37 = *((unsigned int *)t35);
    *((unsigned int *)t35) = (t37 | t31);
    xsi_driver_vfirst_trans(t25, 0, 3);
    t38 = (t0 + 8128);
    *((int *)t38) = 1;

LAB1:    return;
LAB6:    t9 = (t0 + 7016U);
    *((char **)t9) = &&LAB4;
    goto LAB1;

}

static void Cont_57_4(char *t0)
{
    char t6[8];
    char t31[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
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
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;

LAB0:    t1 = (t0 + 7264U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 2712U);
    t3 = *((char **)t2);
    t2 = (t0 + 4232);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 4232);
    t8 = (t7 + 72U);
    t9 = *((char **)t8);
    t10 = (t0 + 4232);
    t11 = (t10 + 64U);
    t12 = *((char **)t11);
    t13 = (t0 + 3672U);
    t14 = *((char **)t13);
    xsi_vlog_generic_get_array_select_value(t6, 32, t5, t9, t12, 2, 1, t14, 30, 2);
    t13 = (t0 + 7072);
    t15 = (t0 + 1280);
    t16 = xsi_create_subprogram_invocation(t13, 0, t0, t15, 0, 0);
    t17 = (t0 + 5192);
    xsi_vlogvar_assign_value(t17, t3, 0, 0, 1);
    t18 = (t0 + 5352);
    xsi_vlogvar_assign_value(t18, t6, 0, 0, 32);

LAB4:    t19 = (t0 + 7168);
    t20 = *((char **)t19);
    t21 = (t20 + 80U);
    t22 = *((char **)t21);
    t23 = (t22 + 272U);
    t24 = *((char **)t23);
    t25 = (t24 + 0U);
    t26 = *((char **)t25);
    t27 = ((int  (*)(char *, char *))t26)(t0, t20);
    if (t27 != 0)
        goto LAB6;

LAB5:    t20 = (t0 + 7168);
    t28 = *((char **)t20);
    t20 = (t0 + 5032);
    t29 = (t20 + 56U);
    t30 = *((char **)t29);
    memcpy(t31, t30, 8);
    t32 = (t0 + 1280);
    t33 = (t0 + 7072);
    t34 = 0;
    xsi_delete_subprogram_invocation(t32, t28, t0, t33, t34);
    t35 = (t0 + 8496);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    memcpy(t39, t31, 8);
    xsi_driver_vfirst_trans(t35, 0, 31);
    t40 = (t0 + 8144);
    *((int *)t40) = 1;

LAB1:    return;
LAB6:    t19 = (t0 + 7264U);
    *((char **)t19) = &&LAB4;
    goto LAB1;

}

static void Initial_61_5(char *t0)
{
    char t5[8];
    char t14[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t26;
    int t27;
    char *t28;
    unsigned int t29;
    int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    xsi_set_current_line(61, ng0);

LAB2:    xsi_set_current_line(62, ng0);
    xsi_set_current_line(62, ng0);
    t1 = ((char*)((ng9)));
    t2 = (t0 + 4392);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB3:    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng10)));
    memset(t5, 0, 8);
    xsi_vlog_signed_less(t5, 32, t3, 32, t4, 32);
    t6 = (t5 + 4);
    t7 = *((unsigned int *)t6);
    t8 = (~(t7));
    t9 = *((unsigned int *)t5);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB4;

LAB5:
LAB1:    return;
LAB4:    xsi_set_current_line(62, ng0);

LAB6:    xsi_set_current_line(63, ng0);
    t12 = ((char*)((ng9)));
    t13 = (t0 + 4232);
    t16 = (t0 + 4232);
    t17 = (t16 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 4392);
    t23 = (t22 + 56U);
    t24 = *((char **)t23);
    xsi_vlog_generic_convert_array_indices(t14, t15, t18, t21, 2, 1, t24, 32, 1);
    t25 = (t14 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (!(t26));
    t28 = (t15 + 4);
    t29 = *((unsigned int *)t28);
    t30 = (!(t29));
    t31 = (t27 && t30);
    if (t31 == 1)
        goto LAB7;

LAB8:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4392);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng11)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t3, 32, t4, 32);
    t6 = (t0 + 4392);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 32);
    goto LAB3;

LAB7:    t32 = *((unsigned int *)t14);
    t33 = *((unsigned int *)t15);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_wait_assign_value(t13, t12, 0, *((unsigned int *)t15), t35, 0LL);
    goto LAB8;

}

static void Always_67_6(char *t0)
{
    char t13[8];
    char t15[8];
    char t16[8];
    char t38[16];
    char t39[8];
    char t40[8];
    char t41[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t14;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    unsigned int t27;
    int t28;
    char *t29;
    unsigned int t30;
    int t31;
    int t32;
    unsigned int t33;
    unsigned int t34;
    int t35;
    int t36;
    int t37;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    int t47;
    int t48;
    char *t49;
    unsigned int t50;
    int t51;
    int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    int t61;

LAB0:    t1 = (t0 + 7760U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 8160);
    *((int *)t2) = 1;
    t3 = (t0 + 7792);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(67, ng0);

LAB5:    xsi_set_current_line(68, ng0);
    t4 = (t0 + 2072U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(73, ng0);

LAB16:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2872U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t6 = *((unsigned int *)t2);
    t7 = (~(t6));
    t8 = *((unsigned int *)t3);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB17;

LAB18:
LAB19:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(68, ng0);

LAB9:    xsi_set_current_line(69, ng0);
    xsi_set_current_line(69, ng0);
    t11 = ((char*)((ng9)));
    t12 = (t0 + 4392);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 32);

LAB10:    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng10)));
    memset(t13, 0, 8);
    xsi_vlog_signed_less(t13, 32, t4, 32, t5, 32);
    t11 = (t13 + 4);
    t6 = *((unsigned int *)t11);
    t7 = (~(t6));
    t8 = *((unsigned int *)t13);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB11;

LAB12:    goto LAB8;

LAB11:    xsi_set_current_line(69, ng0);

LAB13:    xsi_set_current_line(70, ng0);
    t12 = ((char*)((ng9)));
    t14 = (t0 + 4232);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 4392);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    xsi_vlog_generic_convert_array_indices(t15, t16, t19, t22, 2, 1, t25, 32, 1);
    t26 = (t15 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t16 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (!(t30));
    t32 = (t28 && t31);
    if (t32 == 1)
        goto LAB14;

LAB15:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 4392);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng11)));
    memset(t13, 0, 8);
    xsi_vlog_signed_add(t13, 32, t4, 32, t5, 32);
    t11 = (t0 + 4392);
    xsi_vlogvar_assign_value(t11, t13, 0, 0, 32);
    goto LAB10;

LAB14:    t33 = *((unsigned int *)t15);
    t34 = *((unsigned int *)t16);
    t35 = (t33 - t34);
    t36 = (t35 + 1);
    xsi_vlogvar_wait_assign_value(t14, t12, 0, *((unsigned int *)t16), t36, 0LL);
    goto LAB15;

LAB17:    xsi_set_current_line(74, ng0);

LAB20:    xsi_set_current_line(75, ng0);
    t4 = (t0 + 3352U);
    t5 = *((char **)t4);

LAB21:    t4 = ((char*)((ng2)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t4, 4);
    if (t28 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng4)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng3)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng8)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng7)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng6)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng5)));
    t28 = xsi_vlog_unsigned_case_compare(t5, 4, t2, 4);
    if (t28 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:
LAB38:    goto LAB19;

LAB22:    xsi_set_current_line(76, ng0);

LAB39:    xsi_set_current_line(77, ng0);
    t11 = (t0 + 2552U);
    t12 = *((char **)t11);
    t11 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t13, t15, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t13 + 4);
    t27 = *((unsigned int *)t22);
    t31 = (!(t27));
    t24 = (t15 + 4);
    t30 = *((unsigned int *)t24);
    t32 = (!(t30));
    t35 = (t31 && t32);
    if (t35 == 1)
        goto LAB40;

LAB41:    xsi_set_current_line(78, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 2552U);
    t12 = *((char **)t3);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t12, 32);
    goto LAB38;

LAB24:    xsi_set_current_line(80, ng0);

LAB42:    xsi_set_current_line(81, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng13)));
    t29 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB43;

LAB44:    xsi_set_current_line(82, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB26:    xsi_set_current_line(84, ng0);

LAB45:    xsi_set_current_line(85, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 65535U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 65535U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng15)));
    t29 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB46;

LAB47:    xsi_set_current_line(86, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB28:    xsi_set_current_line(88, ng0);

LAB48:    xsi_set_current_line(89, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng13)));
    t29 = ((char*)((ng16)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB49;

LAB50:    xsi_set_current_line(90, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng17, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB30:    xsi_set_current_line(92, ng0);

LAB51:    xsi_set_current_line(93, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng18)));
    t29 = ((char*)((ng14)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB52;

LAB53:    xsi_set_current_line(94, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB32:    xsi_set_current_line(96, ng0);

LAB54:    xsi_set_current_line(97, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng15)));
    t29 = ((char*)((ng19)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB55;

LAB56:    xsi_set_current_line(98, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB34:    xsi_set_current_line(100, ng0);

LAB57:    xsi_set_current_line(101, ng0);
    t3 = (t0 + 2552U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t3 = (t13 + 4);
    t11 = (t4 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (t6 >> 0);
    *((unsigned int *)t13) = t7;
    t8 = *((unsigned int *)t11);
    t9 = (t8 >> 0);
    *((unsigned int *)t3) = t9;
    t10 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t10 & 255U);
    t27 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t27 & 255U);
    t12 = (t0 + 4232);
    t14 = (t0 + 4232);
    t17 = (t14 + 72U);
    t18 = *((char **)t17);
    t19 = (t0 + 4232);
    t20 = (t19 + 64U);
    t21 = *((char **)t20);
    t22 = (t0 + 3672U);
    t23 = *((char **)t22);
    xsi_vlog_generic_convert_array_indices(t15, t16, t18, t21, 2, 1, t23, 30, 2);
    t22 = (t0 + 4232);
    t24 = (t22 + 72U);
    t25 = *((char **)t24);
    t26 = ((char*)((ng20)));
    t29 = ((char*)((ng9)));
    xsi_vlog_convert_partindices(t39, t40, t41, ((int*)(t25)), 2, t26, 32, 1, t29, 32, 1);
    t42 = (t15 + 4);
    t30 = *((unsigned int *)t42);
    t31 = (!(t30));
    t43 = (t16 + 4);
    t33 = *((unsigned int *)t43);
    t32 = (!(t33));
    t35 = (t31 && t32);
    t44 = (t39 + 4);
    t34 = *((unsigned int *)t44);
    t36 = (!(t34));
    t37 = (t35 && t36);
    t45 = (t40 + 4);
    t46 = *((unsigned int *)t45);
    t47 = (!(t46));
    t48 = (t37 && t47);
    t49 = (t41 + 4);
    t50 = *((unsigned int *)t49);
    t51 = (!(t50));
    t52 = (t48 && t51);
    if (t52 == 1)
        goto LAB58;

LAB59:    xsi_set_current_line(102, ng0);
    t2 = xsi_vlog_time(t38, 1000.0000000000000, 1000.0000000000000);
    t3 = (t0 + 3032U);
    t4 = *((char **)t3);
    t3 = (t0 + 3832U);
    t11 = *((char **)t3);
    t3 = (t0 + 4232);
    t12 = (t3 + 56U);
    t14 = *((char **)t12);
    t17 = (t0 + 4232);
    t18 = (t17 + 72U);
    t19 = *((char **)t18);
    t20 = (t0 + 4232);
    t21 = (t20 + 64U);
    t22 = *((char **)t21);
    t23 = (t0 + 3672U);
    t24 = *((char **)t23);
    xsi_vlog_generic_get_array_select_value(t13, 32, t14, t19, t22, 2, 1, t24, 30, 2);
    xsi_vlogfile_write(1, 0, 0, ng12, 5, t0, (char)118, t38, 64, (char)118, t4, 32, (char)118, t11, 32, (char)118, t13, 32);
    goto LAB38;

LAB40:    t33 = *((unsigned int *)t13);
    t34 = *((unsigned int *)t15);
    t36 = (t33 - t34);
    t37 = (t36 + 1);
    xsi_vlogvar_assign_value(t11, t12, 0, *((unsigned int *)t15), t37);
    goto LAB41;

LAB43:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB44;

LAB46:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB47;

LAB49:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB50;

LAB52:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB53;

LAB55:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB56;

LAB58:    t53 = *((unsigned int *)t41);
    t54 = (t53 + 0);
    t55 = *((unsigned int *)t16);
    t56 = *((unsigned int *)t40);
    t57 = (t55 + t56);
    t58 = *((unsigned int *)t39);
    t59 = *((unsigned int *)t40);
    t60 = (t58 - t59);
    t61 = (t60 + 1);
    xsi_vlogvar_assign_value(t12, t13, t54, t57, t61);
    goto LAB59;

}


extern void work_m_00000000001989635766_0010801604_init()
{
	static char *pe[] = {(void *)Cont_23_0,(void *)Cont_24_1,(void *)Cont_25_2,(void *)Cont_48_3,(void *)Cont_57_4,(void *)Initial_61_5,(void *)Always_67_6};
	static char *se[] = {(void *)sp_func_be,(void *)sp_rd_result};
	xsi_register_didat("work_m_00000000001989635766_0010801604", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000001989635766_0010801604.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
