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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/two/Ctr_D.v";
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
    char t35[8];
    char t36[8];
    char t37[8];
    char t79[8];
    char t80[8];
    char t100[8];
    char t132[8];
    char t133[8];
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
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    char *t49;
    char *t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    char *t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    char *t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    char *t98;
    char *t99;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t110;
    int t111;
    unsigned int t112;
    unsigned int t113;
    unsigned int t114;
    unsigned int t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    char *t122;
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
    xsi_set_current_line(34, ng0);
    t2 = (t0 + 2008U);
    t3 = *((char **)t2);
    t2 = (t0 + 2168U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t36) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t36 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB9;

LAB10:
LAB11:    t20 = (t0 + 2328U);
    t21 = *((char **)t20);
    t38 = *((unsigned int *)t36);
    t39 = *((unsigned int *)t21);
    t40 = (t38 | t39);
    *((unsigned int *)t37) = t40;
    t20 = (t36 + 4);
    t34 = (t21 + 4);
    t41 = (t37 + 4);
    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB12;

LAB13:
LAB14:    memset(t35, 0, 8);
    t63 = (t37 + 4);
    t64 = *((unsigned int *)t63);
    t65 = (~(t64));
    t66 = *((unsigned int *)t37);
    t67 = (t66 & t65);
    t68 = (t67 & 1U);
    if (t68 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t63) != 0)
        goto LAB17;

LAB18:    t70 = (t35 + 4);
    t71 = *((unsigned int *)t35);
    t72 = *((unsigned int *)t70);
    t73 = (t71 || t72);
    if (t73 > 0)
        goto LAB19;

LAB20:    t75 = *((unsigned int *)t35);
    t76 = (~(t75));
    t77 = *((unsigned int *)t70);
    t78 = (t76 || t77);
    if (t78 > 0)
        goto LAB21;

LAB22:    if (*((unsigned int *)t70) > 0)
        goto LAB23;

LAB24:    if (*((unsigned int *)t35) > 0)
        goto LAB25;

LAB26:    memcpy(t7, t79, 8);

LAB27:    t99 = (t0 + 3688);
    xsi_vlogvar_assign_value(t99, t7, 0, 0, 2);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    memset(t36, 0, 8);
    t2 = (t3 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t3);
    t13 = (t10 & t9);
    t14 = (t13 & 1U);
    if (t14 != 0)
        goto LAB41;

LAB42:    if (*((unsigned int *)t2) != 0)
        goto LAB43;

LAB44:    t5 = (t36 + 4);
    t15 = *((unsigned int *)t36);
    t16 = *((unsigned int *)t5);
    t17 = (t15 || t16);
    if (t17 > 0)
        goto LAB45;

LAB46:    memcpy(t79, t36, 8);

LAB47:    t50 = (t0 + 2808U);
    t63 = *((char **)t50);
    t60 = *((unsigned int *)t79);
    t61 = *((unsigned int *)t63);
    t62 = (t60 | t61);
    *((unsigned int *)t80) = t62;
    t50 = (t79 + 4);
    t69 = (t63 + 4);
    t70 = (t80 + 4);
    t64 = *((unsigned int *)t50);
    t65 = *((unsigned int *)t69);
    t66 = (t64 | t65);
    *((unsigned int *)t70) = t66;
    t67 = *((unsigned int *)t70);
    t68 = (t67 != 0);
    if (t68 == 1)
        goto LAB55;

LAB56:
LAB57:    t82 = (t0 + 2968U);
    t88 = *((char **)t82);
    t90 = *((unsigned int *)t80);
    t91 = *((unsigned int *)t88);
    t92 = (t90 | t91);
    *((unsigned int *)t100) = t92;
    t82 = (t80 + 4);
    t89 = (t88 + 4);
    t93 = (t100 + 4);
    t94 = *((unsigned int *)t82);
    t95 = *((unsigned int *)t89);
    t96 = (t94 | t95);
    *((unsigned int *)t93) = t96;
    t97 = *((unsigned int *)t93);
    t101 = (t97 != 0);
    if (t101 == 1)
        goto LAB58;

