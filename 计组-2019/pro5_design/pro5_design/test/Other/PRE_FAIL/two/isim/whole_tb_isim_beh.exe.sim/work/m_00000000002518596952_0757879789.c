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
static const char *ng0 = "C:/Users/panli/Desktop/CS/Work/P5/two/NPC.v";
static unsigned int ng1[] = {1U, 0U};
static int ng2[] = {16, 0};
static int ng3[] = {2, 0};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {0U, 0U};
static unsigned int ng6[] = {4U, 0U};



static void Cont_14_0(char *t0)
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

LAB0:    t1 = (t0 + 3168U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(14, ng0);
    t2 = (t0 + 1688U);
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
    *((unsigned int *)t3) = (t10 & 65535U);
    t11 = *((unsigned int *)t2);
    *((unsigned int *)t2) = (t11 & 65535U);
    t12 = (t0 + 3832);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memset(t16, 0, 8);
    t17 = 65535U;
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
    xsi_driver_vfirst_trans(t12, 0, 15);
    t25 = (t0 + 3736);
    *((int *)t25) = 1;

LAB1:    return;
}

static void Cont_16_1(char *t0)
{
    char t3[8];
    char t4[8];
    char t6[8];
    char t22[8];
    char t36[8];
    char t43[8];
    char t89[8];
    char t91[8];
    char t94[8];
    char t103[8];
    char t104[8];
    char t109[8];
    char t110[8];
    char t113[8];
    char t140[8];
    char t144[8];
    char t157[8];
    char t158[8];
    char t161[8];
    char t188[8];
    char t192[8];
    char *t1;
    char *t2;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    char *t34;
    char *t35;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    int t67;
    int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    char *t81;
    char *t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    char *t86;
    char *t87;
    char *t90;
    char *t92;
    char *t93;
    char *t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    char *t102;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    char *t111;
    char *t112;
    char *t114;
    char *t115;
    unsigned int t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    unsigned int t124;
    unsigned int t125;
    unsigned int t126;
    unsigned int t127;
    char *t128;
    char *t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    unsigned int t133;
    unsigned int t134;
    char *t135;
    char *t136;
    unsigned int t137;
    unsigned int t138;
    unsigned int t139;
    char *t141;
    char *t142;
    char *t143;
    char *t145;
    char *t146;
    unsigned int t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    unsigned int t156;
    char *t159;
    char *t160;
    char *t162;
    char *t163;
    unsigned int t164;
    unsigned int t165;
    unsigned int t166;
    unsigned int t167;
    unsigned int t168;
    unsigned int t169;
    unsigned int t170;
    unsigned int t171;
    unsigned int t172;
    unsigned int t173;
    unsigned int t174;
    unsigned int t175;
    char *t176;
    char *t177;
    unsigned int t178;
    unsigned int t179;
    unsigned int t180;
    unsigned int t181;
    unsigned int t182;
    char *t183;
    char *t184;
    unsigned int t185;
    unsigned int t186;
    unsigned int t187;
    char *t189;
    char *t190;
    char *t191;
    char *t193;
    char *t194;
    unsigned int t195;
    unsigned int t196;
    unsigned int t197;
    unsigned int t198;
    unsigned int t199;
    unsigned int t200;
    unsigned int t201;
    unsigned int t202;
    unsigned int t203;
    unsigned int t204;
    char *t205;
    char *t206;
    char *t207;
    char *t208;
    char *t209;
    char *t210;
    char *t211;

LAB0:    t1 = (t0 + 3416U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(16, ng0);
    t2 = (t0 + 1528U);
    t5 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t2 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t2);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB7;

LAB4:    if (t18 != 0)
        goto LAB6;

LAB5:    *((unsigned int *)t6) = 1;

LAB7:    memset(t22, 0, 8);
    t23 = (t6 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t6);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB8;

LAB9:    if (*((unsigned int *)t23) != 0)
        goto LAB10;

LAB11:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = *((unsigned int *)t30);
    t33 = (t31 || t32);
    if (t33 > 0)
        goto LAB12;

LAB13:    memcpy(t43, t22, 8);

LAB14:    memset(t4, 0, 8);
    t75 = (t43 + 4);
    t76 = *((unsigned int *)t75);
    t77 = (~(t76));
    t78 = *((unsigned int *)t43);
    t79 = (t78 & t77);
    t80 = (t79 & 1U);
    if (t80 != 0)
        goto LAB22;

LAB23:    if (*((unsigned int *)t75) != 0)
        goto LAB24;

LAB25:    t82 = (t4 + 4);
    t83 = *((unsigned int *)t4);
    t84 = *((unsigned int *)t82);
    t85 = (t83 || t84);
    if (t85 > 0)
        goto LAB26;

LAB27:    t105 = *((unsigned int *)t4);
    t106 = (~(t105));
    t107 = *((unsigned int *)t82);
    t108 = (t106 || t107);
    if (t108 > 0)
        goto LAB28;

LAB29:    if (*((unsigned int *)t82) > 0)
        goto LAB30;

LAB31:    if (*((unsigned int *)t4) > 0)
        goto LAB32;

LAB33:    memcpy(t3, t109, 8);

LAB34:    t205 = (t0 + 3896);
    t207 = (t205 + 56U);
    t208 = *((char **)t207);
    t209 = (t208 + 56U);
    t210 = *((char **)t209);
    memcpy(t210, t3, 8);
    xsi_driver_vfirst_trans(t205, 0, 31);
    t211 = (t0 + 3752);
    *((int *)t211) = 1;

LAB1:    return;
LAB6:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB7;

LAB8:    *((unsigned int *)t22) = 1;
    goto LAB11;

LAB10:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB11;

LAB12:    t34 = (t0 + 1368U);
    t35 = *((char **)t34);
    memset(t36, 0, 8);
    t34 = (t35 + 4);
    t37 = *((unsigned int *)t34);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB15;

LAB16:    if (*((unsigned int *)t34) != 0)
        goto LAB17;

LAB18:    t44 = *((unsigned int *)t22);
    t45 = *((unsigned int *)t36);
    t46 = (t44 & t45);
    *((unsigned int *)t43) = t46;
    t47 = (t22 + 4);
    t48 = (t36 + 4);
    t49 = (t43 + 4);
    t50 = *((unsigned int *)t47);
    t51 = *((unsigned int *)t48);
    t52 = (t50 | t51);
    *((unsigned int *)t49) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 != 0);
    if (t54 == 1)
        goto LAB19;

