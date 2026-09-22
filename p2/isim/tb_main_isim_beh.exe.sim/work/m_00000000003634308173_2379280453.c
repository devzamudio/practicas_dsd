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
static const char *ng0 = "C:/Users/ESCOM/Desktop/temporal_p2/p2/flipflop_t.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};



static void Always_29_0(char *t0)
{
    char t13[8];
    char t21[8];
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
    char *t20;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    char *t38;

LAB0:    t1 = (t0 + 2848U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 3168);
    *((int *)t2) = 1;
    t3 = (t0 + 2880);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(30, ng0);

LAB5:    xsi_set_current_line(31, ng0);
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

LAB7:    xsi_set_current_line(35, ng0);

LAB10:    xsi_set_current_line(36, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    *((unsigned int *)t13) = t8;
    t11 = (t3 + 4);
    t12 = (t5 + 4);
    t14 = (t13 + 4);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 | t10);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB11;

LAB12:
LAB13:    t20 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t20, t13, 0, 0, 1, 0LL);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = (t0 + 1768);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t5);
    t8 = (t6 ^ t7);
    *((unsigned int *)t21) = t8;
    t11 = (t3 + 4);
    t12 = (t5 + 4);
    t14 = (t21 + 4);
    t9 = *((unsigned int *)t11);
    t10 = *((unsigned int *)t12);
    t15 = (t9 | t10);
    *((unsigned int *)t14) = t15;
    t16 = *((unsigned int *)t14);
    t17 = (t16 != 0);
    if (t17 == 1)
        goto LAB14;

LAB15:
LAB16:    memset(t13, 0, 8);
    t20 = (t21 + 4);
    t22 = *((unsigned int *)t20);
    t23 = (~(t22));
    t24 = *((unsigned int *)t21);
    t25 = (t24 & t23);
    t26 = (t25 & 1U);
    if (t26 != 0)
        goto LAB20;

LAB18:    if (*((unsigned int *)t20) == 0)
        goto LAB17;

LAB19:    t27 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t27) = 1;

LAB20:    t28 = (t13 + 4);
    t29 = (t21 + 4);
    t30 = *((unsigned int *)t21);
    t31 = (~(t30));
    *((unsigned int *)t13) = t31;
    *((unsigned int *)t28) = 0;
    if (*((unsigned int *)t29) != 0)
        goto LAB22;

LAB21:    t36 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t36 & 1U);
    t37 = *((unsigned int *)t28);
    *((unsigned int *)t28) = (t37 & 1U);
    t38 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t38, t13, 0, 0, 1, 0LL);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);

LAB9:    xsi_set_current_line(32, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 1768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB8;

LAB11:    t18 = *((unsigned int *)t13);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t13) = (t18 | t19);
    goto LAB13;

LAB14:    t18 = *((unsigned int *)t21);
    t19 = *((unsigned int *)t14);
    *((unsigned int *)t21) = (t18 | t19);
    goto LAB16;

LAB17:    *((unsigned int *)t13) = 1;
    goto LAB20;

LAB22:    t32 = *((unsigned int *)t13);
    t33 = *((unsigned int *)t29);
    *((unsigned int *)t13) = (t32 | t33);
    t34 = *((unsigned int *)t28);
    t35 = *((unsigned int *)t29);
    *((unsigned int *)t28) = (t34 | t35);
    goto LAB21;

}


extern void work_m_00000000003634308173_2379280453_init()
{
	static char *pe[] = {(void *)Always_29_0};
	xsi_register_didat("work_m_00000000003634308173_2379280453", "isim/tb_main_isim_beh.exe.sim/work/m_00000000003634308173_2379280453.didat");
	xsi_register_executes(pe);
}