LAB59:
LAB60:    memset(t35, 0, 8);
    t116 = (t100 + 4);
    t117 = *((unsigned int *)t116);
    t118 = (~(t117));
    t119 = *((unsigned int *)t100);
    t120 = (t119 & t118);
    t121 = (t120 & 1U);
    if (t121 != 0)
        goto LAB61;

LAB62:    if (*((unsigned int *)t116) != 0)
        goto LAB63;

LAB64:    t123 = (t35 + 4);
    t124 = *((unsigned int *)t35);
    t125 = *((unsigned int *)t123);
    t126 = (t124 || t125);
    if (t126 > 0)
        goto LAB65;

LAB66:    t128 = *((unsigned int *)t35);
    t129 = (~(t128));
    t130 = *((unsigned int *)t123);
    t131 = (t129 || t130);
    if (t131 > 0)
        goto LAB67;

LAB68:    if (*((unsigned int *)t123) > 0)
        goto LAB69;

LAB70:    if (*((unsigned int *)t35) > 0)
        goto LAB71;

LAB72:    memcpy(t7, t132, 8);

LAB73:    t152 = (t0 + 3528);
    xsi_vlogvar_assign_value(t152, t7, 0, 0, 2);
    xsi_set_current_line(40, ng0);
    t2 = (t0 + 2648U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB87;

LAB88:
LAB89:    t20 = (t0 + 4008);
    t21 = (t0 + 4008);
    t34 = (t21 + 72U);
    t41 = *((char **)t34);
    t49 = ((char*)((ng2)));
    xsi_vlog_generic_convert_bit_index(t35, t41, 2, t49, 32, 1);
    t50 = (t35 + 4);
    t38 = *((unsigned int *)t50);
    t54 = (!(t38));
    if (t54 == 1)
        goto LAB90;

LAB91:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 2968U);
    t3 = *((char **)t2);
    t2 = (t0 + 3128U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB92;

LAB93:
LAB94:    t20 = (t0 + 4008);
    t21 = (t0 + 4008);
    t34 = (t21 + 72U);
    t41 = *((char **)t34);
    t49 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t35, t41, 2, t49, 32, 1);
    t50 = (t35 + 4);
    t38 = *((unsigned int *)t50);
    t54 = (!(t38));
    if (t54 == 1)
        goto LAB95;

LAB96:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2808U);
    t3 = *((char **)t2);
    t2 = (t0 + 4008);
    t4 = (t0 + 4008);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t11 = ((char*)((ng6)));
    xsi_vlog_generic_convert_bit_index(t7, t6, 2, t11, 32, 1);
    t12 = (t7 + 4);
    t8 = *((unsigned int *)t12);
    t25 = (!(t8));
    if (t25 == 1)
        goto LAB97;

LAB98:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 1688U);
    t3 = *((char **)t2);
    t2 = (t0 + 1848U);
    t4 = *((char **)t2);
    t8 = *((unsigned int *)t3);
    t9 = *((unsigned int *)t4);
    t10 = (t8 | t9);
    *((unsigned int *)t7) = t10;
    t2 = (t3 + 4);
    t5 = (t4 + 4);
    t6 = (t7 + 4);
    t13 = *((unsigned int *)t2);
    t14 = *((unsigned int *)t5);
    t15 = (t13 | t14);
    *((unsigned int *)t6) = t15;
    t16 = *((unsigned int *)t6);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB99;

