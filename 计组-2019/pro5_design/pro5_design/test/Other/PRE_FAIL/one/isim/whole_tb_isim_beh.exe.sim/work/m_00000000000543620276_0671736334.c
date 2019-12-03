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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/one/Ctr_D.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static unsigned int ng3[] = {1U, 0U};
static unsigned int ng4[] = {2U, 0U};
static int ng5[] = {1, 0};
static int ng6[] = {2, 0};



static void Initial_22_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(22, ng0);

LAB2:    xsi_set_current_line(23, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 3528);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(24, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3688);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 2);
    xsi_set_current_line(25, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 3848);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4008);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 3);
    xsi_set_current_line(27, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4488);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(28, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4168);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);
    xsi_set_current_line(29, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 4328);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 6);

LAB1:    return;
}

static void Always_32_1(char *t0)
{
    char t7[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    char *t20;
    char *t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;

LAB0:    t1 = (t0 + 5656U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t2 = (t0 + 6224);
    *((int *)t2) = 1;
    t3 = (t0 + 5688);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(32, ng0);

LAB5:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 2328U);
    t5 = *((char **)t4);
    t4 = (t0 + 2488U);
    t6 = *((char **)t4);
    t8 = *((unsigned int *)t5);
    t9 = *((unsigned int *)t6);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t4 = (t5 + 4);
    t11 = (t6 + 4);
    t12 = (t7 + 4);
    t13 = *((unsigned int *)t4);
    t14 = *((unsigned int *)t11);
    t15 = (t13 | t14);
    *((unsigned int *)t12) = t15;
    t16 = *((unsigned int *)t12);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB6;

LAB7:
LAB8:    t34 = (t0 + 3848);
    xsi_vlogvar_assign_value(t34, t7, 0, 0, 1);
    goto LAB2;

LAB6:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t12);
    *((unsigned int *)t7) = (t18 | t19);
    t20 = (t5 + 4);
    t21 = (t6 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t5);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t21);
    t27 = (~(t26));
    t28 = *((unsigned int *)t6);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t32 & t30);
    t33 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t33 & t31);
    goto LAB8;

}

static void Always_46_2(char *t0)
{
    char t4[8];
    char t5[8];
    char t9[8];
    char t38[8];
    char t81[8];
    char t82[8];
    char t102[8];
    char t132[8];
    char t133[8];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    char *t8;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    char *t36;
    char *t37;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    char *t51;
    char *t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    char *t71;
    char *t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    char *t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    char *t100;
    char *t101;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    int t109;
    unsigned int t110;
    unsigned int t111;
    unsigned int t112;
    int t113;
    unsigned int t114;
    unsigned int t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    char *t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    char *t127;
    unsigned int t128;
    unsigned int t129;
    unsigned int t130;
    unsigned int t131;
    char *t134;
    char *t135;
    unsigned int t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    unsigned int t140;
    char *t141;
    char *t142;
    unsigned int t143;
    unsigned int t144;
    unsigned int t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    char *t151;
    char *t152;
    int t153;
    int t154;
    int t155;
    int t156;

LAB0:    t1 = (t0 + 5904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 6240);
    *((int *)t2) = 1;
    t3 = (t0 + 5936);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(46, ng0);

LAB5:    xsi_set_current_line(47, ng0);
    t6 = (t0 + 2008U);
    t7 = *((char **)t6);
    t6 = (t0 + 2168U);
    t8 = *((char **)t6);
    t10 = *((unsigned int *)t7);
    t11 = *((unsigned int *)t8);
    t12 = (t10 | t11);
    *((unsigned int *)t9) = t12;
    t6 = (t7 + 4);
    t13 = (t8 + 4);
    t14 = (t9 + 4);
    t15 = *((unsigned int *)t6);
    t16 = *((unsigned int *)t13);
    t17 = (t15 | t16);
    *((unsigned int *)t14) = t17;
    t18 = *((unsigned int *)t14);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB6;

LAB7:
LAB8:    t36 = (t0 + 2328U);
    t37 = *((char **)t36);
    t39 = *((unsigned int *)t9);
    t40 = *((unsigned int *)t37);
    t41 = (t39 | t40);
    *((unsigned int *)t38) = t41;
    t36 = (t9 + 4);
    t42 = (t37 + 4);
    t43 = (t38 + 4);
    t44 = *((unsigned int *)t36);
    t45 = *((unsigned int *)t42);
    t46 = (t44 | t45);
    *((unsigned int *)t43) = t46;
    t47 = *((unsigned int *)t43);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB9;

LAB10:
LAB11:    memset(t5, 0, 8);
    t65 = (t38 + 4);
    t66 = *((unsigned int *)t65);
    t67 = (~(t66));
    t68 = *((unsigned int *)t38);
    t69 = (t68 & t67);
    t70 = (t69 & 1U);
    if (t70 != 0)
        goto LAB12;

LAB13:    if (*((unsigned int *)t65) != 0)
        goto LAB14;

LAB15:    t72 = (t5 + 4);
    t73 = *((unsigned int *)t5);
    t74 = *((unsigned int *)t72);
    t75 = (t73 || t74);
    if (t75 > 0)
        goto LAB16;

LAB17:    t77 = *((unsigned int *)t5);
    t78 = (~(t77));
    t79 = *((unsigned int *)t72);
    t80 = (t78 || t79);
    if (t80 > 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t72) > 0)
        goto LAB20;

