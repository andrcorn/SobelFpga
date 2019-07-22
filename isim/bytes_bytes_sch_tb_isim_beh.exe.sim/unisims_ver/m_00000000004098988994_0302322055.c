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



static void Always_33_0(char *t0)
{
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

LAB0:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1796);
    *((int *)t2) = 1;
    t3 = (t0 + 1640);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    t4 = (t0 + 784U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB5;

LAB6:
LAB9:    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1104);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    t2 = (t0 + 692U);
    t3 = *((char **)t2);
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);

LAB7:    goto LAB2;

LAB5:
LAB8:    t11 = (t0 + 600U);
    t12 = *((char **)t11);
    t11 = (t0 + 1104);
    xsi_vlogvar_assign_value(t11, t12, 0, 0, 1);
    t2 = (t0 + 600U);
    t3 = *((char **)t2);
    t2 = (t0 + 1012);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 1);
    goto LAB7;

}


extern void unisims_ver_m_00000000004098988994_0302322055_init()
{
	static char *pe[] = {(void *)Always_33_0};
	xsi_register_didat("unisims_ver_m_00000000004098988994_0302322055", "isim/bytes_bytes_sch_tb_isim_beh.exe.sim/unisims_ver/m_00000000004098988994_0302322055.didat");
	xsi_register_executes(pe);
}