LAB100:
LAB101:    t20 = (t0 + 2008U);
    t21 = *((char **)t20);
    t38 = *((unsigned int *)t7);
    t39 = *((unsigned int *)t21);
    t40 = (t38 | t39);
    *((unsigned int *)t35) = t40;
    t20 = (t7 + 4);
    t34 = (t21 + 4);
    t41 = (t35 + 4);
    t42 = *((unsigned int *)t20);
    t43 = *((unsigned int *)t34);
    t44 = (t42 | t43);
    *((unsigned int *)t41) = t44;
    t45 = *((unsigned int *)t41);
    t46 = (t45 != 0);
    if (t46 == 1)
        goto LAB102;

LAB103:
LAB104:    t63 = (t0 + 2168U);
    t69 = *((char **)t63);
    t64 = *((unsigned int *)t35);
    t65 = *((unsigned int *)t69);
    t66 = (t64 | t65);
    *((unsigned int *)t36) = t66;
    t63 = (t35 + 4);
    t70 = (t69 + 4);
    t74 = (t36 + 4);
    t67 = *((unsigned int *)t63);
    t68 = *((unsigned int *)t70);
    t71 = (t67 | t68);
    *((unsigned int *)t74) = t71;
    t72 = *((unsigned int *)t74);
    t73 = (t72 != 0);
    if (t73 == 1)
        goto LAB105;

LAB106:
LAB107:    t88 = (t0 + 2328U);
    t89 = *((char **)t88);
    t94 = *((unsigned int *)t36);
    t95 = *((unsigned int *)t89);
    t96 = (t94 | t95);
    *((unsigned int *)t37) = t96;
    t88 = (t36 + 4);
    t93 = (t89 + 4);
    t98 = (t37 + 4);
    t97 = *((unsigned int *)t88);
    t101 = *((unsigned int *)t93);
    t102 = (t97 | t101);
    *((unsigned int *)t98) = t102;
    t103 = *((unsigned int *)t98);
    t104 = (t103 != 0);
    if (t104 == 1)
        goto LAB108;

LAB109:
LAB110:    t122 = (t0 + 2968U);
    t123 = *((char **)t122);
    t120 = *((unsigned int *)t37);
    t121 = *((unsigned int *)t123);
    t124 = (t120 | t121);
    *((unsigned int *)t79) = t124;
    t122 = (t37 + 4);
    t127 = (t123 + 4);
    t134 = (t79 + 4);
    t125 = *((unsigned int *)t122);
    t126 = *((unsigned int *)t127);
    t128 = (t125 | t126);
    *((unsigned int *)t134) = t128;
    t129 = *((unsigned int *)t134);
    t130 = (t129 != 0);
    if (t130 == 1)
        goto LAB111;

LAB112:
LAB113:    t142 = (t0 + 4488);
    xsi_vlogvar_assign_value(t142, t79, 0, 0, 1);
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

LAB9:    t18 = *((unsigned int *)t36);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t36) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    goto LAB11;

LAB12:    t47 = *((unsigned int *)t37);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t37) = (t47 | t48);
    t49 = (t36 + 4);
    t50 = (t21 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t36);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t21);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB14;

LAB15:    *((unsigned int *)t35) = 1;
    goto LAB18;

LAB17:    t69 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t69) = 1;
    goto LAB18;

LAB19:    t74 = ((char*)((ng3)));
    goto LAB20;

LAB21:    t81 = (t0 + 2968U);
    t82 = *((char **)t81);
    memset(t80, 0, 8);
    t81 = (t82 + 4);
    t83 = *((unsigned int *)t81);
    t84 = (~(t83));
    t85 = *((unsigned int *)t82);
    t86 = (t85 & t84);
    t87 = (t86 & 1U);
    if (t87 != 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t81) != 0)
        goto LAB30;

LAB31:    t89 = (t80 + 4);
    t90 = *((unsigned int *)t80);
    t91 = *((unsigned int *)t89);
    t92 = (t90 || t91);
    if (t92 > 0)
        goto LAB32;

LAB33:    t94 = *((unsigned int *)t80);
    t95 = (~(t94));
    t96 = *((unsigned int *)t89);
    t97 = (t95 || t96);
    if (t97 > 0)
        goto LAB34;

