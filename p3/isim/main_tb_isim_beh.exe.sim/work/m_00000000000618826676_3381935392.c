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
static const char *ng0 = "C:/Users/ESCOM/Desktop/practicas_dsd-main/p3/flipflop_jk.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_30_0(char *t0)
{
    char t13[8];
    char t25[8];
    char t59[8];
    char t78[8];
    char t110[8];
    char t139[8];
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
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    int t48;
    int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    char *t92;
    char *t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    unsigned int t97;
    unsigned int t98;
    unsigned int t99;
    unsigned int t100;
    unsigned int t101;
    int t102;
    int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    unsigned int t107;
    unsigned int t108;
    unsigned int t109;
    unsigned int t111;
    unsigned int t112;
    unsigned int t113;
    char *t114;
    char *t115;
    char *t116;
    unsigned int t117;
    unsigned int t118;
    unsigned int t119;
    unsigned int t120;
    unsigned int t121;
    unsigned int t122;
    unsigned int t123;
    char *t124;
    char *t125;
    unsigned int t126;
    unsigned int t127;
    unsigned int t128;
    int t129;
    unsigned int t130;
    unsigned int t131;
    unsigned int t132;
    int t133;
    unsigned int t134;
    unsigned int t135;
    unsigned int t136;
    unsigned int t137;
    char *t138;
    unsigned int t140;
    unsigned int t141;
    unsigned int t142;
    unsigned int t143;
    unsigned int t144;
    char *t145;
    char *t146;
    char *t147;
    unsigned int t148;
    unsigned int t149;
    unsigned int t150;
    unsigned int t151;
    unsigned int t152;
    unsigned int t153;
    unsigned int t154;
    unsigned int t155;
    char *t156;

LAB0:    t1 = (t0 + 3008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 3328);
    *((int *)t2) = 1;
    t3 = (t0 + 3040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(31, ng0);

LAB5:    xsi_set_current_line(32, ng0);
    t4 = (t0 + 1208U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);

LAB10:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB14;

LAB12:    if (*((unsigned int *)t5) == 0)
        goto LAB11;

LAB13:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;

LAB14:    t12 = (t13 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t13) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB16;

LAB15:    t21 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t13);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t25) = t28;
    t23 = (t13 + 4);
    t29 = (t24 + 4);
    t30 = (t25 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB17;

LAB18:
LAB19:    t56 = (t0 + 1928);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = (t0 + 1528U);
    t61 = *((char **)t60);
    memset(t59, 0, 8);
    t60 = (t61 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t61);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB23;

LAB21:    if (*((unsigned int *)t60) == 0)
        goto LAB20;

LAB22:    t67 = (t59 + 4);
    *((unsigned int *)t59) = 1;
    *((unsigned int *)t67) = 1;

LAB23:    t68 = (t59 + 4);
    t69 = (t61 + 4);
    t70 = *((unsigned int *)t61);
    t71 = (~(t70));
    *((unsigned int *)t59) = t71;
    *((unsigned int *)t68) = 0;
    if (*((unsigned int *)t69) != 0)
        goto LAB25;

LAB24:    t76 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t76 & 1U);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t77 & 1U);
    t79 = *((unsigned int *)t58);
    t80 = *((unsigned int *)t59);
    t81 = (t79 & t80);
    *((unsigned int *)t78) = t81;
    t82 = (t58 + 4);
    t83 = (t59 + 4);
    t84 = (t78 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB26;

LAB27:
LAB28:    t111 = *((unsigned int *)t25);
    t112 = *((unsigned int *)t78);
    t113 = (t111 | t112);
    *((unsigned int *)t110) = t113;
    t114 = (t25 + 4);
    t115 = (t78 + 4);
    t116 = (t110 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB29;

LAB30:
LAB31:    t138 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t138, t110, 0, 0, 1, 0LL);
    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t25, 0, 8);
    t5 = (t4 + 4);
    t6 = *((unsigned int *)t5);
    t7 = (~(t6));
    t8 = *((unsigned int *)t4);
    t9 = (t8 & t7);
    t10 = (t9 & 1U);
    if (t10 != 0)
        goto LAB35;

LAB33:    if (*((unsigned int *)t5) == 0)
        goto LAB32;

LAB34:    t11 = (t25 + 4);
    *((unsigned int *)t25) = 1;
    *((unsigned int *)t11) = 1;

LAB35:    t12 = (t25 + 4);
    t14 = (t4 + 4);
    t15 = *((unsigned int *)t4);
    t16 = (~(t15));
    *((unsigned int *)t25) = t16;
    *((unsigned int *)t12) = 0;
    if (*((unsigned int *)t14) != 0)
        goto LAB37;

