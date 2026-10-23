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

#include "xsi.h"

struct XSI_INFO xsi_info;



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_00000000003859706318_2434080961_init();
    work_m_00000000003634308173_2379280453_init();
    work_m_00000000000618826676_3381935392_init();
    work_m_00000000003342508090_2526369337_init();
    work_m_00000000002814747030_0286164271_init();
    work_m_00000000000735078174_0750423891_init();
    work_m_00000000004134447467_2073120511_init();


    xsi_register_tops("work_m_00000000000735078174_0750423891");
    xsi_register_tops("work_m_00000000004134447467_2073120511");


    return xsi_run_simulation(argc, argv);

}
