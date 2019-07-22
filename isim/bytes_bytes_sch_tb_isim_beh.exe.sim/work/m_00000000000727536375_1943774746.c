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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/andr/lnx/yyyy.v";
static int ng1[] = {0, 0};
static const char *ng2 = "/home/andr/lnx/tstImg/input.txt";
static const char *ng3 = "/home/andr/lnx/tstImg/output.txt";
static int ng4[] = {480, 0};
static int ng5[] = {640, 0};
static int ng6[] = {3, 0};
static int ng7[] = {1, 0};
static const char *ng8 = "0x%02h ";



static void Initial_76_0(char *t0)
{
    char t5[8];
    char t9[8];
    char t11[8];
    char t12[8];
    char t23[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t6;
    char *t7;
    char *t8;
    char *t10;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
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
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;

LAB0:    t1 = (t0 + 3916U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);

LAB4:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB5;

LAB1:    return;
LAB5:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 2944);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3036);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3128);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 8);
    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB6;
    goto LAB1;

LAB6:    xsi_set_current_line(79, ng0);
    t3 = (t0 + 3220);
    xsi_vlogfile_readmemh(ng2, 0, t3, 0, 0, 0, 0);
    xsi_set_current_line(80, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 15000LL);
    *((char **)t1) = &&LAB7;
    goto LAB1;

LAB7:    xsi_set_current_line(80, ng0);
    *((int *)t5) = xsi_vlogfile_file_open_of_cname(ng3);
    t3 = (t5 + 4);
    *((int *)t3) = 0;
    t4 = (t0 + 3404);
    xsi_vlogvar_assign_value(t4, t5, 0, 0, 32);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 80000LL);
    *((char **)t1) = &&LAB8;
    goto LAB1;

LAB8:    xsi_set_current_line(83, ng0);
    xsi_set_current_line(83, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 3312);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);

LAB9:    t2 = (t0 + 3312);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng4)));
    t7 = ((char*)((ng5)));
    t8 = ((char*)((ng6)));
    memset(t5, 0, 8);
    xsi_vlog_signed_minus(t5, 32, t7, 32, t8, 32);
    memset(t9, 0, 8);
    xsi_vlog_signed_multiply(t9, 32, t6, 32, t5, 32);
    t10 = ((char*)((ng6)));
    memset(t11, 0, 8);
    xsi_vlog_signed_multiply(t11, 32, t9, 32, t10, 32);
    memset(t12, 0, 8);
    xsi_vlog_signed_less(t12, 32, t4, 32, t11, 32);
    t13 = (t12 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t12);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 24000LL);
    *((char **)t1) = &&LAB27;
    goto LAB1;

LAB10:    xsi_set_current_line(83, ng0);

LAB12:    xsi_set_current_line(84, ng0);
    t19 = (t0 + 3816);
    xsi_process_wait(t19, 24000LL);
    *((char **)t1) = &&LAB13;
    goto LAB1;

LAB13:    xsi_set_current_line(85, ng0);
    t20 = (t0 + 3220);
    t21 = (t20 + 36U);
    t22 = *((char **)t21);
    t24 = (t0 + 3220);
    t25 = (t24 + 44U);
    t26 = *((char **)t25);
    t27 = (t0 + 3220);
    t28 = (t27 + 40U);
    t29 = *((char **)t28);
    t30 = (t0 + 3312);
    t31 = (t30 + 36U);
    t32 = *((char **)t31);
    xsi_vlog_generic_get_array_select_value(t23, 8, t22, t26, t29, 2, 1, t32, 32, 1);
    t33 = (t0 + 3128);
    xsi_vlogvar_assign_value(t33, t23, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3036);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    memset(t5, 0, 8);
    t6 = (t4 + 4);
    t14 = *((unsigned int *)t6);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t6) == 0)
        goto LAB14;

LAB16:    t7 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t7) = 1;

LAB17:    t8 = (t5 + 4);
    t10 = (t4 + 4);
    t34 = *((unsigned int *)t4);
    t35 = (~(t34));
    *((unsigned int *)t5) = t35;
    *((unsigned int *)t8) = 0;
    if (*((unsigned int *)t10) != 0)
        goto LAB19;

LAB18:    t40 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t40 & 1U);
    t41 = *((unsigned int *)t8);
    *((unsigned int *)t8) = (t41 & 1U);
    t13 = (t0 + 3036);
    xsi_vlogvar_assign_value(t13, t5, 0, 0, 1);
    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3816);
    xsi_process_wait(t2, 24000LL);
    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB14:    *((unsigned int *)t5) = 1;
    goto LAB17;

LAB19:    t36 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t10);
    *((unsigned int *)t5) = (t36 | t37);
    t38 = *((unsigned int *)t8);
    t39 = *((unsigned int *)t10);
    *((unsigned int *)t8) = (t38 | t39);
    goto LAB18;

