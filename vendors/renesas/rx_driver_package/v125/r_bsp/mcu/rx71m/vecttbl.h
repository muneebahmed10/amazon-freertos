/***********************************************************************************************************************
* DISCLAIMER
* This software is supplied by Renesas Electronics Corporation and is only intended for use with Renesas products. No 
* other uses are authorized. This software is owned by Renesas Electronics Corporation and is protected under all 
* applicable laws, including copyright laws. 
* THIS SOFTWARE IS PROVIDED "AS IS" AND RENESAS MAKES NO WARRANTIES REGARDING
* THIS SOFTWARE, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING BUT NOT LIMITED TO WARRANTIES OF MERCHANTABILITY, 
* FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT. ALL SUCH WARRANTIES ARE EXPRESSLY DISCLAIMED. TO THE MAXIMUM 
* EXTENT PERMITTED NOT PROHIBITED BY LAW, NEITHER RENESAS ELECTRONICS CORPORATION NOR ANY OF ITS AFFILIATED COMPANIES 
* SHALL BE LIABLE FOR ANY DIRECT, INDIRECT, SPECIAL, INCIDENTAL OR CONSEQUENTIAL DAMAGES FOR ANY REASON RELATED TO THIS 
* SOFTWARE, EVEN IF RENESAS OR ITS AFFILIATES HAVE BEEN ADVISED OF THE POSSIBILITY OF SUCH DAMAGES.
* Renesas reserves the right, without notice, to make changes to this software and to discontinue the availability of 
* this software. By using this software, you agree to the additional terms and conditions found by accessing the 
* following link:
* http://www.renesas.com/disclaimer
*
* Copyright (C) 2013 Renesas Electronics Corporation. All rights reserved.
***********************************************************************************************************************/
/***********************************************************************************************************************
* File Name    : vecttbl.h
* Description  : Has function prototypes for exception callback functions.
***********************************************************************************************************************/
/***********************************************************************************************************************
* History : DD.MM.YYYY Version  Description
*         : 16.07.2012 1.00     First Release.
*         : 19.11.2012 1.10     Updated code to use 'BSP_' and 'BSP_CFG_' prefix for macros.
*         : 21.06.2013 1.20     Removed prototypes for static callbacks since dynamic callbacks are now used.
*         : 28.02.2019 1.21     Fixed coding style.
*         : 31.07.2019 1.22     Added typedef for option-setting memory.
***********************************************************************************************************************/

/***********************************************************************************************************************
Includes   <System Includes> , "Project Includes"
***********************************************************************************************************************/

/***********************************************************************************************************************
Macro definitions
***********************************************************************************************************************/
/* Multiple inclusion prevention macro */
#ifndef VECTTBL_HEADER_INC
#define VECTTBL_HEADER_INC

/***********************************************************************************************************************
Typedef definitions
***********************************************************************************************************************/
#if defined(__GNUC__)
typedef struct st_ofsm_sec_ofs3
{
    uint32_t __OSIS1reg;
    uint32_t __OSIS2reg;
    uint32_t __OSIS3reg;
    uint32_t __OSIS4reg;
} st_ofsm_sec_ofs3_t;

typedef struct st_ofsm_sec_ofs4
{
    uint32_t __TMINFreg;
    uint32_t __MDEreg;
    uint32_t __OFS0reg;
    uint32_t __OFS1reg;
} st_ofsm_sec_ofs4_t;
#endif /* defined(__GNUC__) */

/***********************************************************************************************************************
Exported global functions (to be accessed by other files)
***********************************************************************************************************************/

#endif /* VECTTBL_HEADER_INC */