LAB35:    if (*((unsigned int *)t89) > 0)
        goto LAB36;

LAB37:    if (*((unsigned int *)t80) > 0)
        goto LAB38;

LAB39:    memcpy(t79, t98, 8);

LAB40:    goto LAB22;

LAB23:    xsi_vlog_unsigned_bit_combine(t7, 2, t74, 2, t79, 2);
    goto LAB27;

LAB25:    memcpy(t7, t74, 8);
    goto LAB27;

LAB28:    *((unsigned int *)t80) = 1;
    goto LAB31;

LAB30:    t88 = (t80 + 4);
    *((unsigned int *)t80) = 1;
    *((unsigned int *)t88) = 1;
    goto LAB31;

LAB32:    t93 = ((char*)((ng4)));
    goto LAB33;

LAB34:    t98 = ((char*)((ng1)));
    goto LAB35;

LAB36:    xsi_vlog_unsigned_bit_combine(t79, 2, t93, 2, t98, 2);
    goto LAB40;

LAB38:    memcpy(t79, t93, 8);
    goto LAB40;

LAB41:    *((unsigned int *)t36) = 1;
    goto LAB44;

LAB43:    t4 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t4) = 1;
    goto LAB44;

LAB45:    t6 = (t0 + 1528U);
    t11 = *((char **)t6);
    memset(t37, 0, 8);
    t6 = (t11 + 4);
    t18 = *((unsigned int *)t6);
    t19 = (~(t18));
    t22 = *((unsigned int *)t11);
    t23 = (t22 & t19);
    t24 = (t23 & 1U);
    if (t24 != 0)
        goto LAB48;

LAB49:    if (*((unsigned int *)t6) != 0)
        goto LAB50;

LAB51:    t26 = *((unsigned int *)t36);
    t27 = *((unsigned int *)t37);
    t28 = (t26 & t27);
    *((unsigned int *)t79) = t28;
    t20 = (t36 + 4);
    t21 = (t37 + 4);
    t34 = (t79 + 4);
    t30 = *((unsigned int *)t20);
    t31 = *((unsigned int *)t21);
    t32 = (t30 | t31);
    *((unsigned int *)t34) = t32;
    t33 = *((unsigned int *)t34);
    t38 = (t33 != 0);
    if (t38 == 1)
        goto LAB52;

LAB53:
LAB54:    goto LAB47;

LAB48:    *((unsigned int *)t37) = 1;
    goto LAB51;

LAB50:    t12 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB51;

LAB52:    t39 = *((unsigned int *)t79);
    t40 = *((unsigned int *)t34);
    *((unsigned int *)t79) = (t39 | t40);
    t41 = (t36 + 4);
    t49 = (t37 + 4);
    t42 = *((unsigned int *)t36);
    t43 = (~(t42));
    t44 = *((unsigned int *)t41);
    t45 = (~(t44));
    t46 = *((unsigned int *)t37);
    t47 = (~(t46));
    t48 = *((unsigned int *)t49);
    t51 = (~(t48));
    t25 = (t43 & t45);
    t29 = (t47 & t51);
    t52 = (~(t25));
    t53 = (~(t29));
    t55 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t55 & t52);
    t56 = *((unsigned int *)t34);
    *((unsigned int *)t34) = (t56 & t53);
    t57 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t57 & t52);
    t59 = *((unsigned int *)t79);
    *((unsigned int *)t79) = (t59 & t53);
    goto LAB54;

LAB55:    t71 = *((unsigned int *)t80);
    t72 = *((unsigned int *)t70);
    *((unsigned int *)t80) = (t71 | t72);
    t74 = (t79 + 4);
    t81 = (t63 + 4);
    t73 = *((unsigned int *)t74);
    t75 = (~(t73));
    t76 = *((unsigned int *)t79);
    t54 = (t76 & t75);
    t77 = *((unsigned int *)t81);
    t78 = (~(t77));
    t83 = *((unsigned int *)t63);
    t58 = (t83 & t78);
    t84 = (~(t54));
    t85 = (~(t58));
    t86 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t86 & t84);
    t87 = *((unsigned int *)t70);
    *((unsigned int *)t70) = (t87 & t85);
    goto LAB57;