LAB36:    t21 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t21 & 1U);
    t22 = *((unsigned int *)t12);
    *((unsigned int *)t12) = (t22 & 1U);
    t23 = (t0 + 1368U);
    t24 = *((char **)t23);
    t26 = *((unsigned int *)t25);
    t27 = *((unsigned int *)t24);
    t28 = (t26 & t27);
    *((unsigned int *)t59) = t28;
    t23 = (t25 + 4);
    t29 = (t24 + 4);
    t30 = (t59 + 4);
    t31 = *((unsigned int *)t23);
    t32 = *((unsigned int *)t29);
    t33 = (t31 | t32);
    *((unsigned int *)t30) = t33;
    t34 = *((unsigned int *)t30);
    t35 = (t34 != 0);
    if (t35 == 1)
        goto LAB38;

LAB39:
LAB40:    t56 = (t0 + 1928);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    t60 = (t0 + 1528U);
    t61 = *((char **)t60);
    memset(t78, 0, 8);
    t60 = (t61 + 4);
    t62 = *((unsigned int *)t60);
    t63 = (~(t62));
    t64 = *((unsigned int *)t61);
    t65 = (t64 & t63);
    t66 = (t65 & 1U);
    if (t66 != 0)
        goto LAB44;

LAB42:    if (*((unsigned int *)t60) == 0)
        goto LAB41;

LAB43:    t67 = (t78 + 4);
    *((unsigned int *)t78) = 1;
    *((unsigned int *)t67) = 1;

LAB44:    t68 = (t78 + 4);
    t69 = (t61 + 4);
    t70 = *((unsigned int *)t61);
    t71 = (~(t70));
    *((unsigned int *)t78) = t71;
    *((unsigned int *)t68) = 0;
    if (*((unsigned int *)t69) != 0)
        goto LAB46;

LAB45:    t76 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t76 & 1U);
    t77 = *((unsigned int *)t68);
    *((unsigned int *)t68) = (t77 & 1U);
    t79 = *((unsigned int *)t58);
    t80 = *((unsigned int *)t78);
    t81 = (t79 & t80);
    *((unsigned int *)t110) = t81;
    t82 = (t58 + 4);
    t83 = (t78 + 4);
    t84 = (t110 + 4);
    t85 = *((unsigned int *)t82);
    t86 = *((unsigned int *)t83);
    t87 = (t85 | t86);
    *((unsigned int *)t84) = t87;
    t88 = *((unsigned int *)t84);
    t89 = (t88 != 0);
    if (t89 == 1)
        goto LAB47;

LAB48:
LAB49:    t111 = *((unsigned int *)t59);
    t112 = *((unsigned int *)t110);
    t113 = (t111 | t112);
    *((unsigned int *)t139) = t113;
    t114 = (t59 + 4);
    t115 = (t110 + 4);
    t116 = (t139 + 4);
    t117 = *((unsigned int *)t114);
    t118 = *((unsigned int *)t115);
    t119 = (t117 | t118);
    *((unsigned int *)t116) = t119;
    t120 = *((unsigned int *)t116);
    t121 = (t120 != 0);
    if (t121 == 1)
        goto LAB50;

LAB51:
LAB52:    memset(t13, 0, 8);
    t138 = (t139 + 4);
    t140 = *((unsigned int *)t138);
    t141 = (~(t140));
    t142 = *((unsigned int *)t139);
    t143 = (t142 & t141);
    t144 = (t143 & 1U);
    if (t144 != 0)
        goto LAB56;

LAB54:    if (*((unsigned int *)t138) == 0)
        goto LAB53;

LAB55:    t145 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t145) = 1;

LAB56:    t146 = (t13 + 4);
    t147 = (t139 + 4);
    t148 = *((unsigned int *)t139);
    t149 = (~(t148));
    *((unsigned int *)t13) = t149;
    *((unsigned int *)t146) = 0;
    if (*((unsigned int *)t147) != 0)
        goto LAB58;

LAB57:    t154 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t154 & 1U);
    t155 = *((unsigned int *)t146);
    *((unsigned int *)t146) = (t155 & 1U);
    t156 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t156, t13, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(32, ng0);

LAB9:    xsi_set_current_line(33, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(34, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2088);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    *((unsigned int *)t13) = 1;
    goto LAB14;

LAB16:    t17 = *((unsigned int *)t13);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB15;

LAB17:    t36 = *((unsigned int *)t25);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t25) = (t36 | t37);
    t38 = (t13 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t13);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t54 & t50);
    t55 = *((unsigned int *)t25);
    *((unsigned int *)t25) = (t55 & t51);
    goto LAB19;

LAB20:    *((unsigned int *)t59) = 1;
    goto LAB23;

LAB25:    t72 = *((unsigned int *)t59);
    t73 = *((unsigned int *)t69);
    *((unsigned int *)t59) = (t72 | t73);
    t74 = *((unsigned int *)t68);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t68) = (t74 | t75);
    goto LAB24;

LAB26:    t90 = *((unsigned int *)t78);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t78) = (t90 | t91);
    t92 = (t58 + 4);
    t93 = (t59 + 4);
    t94 = *((unsigned int *)t58);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t59);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t108 & t104);
    t109 = *((unsigned int *)t78);
    *((unsigned int *)t78) = (t109 & t105);
    goto LAB28;