LAB20:
LAB21:    goto LAB14;

LAB15:    *((unsigned int *)t36) = 1;
    goto LAB18;

LAB17:    t42 = (t36 + 4);
    *((unsigned int *)t36) = 1;
    *((unsigned int *)t42) = 1;
    goto LAB18;

LAB19:    t55 = *((unsigned int *)t43);
    t56 = *((unsigned int *)t49);
    *((unsigned int *)t43) = (t55 | t56);
    t57 = (t22 + 4);
    t58 = (t36 + 4);
    t59 = *((unsigned int *)t22);
    t60 = (~(t59));
    t61 = *((unsigned int *)t57);
    t62 = (~(t61));
    t63 = *((unsigned int *)t36);
    t64 = (~(t63));
    t65 = *((unsigned int *)t58);
    t66 = (~(t65));
    t67 = (t60 & t62);
    t68 = (t64 & t66);
    t69 = (~(t67));
    t70 = (~(t68));
    t71 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t71 & t69);
    t72 = *((unsigned int *)t49);
    *((unsigned int *)t49) = (t72 & t70);
    t73 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t73 & t69);
    t74 = *((unsigned int *)t43);
    *((unsigned int *)t43) = (t74 & t70);
    goto LAB21;

LAB22:    *((unsigned int *)t4) = 1;
    goto LAB25;

LAB24:    t81 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t81) = 1;
    goto LAB25;