LAB58:    t102 = *((unsigned int *)t100);
    t103 = *((unsigned int *)t93);
    *((unsigned int *)t100) = (t102 | t103);
    t98 = (t80 + 4);
    t99 = (t88 + 4);
    t104 = *((unsigned int *)t98);
    t105 = (~(t104));
    t106 = *((unsigned int *)t80);
    t107 = (t106 & t105);
    t108 = *((unsigned int *)t99);
    t109 = (~(t108));
    t110 = *((unsigned int *)t88);
    t111 = (t110 & t109);
    t112 = (~(t107));
    t113 = (~(t111));
    t114 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t114 & t112);
    t115 = *((unsigned int *)t93);
    *((unsigned int *)t93) = (t115 & t113);
    goto LAB60;

LAB61:    *((unsigned int *)t35) = 1;
    goto LAB64;

LAB63:    t122 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t122) = 1;
    goto LAB64;

LAB65:    t127 = ((char*)((ng3)));
    goto LAB66;

LAB67:    t134 = (t0 + 3128U);
    t135 = *((char **)t134);
    memset(t133, 0, 8);
    t134 = (t135 + 4);
    t136 = *((unsigned int *)t134);
    t137 = (~(t136));
    t138 = *((unsigned int *)t135);
    t139 = (t138 & t137);
    t140 = (t139 & 1U);
    if (t140 != 0)
        goto LAB74;

LAB75:    if (*((unsigned int *)t134) != 0)
        goto LAB76;

LAB77:    t142 = (t133 + 4);
    t143 = *((unsigned int *)t133);
    t144 = *((unsigned int *)t142);
    t145 = (t143 || t144);
    if (t145 > 0)
        goto LAB78;

LAB79:    t147 = *((unsigned int *)t133);
    t148 = (~(t147));
    t149 = *((unsigned int *)t142);
    t150 = (t148 || t149);
    if (t150 > 0)
        goto LAB80;

LAB81:    if (*((unsigned int *)t142) > 0)
        goto LAB82;

LAB83:    if (*((unsigned int *)t133) > 0)
        goto LAB84;

LAB85:    memcpy(t132, t151, 8);

LAB86:    goto LAB68;

LAB69:    xsi_vlog_unsigned_bit_combine(t7, 2, t127, 2, t132, 2);
    goto LAB73;

LAB71:    memcpy(t7, t127, 8);
    goto LAB73;

LAB74:    *((unsigned int *)t133) = 1;
    goto LAB77;

LAB76:    t141 = (t133 + 4);
    *((unsigned int *)t133) = 1;
    *((unsigned int *)t141) = 1;
    goto LAB77;

LAB78:    t146 = ((char*)((ng4)));
    goto LAB79;

LAB80:    t151 = ((char*)((ng1)));
    goto LAB81;

LAB82:    xsi_vlog_unsigned_bit_combine(t132, 2, t146, 2, t151, 2);
    goto LAB86;

LAB84:    memcpy(t132, t146, 8);
    goto LAB86;

LAB87:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    goto LAB89;

LAB90:    xsi_vlogvar_assign_value(t20, t7, 0, *((unsigned int *)t35), 1);
    goto LAB91;

LAB92:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    goto LAB94;

LAB95:    xsi_vlogvar_assign_value(t20, t7, 0, *((unsigned int *)t35), 1);
    goto LAB96;

LAB97:    xsi_vlogvar_assign_value(t2, t3, 0, *((unsigned int *)t7), 1);
    goto LAB98;