LAB21:    if (*((unsigned int *)t5) > 0)
        goto LAB22;

LAB23:    memcpy(t4, t81, 8);

LAB24:    t101 = (t0 + 3688);
    xsi_vlogvar_wait_assign_value(t101, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    memset(t9, 0, 8);
    t2 = (t3 + 4);
    t10 = *((unsigned int *)t2);
    t11 = (~(t10));
    t12 = *((unsigned int *)t3);
    t15 = (t12 & t11);
    t16 = (t15 & 1U);
    if (t16 != 0)
        goto LAB38;

LAB39:    if (*((unsigned int *)t2) != 0)
        goto LAB40;

LAB41:    t7 = (t9 + 4);
    t17 = *((unsigned int *)t9);
    t18 = *((unsigned int *)t7);
    t19 = (t17 || t18);
    if (t19 > 0)
        goto LAB42;

LAB43:    memcpy(t81, t9, 8);

LAB44:    t43 = (t0 + 2808U);
    t51 = *((char **)t43);
    t62 = *((unsigned int *)t81);
    t63 = *((unsigned int *)t51);
    t64 = (t62 | t63);
    *((unsigned int *)t82) = t64;
    t43 = (t81 + 4);
    t52 = (t51 + 4);
    t65 = (t82 + 4);
    t66 = *((unsigned int *)t43);
    t67 = *((unsigned int *)t52);
    t68 = (t66 | t67);
    *((unsigned int *)t65) = t68;
    t69 = *((unsigned int *)t65);
    t70 = (t69 != 0);
    if (t70 == 1)
        goto LAB52;

LAB53:
LAB54:    t76 = (t0 + 2968U);
    t83 = *((char **)t76);
    t92 = *((unsigned int *)t82);
    t93 = *((unsigned int *)t83);
    t94 = (t92 | t93);
    *((unsigned int *)t102) = t94;
    t76 = (t82 + 4);
    t84 = (t83 + 4);
    t90 = (t102 + 4);
    t96 = *((unsigned int *)t76);
    t97 = *((unsigned int *)t84);
    t98 = (t96 | t97);
    *((unsigned int *)t90) = t98;
    t99 = *((unsigned int *)t90);
    t103 = (t99 != 0);
    if (t103 == 1)
        goto LAB55;

LAB56:
LAB57:    memset(t5, 0, 8);
    t100 = (t102 + 4);
    t118 = *((unsigned int *)t100);
    t119 = (~(t118));
    t120 = *((unsigned int *)t102);
    t121 = (t120 & t119);
    t122 = (t121 & 1U);
    if (t122 != 0)
        goto LAB58;

LAB59:    if (*((unsigned int *)t100) != 0)
        goto LAB60;

LAB61:    t123 = (t5 + 4);
    t124 = *((unsigned int *)t5);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB62;

LAB63:    t128 = *((unsigned int *)t5);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t123) > 0)
        goto LAB66;

LAB67:    if (*((unsigned int *)t5) > 0)
        goto LAB68;

LAB69:    memcpy(t4, t132, 8);

LAB70:    t152 = (t0 + 3528);
    xsi_vlogvar_wait_assign_value(t152, t4, 0, 0, 2, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t6 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 | t11);
    *((unsigned int *)t4) = t12;
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    *((unsigned int *)t8) = t17;
    t18 = *((unsigned int *)t8);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB84;