LAB29:    t122 = *((unsigned int *)t110);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t110) = (t122 | t123);
    t124 = (t25 + 4);
    t125 = (t78 + 4);
    t126 = *((unsigned int *)t124);
    t127 = (~(t126));
    t128 = *((unsigned int *)t25);
    t129 = (t128 & t127);
    t130 = *((unsigned int *)t125);
    t131 = (~(t130));
    t132 = *((unsigned int *)t78);
    t133 = (t132 & t131);
    t134 = (~(t129));
    t135 = (~(t133));
    t136 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t136 & t134);
    t137 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t137 & t135);
    goto LAB31;

LAB32:    *((unsigned int *)t25) = 1;
    goto LAB35;

LAB37:    t17 = *((unsigned int *)t25);
    t18 = *((unsigned int *)t14);
    *((unsigned int *)t25) = (t17 | t18);
    t19 = *((unsigned int *)t12);
    t20 = *((unsigned int *)t14);
    *((unsigned int *)t12) = (t19 | t20);
    goto LAB36;

LAB38:    t36 = *((unsigned int *)t59);
    t37 = *((unsigned int *)t30);
    *((unsigned int *)t59) = (t36 | t37);
    t38 = (t25 + 4);
    t39 = (t24 + 4);
    t40 = *((unsigned int *)t25);
    t41 = (~(t40));
    t42 = *((unsigned int *)t38);
    t43 = (~(t42));
    t44 = *((unsigned int *)t24);
    t45 = (~(t44));
    t46 = *((unsigned int *)t39);
    t47 = (~(t46));
    t48 = (t41 & t43);
    t49 = (t45 & t47);
    t50 = (~(t48));
    t51 = (~(t49));
    t52 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t52 & t50);
    t53 = *((unsigned int *)t30);
    *((unsigned int *)t30) = (t53 & t51);
    t54 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t54 & t50);
    t55 = *((unsigned int *)t59);
    *((unsigned int *)t59) = (t55 & t51);
    goto LAB40;

LAB41:    *((unsigned int *)t78) = 1;
    goto LAB44;

LAB46:    t72 = *((unsigned int *)t78);
    t73 = *((unsigned int *)t69);
    *((unsigned int *)t78) = (t72 | t73);
    t74 = *((unsigned int *)t68);
    t75 = *((unsigned int *)t69);
    *((unsigned int *)t68) = (t74 | t75);
    goto LAB45;

LAB47:    t90 = *((unsigned int *)t110);
    t91 = *((unsigned int *)t84);
    *((unsigned int *)t110) = (t90 | t91);
    t92 = (t58 + 4);
    t93 = (t78 + 4);
    t94 = *((unsigned int *)t58);
    t95 = (~(t94));
    t96 = *((unsigned int *)t92);
    t97 = (~(t96));
    t98 = *((unsigned int *)t78);
    t99 = (~(t98));
    t100 = *((unsigned int *)t93);
    t101 = (~(t100));
    t102 = (t95 & t97);
    t103 = (t99 & t101);
    t104 = (~(t102));
    t105 = (~(t103));
    t106 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t106 & t104);
    t107 = *((unsigned int *)t84);
    *((unsigned int *)t84) = (t107 & t105);
    t108 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t108 & t104);
    t109 = *((unsigned int *)t110);
    *((unsigned int *)t110) = (t109 & t105);
    goto LAB49;

LAB50:    t122 = *((unsigned int *)t139);
    t123 = *((unsigned int *)t116);
    *((unsigned int *)t139) = (t122 | t123);
    t124 = (t59 + 4);
    t125 = (t110 + 4);
    t126 = *((unsigned int *)t124);
    t127 = (~(t126));
    t128 = *((unsigned int *)t59);
    t129 = (t128 & t127);
    t130 = *((unsigned int *)t125);
    t131 = (~(t130));
    t132 = *((unsigned int *)t110);
    t133 = (t132 & t131);
    t134 = (~(t129));
    t135 = (~(t133));
    t136 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t136 & t134);
    t137 = *((unsigned int *)t116);
    *((unsigned int *)t116) = (t137 & t135);
    goto LAB52;

LAB53:    *((unsigned int *)t13) = 1;
    goto LAB56;

LAB58:    t150 = *((unsigned int *)t13);
    t151 = *((unsigned int *)t147);
    *((unsigned int *)t13) = (t150 | t151);
    t152 = *((unsigned int *)t146);
    t153 = *((unsigned int *)t147);
    *((unsigned int *)t146) = (t152 | t153);
    goto LAB57;

}


extern void work_m_00000000000618826676_3381935392_init()
{
	static char *pe[] = {(void *)Always_30_0};
	xsi_register_didat("work_m_00000000000618826676_3381935392", "isim/main_tb_isim_beh.exe.sim/work/m_00000000000618826676_3381935392.didat");
	xsi_register_executes(pe);
}