LAB99:    t18 = *((unsigned int *)t7);
    t19 = *((unsigned int *)t6);
    *((unsigned int *)t7) = (t18 | t19);
    t11 = (t3 + 4);
    t12 = (t4 + 4);
    t22 = *((unsigned int *)t11);
    t23 = (~(t22));
    t24 = *((unsigned int *)t3);
    t25 = (t24 & t23);
    t26 = *((unsigned int *)t12);
    t27 = (~(t26));
    t28 = *((unsigned int *)t4);
    t29 = (t28 & t27);
    t30 = (~(t25));
    t31 = (~(t29));
    t32 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t32 & t30);
    t33 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t33 & t31);
    goto LAB101;

LAB102:    t47 = *((unsigned int *)t35);
    t48 = *((unsigned int *)t41);
    *((unsigned int *)t35) = (t47 | t48);
    t49 = (t7 + 4);
    t50 = (t21 + 4);
    t51 = *((unsigned int *)t49);
    t52 = (~(t51));
    t53 = *((unsigned int *)t7);
    t54 = (t53 & t52);
    t55 = *((unsigned int *)t50);
    t56 = (~(t55));
    t57 = *((unsigned int *)t21);
    t58 = (t57 & t56);
    t59 = (~(t54));
    t60 = (~(t58));
    t61 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t61 & t59);
    t62 = *((unsigned int *)t41);
    *((unsigned int *)t41) = (t62 & t60);
    goto LAB104;

LAB105:    t75 = *((unsigned int *)t36);
    t76 = *((unsigned int *)t74);
    *((unsigned int *)t36) = (t75 | t76);
    t81 = (t35 + 4);
    t82 = (t69 + 4);
    t77 = *((unsigned int *)t81);
    t78 = (~(t77));
    t83 = *((unsigned int *)t35);
    t107 = (t83 & t78);
    t84 = *((unsigned int *)t82);
    t85 = (~(t84));
    t86 = *((unsigned int *)t69);
    t111 = (t86 & t85);
    t87 = (~(t107));
    t90 = (~(t111));
    t91 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t91 & t87);
    t92 = *((unsigned int *)t74);
    *((unsigned int *)t74) = (t92 & t90);
    goto LAB107;

LAB108:    t105 = *((unsigned int *)t37);
    t106 = *((unsigned int *)t98);
    *((unsigned int *)t37) = (t105 | t106);
    t99 = (t36 + 4);
    t116 = (t89 + 4);
    t108 = *((unsigned int *)t99);
    t109 = (~(t108));
    t110 = *((unsigned int *)t36);
    t153 = (t110 & t109);
    t112 = *((unsigned int *)t116);
    t113 = (~(t112));
    t114 = *((unsigned int *)t89);
    t154 = (t114 & t113);
    t115 = (~(t153));
    t117 = (~(t154));
    t118 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t118 & t115);
    t119 = *((unsigned int *)t98);
    *((unsigned int *)t98) = (t119 & t117);
    goto LAB110;

LAB111:    t131 = *((unsigned int *)t79);
    t136 = *((unsigned int *)t134);
    *((unsigned int *)t79) = (t131 | t136);
    t135 = (t37 + 4);
    t141 = (t123 + 4);
    t137 = *((unsigned int *)t135);
    t138 = (~(t137));
    t139 = *((unsigned int *)t37);
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
    goto LAB113;

}

static void Always_46_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;

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

LAB5:    xsi_set_current_line(57, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t0 + 4168);
    xsi_vlogvar_wait_assign_value(t4, t5, 0, 0, 6, 0LL);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 4328);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 6, 0LL);
    goto LAB2;

}


extern void work_m_00000000000543620276_0671736334_init()
{
	static char *pe[] = {(void *)Initial_22_0,(void *)Always_32_1,(void *)Always_46_2};
	xsi_register_didat("work_m_00000000000543620276_0671736334", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000000543620276_0671736334.didat");
	xsi_register_executes(pe);
}