LAB85:
LAB86:    t22 = (t0 + 4008);
    t23 = (t0 + 4008);
    t36 = (t23 + 72U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t5, t37, 2, t42, 32, 1);
    t43 = (t5 + 4);
    t39 = *((unsigned int *)t43);
    t56 = (!(t39));
    if (t56 == 1)
        goto LAB87;

LAB88:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t6 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 | t11);
    *((unsigned int *)t4) = t12;
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    *((unsigned int *)t8) = t17;
    t18 = *((unsigned int *)t8);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB89;

LAB90:
LAB91:    t22 = (t0 + 4008);
    t23 = (t0 + 4008);
    t36 = (t23 + 72U);
    t37 = *((char **)t36);
    t42 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t5, t37, 2, t42, 32, 1);
    t43 = (t5 + 4);
    t39 = *((unsigned int *)t43);
    t56 = (!(t39));
    if (t56 == 1)
        goto LAB92;

LAB93:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t6 = (t0 + 4008);
    t7 = (t6 + 72U);
    t8 = *((char **)t7);
    t13 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t4, t8, 2, t13, 32, 1);
    t14 = (t4 + 4);
    t10 = *((unsigned int *)t14);
    t27 = (!(t10));
    if (t27 == 1)
        goto LAB94;

LAB95:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t6 = *((char **)t2);
    t10 = *((unsigned int *)t3);
    t11 = *((unsigned int *)t6);
    t12 = (t10 | t11);
    *((unsigned int *)t4) = t12;
    t2 = (t3 + 4);
    t7 = (t6 + 4);
    t8 = (t4 + 4);
    t15 = *((unsigned int *)t2);
    t16 = *((unsigned int *)t7);
    t17 = (t15 | t16);
    *((unsigned int *)t8) = t17;
    t18 = *((unsigned int *)t8);
    t19 = (t18 != 0);
    if (t19 == 1)
        goto LAB96;

LAB97:
LAB98:    t22 = (t0 + 2008U);
    t23 = *((char **)t22);
    t39 = *((unsigned int *)t4);
    t40 = *((unsigned int *)t23);
    t41 = (t39 | t40);
    *((unsigned int *)t5) = t41;
    t22 = (t4 + 4);
    t36 = (t23 + 4);
    t37 = (t5 + 4);
    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 | t45);
    *((unsigned int *)t37) = t46;
    t47 = *((unsigned int *)t37);
    t48 = (t47 != 0);
    if (t48 == 1)
        goto LAB99;

LAB100:
LAB101:    t51 = (t0 + 2168U);
    t52 = *((char **)t51);
    t66 = *((unsigned int *)t5);
    t67 = *((unsigned int *)t52);
    t68 = (t66 | t67);
    *((unsigned int *)t9) = t68;
    t51 = (t5 + 4);
    t65 = (t52 + 4);
    t71 = (t9 + 4);
    t69 = *((unsigned int *)t51);
    t70 = *((unsigned int *)t65);
    t73 = (t69 | t70);
    *((unsigned int *)t71) = t73;
    t74 = *((unsigned int *)t71);
    t75 = (t74 != 0);
    if (t75 == 1)
        goto LAB102;

LAB103:
LAB104:    t83 = (t0 + 2328U);
    t84 = *((char **)t83);
    t96 = *((unsigned int *)t9);
    t97 = *((unsigned int *)t84);
    t98 = (t96 | t97);
    *((unsigned int *)t38) = t98;
    t83 = (t9 + 4);
    t90 = (t84 + 4);
    t91 = (t38 + 4);
    t99 = *((unsigned int *)t83);
    t103 = *((unsigned int *)t90);
    t104 = (t99 | t103);
    *((unsigned int *)t91) = t104;
    t105 = *((unsigned int *)t91);
    t106 = (t105 != 0);
    if (t106 == 1)
        goto LAB105;

LAB106:
LAB107:    t101 = (t0 + 2968U);
    t123 = *((char **)t101);
    t121 = *((unsigned int *)t38);
    t122 = *((unsigned int *)t123);
    t124 = (t121 | t122);
    *((unsigned int *)t81) = t124;
    t101 = (t38 + 4);
    t127 = (t123 + 4);
    t134 = (t81 + 4);
    t125 = *((unsigned int *)t101);
    t126 = *((unsigned int *)t127);
    t128 = (t125 | t126);
    *((unsigned int *)t134) = t128;
    t129 = *((unsigned int *)t134);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB108;