LAB20:    xsi_set_current_line(87, ng0);
    t3 = (t0 + 3036);
    t4 = (t3 + 36U);
    t6 = *((char **)t4);
    memset(t5, 0, 8);
    t7 = (t6 + 4);
    t14 = *((unsigned int *)t7);
    t15 = (~(t14));
    t16 = *((unsigned int *)t6);
    t17 = (t16 & t15);
    t18 = (t17 & 1U);
    if (t18 != 0)
        goto LAB24;

LAB22:    if (*((unsigned int *)t7) == 0)
        goto LAB21;

LAB23:    t8 = (t5 + 4);
    *((unsigned int *)t5) = 1;
    *((unsigned int *)t8) = 1;

LAB24:    t10 = (t5 + 4);
    t13 = (t6 + 4);
    t34 = *((unsigned int *)t6);
    t35 = (~(t34));
    *((unsigned int *)t5) = t35;
    *((unsigned int *)t10) = 0;
    if (*((unsigned int *)t13) != 0)
        goto LAB26;

LAB25:    t40 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t40 & 1U);
    t41 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t41 & 1U);
    t19 = (t0 + 3036);
    xsi_vlogvar_assign_value(t19, t5, 0, 0, 1);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 3312);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t6 = ((char*)((ng7)));
    memset(t5, 0, 8);
    xsi_vlog_signed_add(t5, 32, t4, 32, t6, 32);
    t7 = (t0 + 3312);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 32);
    goto LAB9;

LAB21:    *((unsigned int *)t5) = 1;
    goto LAB24;

LAB26:    t36 = *((unsigned int *)t5);
    t37 = *((unsigned int *)t13);
    *((unsigned int *)t5) = (t36 | t37);
    t38 = *((unsigned int *)t10);
    t39 = *((unsigned int *)t13);
    *((unsigned int *)t10) = (t38 | t39);
    goto LAB25;

LAB27:    xsi_set_current_line(90, ng0);
    t3 = (t0 + 3404);
    t4 = (t3 + 36U);
    t6 = *((char **)t4);
    xsi_vlogfile_fclose(*((unsigned int *)t6));
    goto LAB1;

}

static void Always_94_1(char *t0)
{
    char t3[8];
    char *t1;
    char *t2;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t24;

LAB0:    t1 = (t0 + 4052U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(94, ng0);
    t2 = (t0 + 3952);
    xsi_process_wait(t2, 4000LL);
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(94, ng0);
    t4 = (t0 + 2944);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    memset(t3, 0, 8);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 & 1U);
    if (t12 != 0)
        goto LAB8;

LAB6:    if (*((unsigned int *)t7) == 0)
        goto LAB5;

LAB7:    t13 = (t3 + 4);
    *((unsigned int *)t3) = 1;
    *((unsigned int *)t13) = 1;

LAB8:    t14 = (t3 + 4);
    t15 = (t6 + 4);
    t16 = *((unsigned int *)t6);
    t17 = (~(t16));
    *((unsigned int *)t3) = t17;
    *((unsigned int *)t14) = 0;
    if (*((unsigned int *)t15) != 0)
        goto LAB10;

LAB9:    t22 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t22 & 1U);
    t23 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t23 & 1U);
    t24 = (t0 + 2944);
    xsi_vlogvar_assign_value(t24, t3, 0, 0, 1);
    goto LAB2;

LAB5:    *((unsigned int *)t3) = 1;
    goto LAB8;

LAB10:    t18 = *((unsigned int *)t3);
    t19 = *((unsigned int *)t15);
    *((unsigned int *)t3) = (t18 | t19);
    t20 = *((unsigned int *)t14);
    t21 = *((unsigned int *)t15);
    *((unsigned int *)t14) = (t20 | t21);
    goto LAB9;

}

static void Always_95_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    t1 = (t0 + 4188U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4368);
    *((int *)t2) = 1;
    t3 = (t0 + 4212);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(96, ng0);
    t4 = (t0 + 3404);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = (t0 + 2440U);
    t8 = *((char **)t7);
    xsi_vlogfile_fwrite(*((unsigned int *)t6), 0, 0, 1, ng8, 2, t0, (char)118, t8, 8);
    goto LAB2;

}


extern void work_m_00000000000727536375_1943774746_init()
{
	static char *pe[] = {(void *)Initial_76_0,(void *)Always_94_1,(void *)Always_95_2};
	xsi_register_didat("work_m_00000000000727536375_1943774746", "isim/bytes_bytes_sch_tb_isim_beh.exe.sim/work/m_00000000000727536375_1943774746.didat");
	xsi_register_executes(pe);
}