LAB26:    t86 = (t0 + 1208U);
    t87 = *((char **)t86);
    t86 = (t0 + 2008U);
    t90 = *((char **)t86);
    t86 = ((char*)((ng2)));
    t92 = (t0 + 2008U);
    t93 = *((char **)t92);
    memset(t94, 0, 8);
    t92 = (t94 + 4);
    t95 = (t93 + 4);
    t96 = *((unsigned int *)t93);
    t97 = (t96 >> 15);
    t98 = (t97 & 1);
    *((unsigned int *)t94) = t98;
    t99 = *((unsigned int *)t95);
    t100 = (t99 >> 15);
    t101 = (t100 & 1);
    *((unsigned int *)t92) = t101;
    xsi_vlog_mul_concat(t91, 16, 1, t86, 1U, t94, 1);
    xsi_vlogtype_concat(t89, 32, 32, 2U, t91, 16, t90, 16);
    t102 = ((char*)((ng3)));
    memset(t103, 0, 8);
    xsi_vlog_unsigned_lshift(t103, 32, t89, 32, t102, 32);
    memset(t104, 0, 8);
    xsi_vlog_unsigned_add(t104, 32, t87, 32, t103, 32);
    goto LAB27;

LAB28:    t111 = (t0 + 1528U);
    t112 = *((char **)t111);
    t111 = ((char*)((ng4)));
    memset(t113, 0, 8);
    t114 = (t112 + 4);
    t115 = (t111 + 4);
    t116 = *((unsigned int *)t112);
    t117 = *((unsigned int *)t111);
    t118 = (t116 ^ t117);
    t119 = *((unsigned int *)t114);
    t120 = *((unsigned int *)t115);
    t121 = (t119 ^ t120);
    t122 = (t118 | t121);
    t123 = *((unsigned int *)t114);
    t124 = *((unsigned int *)t115);
    t125 = (t123 | t124);
    t126 = (~(t125));
    t127 = (t122 & t126);
    if (t127 != 0)
        goto LAB38;

LAB35:    if (t125 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t113) = 1;

LAB38:    memset(t110, 0, 8);
    t129 = (t113 + 4);
    t130 = *((unsigned int *)t129);
    t131 = (~(t130));
    t132 = *((unsigned int *)t113);
    t133 = (t132 & t131);
    t134 = (t133 & 1U);
    if (t134 != 0)
        goto LAB39;

LAB40:    if (*((unsigned int *)t129) != 0)
        goto LAB41;

LAB42:    t136 = (t110 + 4);
    t137 = *((unsigned int *)t110);
    t138 = *((unsigned int *)t136);
    t139 = (t137 || t138);
    if (t139 > 0)
        goto LAB43;

LAB44:    t153 = *((unsigned int *)t110);
    t154 = (~(t153));
    t155 = *((unsigned int *)t136);
    t156 = (t154 || t155);
    if (t156 > 0)
        goto LAB45;

LAB46:    if (*((unsigned int *)t136) > 0)
        goto LAB47;

LAB48:    if (*((unsigned int *)t110) > 0)
        goto LAB49;

LAB50:    memcpy(t109, t157, 8);

LAB51:    goto LAB29;

LAB30:    xsi_vlog_unsigned_bit_combine(t3, 32, t104, 32, t109, 32);
    goto LAB34;

LAB32:    memcpy(t3, t104, 8);
    goto LAB34;

LAB37:    t128 = (t113 + 4);
    *((unsigned int *)t113) = 1;
    *((unsigned int *)t128) = 1;
    goto LAB38;

LAB39:    *((unsigned int *)t110) = 1;
    goto LAB42;

LAB41:    t135 = (t110 + 4);
    *((unsigned int *)t110) = 1;
    *((unsigned int *)t135) = 1;
    goto LAB42;

LAB43:    t141 = ((char*)((ng5)));
    t142 = (t0 + 1688U);
    t143 = *((char **)t142);
    t142 = (t0 + 1048U);
    t145 = *((char **)t142);
    memset(t144, 0, 8);
    t142 = (t144 + 4);
    t146 = (t145 + 4);
    t147 = *((unsigned int *)t145);
    t148 = (t147 >> 28);
    *((unsigned int *)t144) = t148;
    t149 = *((unsigned int *)t146);
    t150 = (t149 >> 28);
    *((unsigned int *)t142) = t150;
    t151 = *((unsigned int *)t144);
    *((unsigned int *)t144) = (t151 & 15U);
    t152 = *((unsigned int *)t142);
    *((unsigned int *)t142) = (t152 & 15U);
    xsi_vlogtype_concat(t140, 32, 32, 3U, t144, 4, t143, 26, t141, 2);
    goto LAB44;