LAB109:
LAB110:    t142 = (t0 + 4488);
    xsi_vlogvar_wait_assign_value(t142, t81, 0, 0, 1, 0LL);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1208U);
    t3 = *((char **)t2);
    t2 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    goto LAB2;

LAB6:    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t14);
    *((unsigned int *)t9) = (t20 | t21);
    t22 = (t7 + 4);
    t23 = (t8 + 4);
    t24 = *((unsigned int *)t22);
    t25 = (~(t24));
    t26 = *((unsigned int *)t7);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t23);
    t29 = (~(t28));
    t30 = *((unsigned int *)t8);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t34 & t32);
    t35 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t35 & t33);
    goto LAB8;

LAB9:    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t43);
    *((unsigned int *)t38) = (t49 | t50);
    t51 = (t9 + 4);
    t52 = (t37 + 4);
    t53 = *((unsigned int *)t51);
    t54 = (~(t53));
    t55 = *((unsigned int *)t9);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t52);
    t58 = (~(t57));
    t59 = *((unsigned int *)t37);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t63 & t61);
    t64 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t64 & t62);
    goto LAB11;

LAB12:    *((unsigned int *)t5) = 1;
    goto LAB15;

LAB14:    t71 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t71) = 1;
    goto LAB15;

LAB16:    t76 = ((char*)((ng3)));
    goto LAB17;

LAB18:    t83 = (t0 + 2968U);
    t84 = *((char **)t83);
    memset(t82, 0, 8);
    t83 = (t84 + 4);
    t85 = *((unsigned int *)t83);
    t86 = (~(t85));
    t87 = *((unsigned int *)t84);
    t88 = (t87 & t86);
    t89 = (t88 & 1U);
    if (t89 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t83) != 0)
        goto LAB27;

LAB28:    t91 = (t82 + 4);
    t92 = *((unsigned int *)t82);
    t93 = *((unsigned int *)t91);
    t94 = (t92 || t93);
    if (t94 > 0)
        goto LAB29;

LAB30:    t96 = *((unsigned int *)t82);
    t97 = (~(t96));
    t98 = *((unsigned int *)t91);
    t99 = (t97 || t98);
    if (t99 > 0)
        goto LAB31;

LAB32:    if (*((unsigned int *)t91) > 0)
        goto LAB33;

LAB34:    if (*((unsigned int *)t82) > 0)
        goto LAB35;

LAB36:    memcpy(t81, t100, 8);

LAB37:    goto LAB19;

LAB20:    xsi_vlog_unsigned_bit_combine(t4, 2, t76, 2, t81, 2);
    goto LAB24;

LAB22:    memcpy(t4, t76, 8);
    goto LAB24;

LAB25:    *((unsigned int *)t82) = 1;
    goto LAB28;

LAB27:    t90 = (t82 + 4);
    *((unsigned int *)t82) = 1;
    *((unsigned int *)t90) = 1;
    goto LAB28;

LAB29:    t95 = ((char*)((ng4)));
    goto LAB30;

LAB31:    t100 = ((char*)((ng1)));
    goto LAB32;

LAB33:    xsi_vlog_unsigned_bit_combine(t81, 2, t95, 2, t100, 2);
    goto LAB37;

LAB35:    memcpy(t81, t95, 8);
    goto LAB37;

LAB38:    *((unsigned int *)t9) = 1;
    goto LAB41;

LAB40:    t6 = (t9 + 4);
    *((unsigned int *)t9) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB41;

LAB42:    t8 = (t0 + 1528U);
    t13 = *((char **)t8);
    memset(t38, 0, 8);
    t8 = (t13 + 4);
    t20 = *((unsigned int *)t8);
    t21 = (~(t20));
    t24 = *((unsigned int *)t13);
    t25 = (t24 & t21);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t8) != 0)
        goto LAB47;

LAB48:    t28 = *((unsigned int *)t9);
    t29 = *((unsigned int *)t38);
    t30 = (t28 & t29);
    *((unsigned int *)t81) = t30;
    t22 = (t9 + 4);
    t23 = (t38 + 4);
    t36 = (t81 + 4);
    t32 = *((unsigned int *)t22);
    t33 = *((unsigned int *)t23);
    t34 = (t32 | t33);
    *((unsigned int *)t36) = t34;
    t35 = *((unsigned int *)t36);
    t39 = (t35 != 0);
    if (t39 == 1)
        goto LAB49;

