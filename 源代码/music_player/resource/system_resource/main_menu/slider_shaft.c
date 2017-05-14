/*********************************************************************
*                SEGGER Microcontroller GmbH & Co. KG                *
*        Solutions for real time microcontroller applications        *
*                           www.segger.com                           *
**********************************************************************
*                                                                    *
* C-file generated by                                                *
*                                                                    *
*        Bitmap Converter for emWin V5.26a.                          *
*        Compiled Aug 20 2014, 15:23:27                              *
*                                                                    *
*        (c) 1998 - 2014 Segger Microcontroller GmbH & Co. KG        *
*                                                                    *
**********************************************************************
*                                                                    *
* Source file: slider_shaft                                          *
* Dimensions:  196 * 10                                              *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP g_slider_shaft;

static GUI_CONST_STORAGE unsigned long g_res_slider_shaft[] = {
  0xFFEEE4DC, 0xC0EEE4DC, 0x28EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x27EEE4DC, 0xBFEEE4DC, 0xFFFFFFFF,
  0xE1EEE4DC, 0x0EEEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x0EEEE4DC, 0xE1EEE4DC,
  0x73EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x72EEE4DC,
  0x29EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x29EEE4DC,
  0x08EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x08EEE4DC,
  0x08EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x08EEE4DC,
  0x29EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x29EEE4DC,
  0x72EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x70EEE4DC,
  0xE0EEE4DC, 0x0EEEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x0EEEE4DC, 0xE0EEE4DC,
  0xFFEEE4DC, 0xBEEEE4DC, 0x27EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 
        0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x00EEE4DC, 0x26EEE4DC, 0xBEEEE4DC, 0xFFFFFFFF
};

GUI_CONST_STORAGE GUI_BITMAP g_slider_shaft = {
  196, // xSize
  10, // ySize
  784, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)g_res_slider_shaft,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/