LAB45:    t159 = (t0 + 1528U);
    t160 = *((char **)t159);
    t159 = ((char*)((ng6)));
    memset(t161, 0, 8);
    t162 = (t160 + 4);
    t163 = (t159 + 4);
    t164 = *((unsigned int *)t160);
    t165 = *((unsigned int *)t159);
    t166 = (t164 ^ t165);
    t167 = *((unsigned int *)t162);
    t168 = *((unsigned int *)t163);
    t169 = (t167 ^ t168);
    t170 = (t166 | t169);
    t171 = *((unsigned int *)t162);
    t172 = *((unsigned int *)t163);
    t173 = (t171 | t172);
    t174 = (~(t173));
    t175 = (t170 & t174);
    if (t175 != 0)
        goto LAB55;

LAB52:    if (t173 != 0)
        goto LAB54;

LAB53:    *((unsigned int *)t161) = 1;

LAB55:    memset(t158, 0, 8);
    t177 = (t161 + 4);
    t178 = *((unsigned int *)t177);
    t179 = (~(t178));
    t180 = *((unsigned int *)t161);
    t181 = (t180 & t179);
    t182 = (t181 & 1U);
    if (t182 != 0)
        goto LAB56;

LAB57:    if (*((unsigned int *)t177) != 0)
        goto LAB58;

LAB59:    t184 = (t158 + 4);
    t185 = *((unsigned int *)t158);
    t186 = *((unsigned int *)t184);
    t187 = (t185 || t186);
    if (t187 > 0)
        goto LAB60;

LAB61:    t201 = *((unsigned int *)t158);
    t202 = (~(t201));
    t203 = *((unsigned int *)t184);
    t204 = (t202 || t203);
    if (t204 > 0)
        goto LAB62;

LAB63:    if (*((unsigned int *)t184) > 0)
        goto LAB64;

LAB65:    if (*((unsigned int *)t158) > 0)
        goto LAB66;

LAB67:    memcpy(t157, t206, 8);

LAB68:    goto LAB46;

LAB47:    xsi_vlog_unsigned_bit_combine(t109, 32, t140, 32, t157, 32);
    goto LAB51;

LAB49:    memcpy(t109, t140, 8);
    goto LAB51;

LAB54:    t176 = (t161 + 4);
    *((unsigned int *)t161) = 1;
    *((unsigned int *)t176) = 1;
    goto LAB55;

LAB56:    *((unsigned int *)t158) = 1;
    goto LAB59;

LAB58:    t183 = (t158 + 4);
    *((unsigned int *)t158) = 1;
    *((unsigned int *)t183) = 1;
    goto LAB59;

LAB60:    t189 = ((char*)((ng5)));
    t190 = (t0 + 1688U);
    t191 = *((char **)t190);
    t190 = (t0 + 1048U);
    t193 = *((char **)t190);
    memset(t192, 0, 8);
    t190 = (t192 + 4);
    t194 = (t193 + 4);
    t195 = *((unsigned int *)t193);
    t196 = (t195 >> 28);
    *((unsigned int *)t192) = t196;
    t197 = *((unsigned int *)t194);
    t198 = (t197 >> 28);
    *((unsigned int *)t190) = t198;
    t199 = *((unsigned int *)t192);
    *((unsigned int *)t192) = (t199 & 15U);
    t200 = *((unsigned int *)t190);
    *((unsigned int *)t190) = (t200 & 15U);
    xsi_vlogtype_concat(t188, 32, 32, 3U, t192, 4, t191, 26, t189, 2);
    goto LAB61;

LAB62:    t205 = (t0 + 1208U);
    t206 = *((char **)t205);
    goto LAB63;

LAB64:    xsi_vlog_unsigned_bit_combine(t157, 32, t188, 32, t206, 32);
    goto LAB68;

LAB66:    memcpy(t157, t188, 8);
    goto LAB68;

}


extern void work_m_00000000002518596952_0757879789_init()
{
	static char *pe[] = {(void *)Cont_14_0,(void *)Cont_16_1};
	xsi_register_didat("work_m_00000000002518596952_0757879789", "isim/whole_tb_isim_beh.exe.sim/work/m_00000000002518596952_0757879789.didat");
	xsi_register_executes(pe);
}