LAB50:
LAB51:    goto LAB44;

LAB45:    *((unsigned int *)t38) = 1;
    goto LAB48;

LAB47:    t14 = (t38 + 4);
    *((unsigned int *)t38) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB49:    t40 = *((unsigned int *)t81);
    t41 = *((unsigned int *)t36);
    *((unsigned int *)t81) = (t40 | t41);
    t37 = (t9 + 4);
    t42 = (t38 + 4);
    t44 = *((unsigned int *)t9);
    t45 = (~(t44));
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    t48 = *((unsigned int *)t38);
    t49 = (~(t48));
    t50 = *((unsigned int *)t42);
    t53 = (~(t50));
    t27 = (t45 & t47);
    t31 = (t49 & t53);
    t54 = (~(t27));
    t55 = (~(t31));
    t57 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t57 & t54);
    t58 = *((unsigned int *)t36);
    *((unsigned int *)t36) = (t58 & t55);
    t59 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t59 & t54);
    t61 = *((unsigned int *)t81);
    *((unsigned int *)t81) = (t61 & t55);
    goto LAB51;

LAB52:    t73 = *((unsigned int *)t82);
    t74 = *((unsigned int *)t65);
    *((unsigned int *)t82) = (t73 | t74);
    t71 = (t81 + 4);
    t72 = (t51 + 4);
    t75 = *((unsigned int *)t71);
    t77 = (~(t75));
    t78 = *((unsigned int *)t81);
    t56 = (t78 & t77);
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t85 = *((unsigned int *)t51);
    t60 = (t85 & t80);
    t86 = (~(t56));
    t87 = (~(t60));
    t88 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t88 & t86);
    t89 = *((unsigned int *)t65);
    *((unsigned int *)t65) = (t89 & t87);
    goto LAB54;

LAB55:    t104 = *((unsigned int *)t102);
    t105 = *((unsigned int *)t90);
    *((unsigned int *)t102) = (t104 | t105);
    t91 = (t82 + 4);
    t95 = (t83 + 4);
    t106 = *((unsigned int *)t91);
    t107 = (~(t106));
    t108 = *((unsigned int *)t82);
    t109 = (t108 & t107);
    t110 = *((unsigned int *)t95);
    t111 = (~(t110));
    t112 = *((unsigned int *)t83);
    t113 = (t112 & t111);
    t114 = (~(t109));
    t115 = (~(t113));
    t116 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t116 & t114);
    t117 = *((unsigned int *)t90);
    *((unsigned int *)t90) = (t117 & t115);
    goto LAB57;

LAB58:    *((unsigned int *)t5) = 1;
    goto LAB61;

LAB60:    t101 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t101) = 1;
    goto LAB61;

LAB62:    t127 = ((char*)((ng3)));
    goto LAB63;

LAB64:    t134 = (t0 + 3128U);
    t135 = *((char **)t134);
    memset(t133, 0, 8);
    t134 = (t135 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t135);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB71;

LAB72:    if (*((unsigned int *)t134) != 0)
        goto LAB73;

LAB74:    t142 = (t133 + 4);
    t143 = *((unsigned int *)t133);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB75;

LAB76:    t147 = *((unsigned int *)t133);
    t148 = (~(t147));
    t149 = *((unsigned int *)t142);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB77;

LAB78:    if (*((unsigned int *)t142) > 0)
        goto LAB79;

LAB80:    if (*((unsigned int *)t133) > 0)
        goto LAB81;

LAB82:    memcpy(t132, t151, 8);

LAB83:    goto LAB65;

LAB66:    xsi_vlog_unsigned_bit_combine(t4, 2, t127, 2, t132, 2);
    goto LAB70;

LAB68:    memcpy(t4, t127, 8);
    goto LAB70;

LAB71:    *((unsigned int *)t133) = 1;
    goto LAB74;

LAB73:    t141 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB74;

LAB75:    t146 = ((char*)((ng4)));
    goto LAB76;

LAB77:    t151 = ((char*)((ng1)));
    goto LAB78;

LAB79:    xsi_vlog_unsigned_bit_combine(t132, 2, t146, 2, t151, 2);
    goto LAB83;

LAB81:    memcpy(t132, t146, 8);
    goto LAB83;

