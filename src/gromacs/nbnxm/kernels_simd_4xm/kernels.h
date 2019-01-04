/*
 * This file is part of the GROMACS molecular simulation package.
 *
 * Copyright (c) 2012,2013,2014,2015,2019, by the GROMACS development team, led by
 * Mark Abraham, David van der Spoel, Berk Hess, and Erik Lindahl,
 * and including many others, as listed in the AUTHORS file in the
 * top-level source directory and at http://www.gromacs.org.
 *
 * GROMACS is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation; either version 2.1
 * of the License, or (at your option) any later version.
 *
 * GROMACS is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with GROMACS; if not, see
 * http://www.gnu.org/licenses, or write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA.
 *
 * If you want to redistribute modifications to GROMACS, please
 * consider that scientific software is very special. Version
 * control is crucial - bugs must be traceable. We will be happy to
 * consider code for inclusion in the official distribution, but
 * derived work must not be called official GROMACS. Details are found
 * in the README & COPYING files - if they are missing, get the
 * official version at http://www.gromacs.org.
 *
 * To help us fund GROMACS development, we humbly ask that you cite
 * the research papers on the package. Check out http://www.gromacs.org.
 */
/*
 * Note: this file was generated by the Verlet kernel generator for
 * kernel type 4xm.
 */


#include "gromacs/nbnxm/kernel_common.h"

/* Declare all the different kernel functions.
 */
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJCombLB_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJ_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJFSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJPSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJEwCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJCombLB_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJ_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJFSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJPSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJCombLB_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJ_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJFSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJPSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJEwCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJ_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_VgrpF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VgrpF_4xm;

nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJCombLB_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJ_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJFSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJPSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecRF_VdwLJEwCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJCombLB_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJ_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJFSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJPSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJCombLB_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJ_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJFSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJPSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEw_VdwLJEwCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJ_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_VF_4xm;
nbk_func_ener         nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VF_4xm;

nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJCombLB_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJ_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJFSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJPSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecRF_VdwLJEwCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJCombLB_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJ_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJFSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJPSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJCombLB_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJ_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJFSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJPSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEw_VdwLJEwCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJ_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_F_4xm;
nbk_func_noener       nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_F_4xm;



#ifdef INCLUDE_KERNELFUNCTION_TABLES

/* Declare and define the kernel function pointer lookup tables.
 * The minor index of the array goes over both the LJ combination rules,
 * which is only supported by plain cut-off, and the LJ switch/PME functions.
 */
p_nbk_func_noener nbnxm_kernel_noener_simd_4xm[coulktNR][vdwktNR] =
{
    {
        nbnxm_kernel_ElecRF_VdwLJCombGeom_F_4xm,
        nbnxm_kernel_ElecRF_VdwLJCombLB_F_4xm,
        nbnxm_kernel_ElecRF_VdwLJ_F_4xm,
        nbnxm_kernel_ElecRF_VdwLJFSw_F_4xm,
        nbnxm_kernel_ElecRF_VdwLJPSw_F_4xm,
        nbnxm_kernel_ElecRF_VdwLJEwCombGeom_F_4xm,
    },
    {
        nbnxm_kernel_ElecQSTab_VdwLJCombGeom_F_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJCombLB_F_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJ_F_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJFSw_F_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJPSw_F_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_F_4xm,
    },
    {
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_F_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_F_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_F_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_F_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_F_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_F_4xm,
    },
    {
        nbnxm_kernel_ElecEw_VdwLJCombGeom_F_4xm,
        nbnxm_kernel_ElecEw_VdwLJCombLB_F_4xm,
        nbnxm_kernel_ElecEw_VdwLJ_F_4xm,
        nbnxm_kernel_ElecEw_VdwLJFSw_F_4xm,
        nbnxm_kernel_ElecEw_VdwLJPSw_F_4xm,
        nbnxm_kernel_ElecEw_VdwLJEwCombGeom_F_4xm,
    },
    {
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_F_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_F_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJ_F_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_F_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_F_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_F_4xm,
    },
};