LAB84:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t20 | t21);
    t13 = (t3 + 4);
    t14 = (t6 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t32);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & t33);
    goto LAB86;

LAB87:    xsi_vlogvar_wait_assign_value(t22, t4, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB88;

LAB89:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t20 | t21);
    t13 = (t3 + 4);
    t14 = (t6 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t32);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & t33);
    goto LAB91;

LAB92:    xsi_vlogvar_wait_assign_value(t22, t4, 0, *((unsigned int *)t5), 1, 0LL);
    goto LAB93;

LAB94:    xsi_vlogvar_wait_assign_value(t2, t3, 0, *((unsigned int *)t4), 1, 0LL);
    goto LAB95;

LAB96:    t20 = *((unsigned int *)t4);
    t21 = *((unsigned int *)t8);
    *((unsigned int *)t4) = (t20 | t21);
    t13 = (t3 + 4);
    t14 = (t6 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t3);
    t27 = (t26 & t25);
    t28 = *((unsigned int *)t14);
    t29 = (~(t28));
    t30 = *((unsigned int *)t6);
    t31 = (t30 & t29);
    t32 = (~(t27));
    t33 = (~(t31));
    t34 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t34 & t32);
    t35 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t35 & t33);
    goto LAB98;

LAB99:    t49 = *((unsigned int *)t5);
    t50 = *((unsigned int *)t37);
    *((unsigned int *)t5) = (t49 | t50);
    t42 = (t4 + 4);
    t43 = (t23 + 4);
    t53 = *((unsigned int *)t42);
    t54 = (~(t53));
    t55 = *((unsigned int *)t4);
    t56 = (t55 & t54);
    t57 = *((unsigned int *)t43);
    t58 = (~(t57));
    t59 = *((unsigned int *)t23);
    t60 = (t59 & t58);
    t61 = (~(t56));
    t62 = (~(t60));
    t63 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t63 & t61);
    t64 = *((unsigned int *)t37);
    *((unsigned int *)t37) = (t64 & t62);
    goto LAB101;

LAB102:    t77 = *((unsigned int *)t9);
    t78 = *((unsigned int *)t71);
    *((unsigned int *)t9) = (t77 | t78);
    t72 = (t5 + 4);
    t76 = (t52 + 4);
    t79 = *((unsigned int *)t72);
    t80 = (~(t79));
    t85 = *((unsigned int *)t5);
    t109 = (t85 & t80);
    t86 = *((unsigned int *)t76);
    t87 = (~(t86));
    t88 = *((unsigned int *)t52);
    t113 = (t88 & t87);
    t89 = (~(t109));
    t92 = (~(t113));
    t93 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t93 & t89);
    t94 = *((unsigned int *)t71);
    *((unsigned int *)t71) = (t94 & t92);
    goto LAB104;

LAB105:    t107 = *((unsigned int *)t38);
    t108 = *((unsigned int *)t91);
    *((unsigned int *)t38) = (t107 | t108);
    t95 = (t9 + 4);
    t100 = (t84 + 4);
    t110 = *((unsigned int *)t95);
    t111 = (~(t110));
    t112 = *((unsigned int *)t9);
    t153 = (t112 & t111);
    t114 = *((unsigned int *)t100);
    t115 = (~(t114));
    t116 = *((unsigned int *)t84);
    t154 = (t116 & t115);
    t117 = (~(t153));
    t118 = (~(t154));
    t119 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t119 & t117);
    t120 = *((unsigned int *)t91);
    *((unsigned int *)t91) = (t120 & t118);
    goto LAB107;

LAB108:    t131 = *((unsigned int *)t81);
    t136 = *((unsigned int *)t134);
    *((unsigned int *)t81) = (t131 | t136);
    t135 = (t38 + 4);
    t141 = (t123 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t38);
    t155 = (t139 & t138);
    t140 = *((unsigned int *)t141);
    t143 = (~(t140));
    t144 = *((unsigned int *)t123);
    t156 = (t144 & t143);
    t145 = (~(t155));
    t147 = (~(t156));
    t148 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t148 & t145);
    t149 = *((unsigned int *)t134);
    *((unsigned int *)t134) = (t149 & t147);
    goto LAB110;

}


extern void work_m_00000000000543620276_0671736334_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Always_32_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000000543620276_0671736334", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000000543620276_0671736334.didat");
	xsi_register_executes(pe);
}