p_nbk_func_ener nbnxm_kernel_ener_simd_4xm[coulktNR][vdwktNR] =
{
    {
        nbnxm_kernel_ElecRF_VdwLJCombGeom_VF_4xm,
        nbnxm_kernel_ElecRF_VdwLJCombLB_VF_4xm,
        nbnxm_kernel_ElecRF_VdwLJ_VF_4xm,
        nbnxm_kernel_ElecRF_VdwLJFSw_VF_4xm,
        nbnxm_kernel_ElecRF_VdwLJPSw_VF_4xm,
        nbnxm_kernel_ElecRF_VdwLJEwCombGeom_VF_4xm,
    },
    {
        nbnxm_kernel_ElecQSTab_VdwLJCombGeom_VF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJCombLB_VF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJ_VF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJFSw_VF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJPSw_VF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_VF_4xm,
    },
    {
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_VF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_VF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_VF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_VF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VF_4xm,
    },
    {
        nbnxm_kernel_ElecEw_VdwLJCombGeom_VF_4xm,
        nbnxm_kernel_ElecEw_VdwLJCombLB_VF_4xm,
        nbnxm_kernel_ElecEw_VdwLJ_VF_4xm,
        nbnxm_kernel_ElecEw_VdwLJFSw_VF_4xm,
        nbnxm_kernel_ElecEw_VdwLJPSw_VF_4xm,
        nbnxm_kernel_ElecEw_VdwLJEwCombGeom_VF_4xm,
    },
    {
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_VF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_VF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJ_VF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_VF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_VF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VF_4xm,
    },
};

p_nbk_func_ener nbnxm_kernel_energrp_simd_4xm[coulktNR][vdwktNR] =
{
    {
        nbnxm_kernel_ElecRF_VdwLJCombGeom_VgrpF_4xm,
        nbnxm_kernel_ElecRF_VdwLJCombLB_VgrpF_4xm,
        nbnxm_kernel_ElecRF_VdwLJ_VgrpF_4xm,
        nbnxm_kernel_ElecRF_VdwLJFSw_VgrpF_4xm,
        nbnxm_kernel_ElecRF_VdwLJPSw_VgrpF_4xm,
        nbnxm_kernel_ElecRF_VdwLJEwCombGeom_VgrpF_4xm,
    },
    {
        nbnxm_kernel_ElecQSTab_VdwLJCombGeom_VgrpF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJCombLB_VgrpF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJ_VgrpF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJFSw_VgrpF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJPSw_VgrpF_4xm,
        nbnxm_kernel_ElecQSTab_VdwLJEwCombGeom_VgrpF_4xm,
    },
    {
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombGeom_VgrpF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJCombLB_VgrpF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJ_VgrpF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJFSw_VgrpF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJPSw_VgrpF_4xm,
        nbnxm_kernel_ElecQSTabTwinCut_VdwLJEwCombGeom_VgrpF_4xm,
    },
    {
        nbnxm_kernel_ElecEw_VdwLJCombGeom_VgrpF_4xm,
        nbnxm_kernel_ElecEw_VdwLJCombLB_VgrpF_4xm,
        nbnxm_kernel_ElecEw_VdwLJ_VgrpF_4xm,
        nbnxm_kernel_ElecEw_VdwLJFSw_VgrpF_4xm,
        nbnxm_kernel_ElecEw_VdwLJPSw_VgrpF_4xm,
        nbnxm_kernel_ElecEw_VdwLJEwCombGeom_VgrpF_4xm,
    },
    {
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombGeom_VgrpF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJCombLB_VgrpF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJ_VgrpF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJFSw_VgrpF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJPSw_VgrpF_4xm,
        nbnxm_kernel_ElecEwTwinCut_VdwLJEwCombGeom_VgrpF_4xm,
    },
};


#endif /* INCLUDE_KERNELFUNCTION_TABLES */
