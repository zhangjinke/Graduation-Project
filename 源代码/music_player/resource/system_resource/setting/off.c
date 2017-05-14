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
* Source file: off                                                   *
* Dimensions:  64 * 22                                               *
* NumColors:   32bpp: 16777216 + 256                                 *
*                                                                    *
**********************************************************************
*/

#include <stdlib.h>

#include "GUI.h"

#ifndef GUI_CONST_STORAGE
  #define GUI_CONST_STORAGE const
#endif

extern GUI_CONST_STORAGE GUI_BITMAP g_off;

static GUI_CONST_STORAGE unsigned long g_res_off[] = {
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFAFFFFFF, 0xEEFFFFFF, 0xDFFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xDFFFFFFF, 0xEEFFFFFF, 0xFAFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFCFFFFFF, 0xE7FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xE7FFFFFF, 0xFCFFFFFF, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xF8FFFFFF, 0xDBFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xDBFFFFFF, 0xF8FFFFFF, 
        0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xF8FFFFFF, 0xDBFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x36FFFFFF, 0x1BFFFFFF, 0x36FFFFFF, 0x36FFFFFF, 0x1BFFFFFF, 0x36FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xDBFFFFFF, 
        0xF8FFFFFF, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFCFFFFFF, 0xDBFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBDFFFFFF, 0x29FFFFFF, 0x44FFFFFF, 0xAFFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xAFFFFFFF, 0x44FFFFFF, 0x29FFFFFF, 0xBDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xDBFFFFFF, 0xFCFFFFFF, 0xFF000000,
  0xFF000000, 0xE4FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBDFFFFFF, 0x0EFFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x44FFFFFF, 0x1BFFFFFF, 0x1BFFFFFF, 0x44FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x0EFFFFFF, 0xBDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xE4FFFFFF, 0xFF000000,
  0xF8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x29FFFFFF, 0x87FFFFFF, 0xCAFFFFFF, 0x29FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x29FFFFFF, 0xCAFFFFFF, 0x87FFFFFF, 0x29FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xF8FFFFFF,
  0xE7FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x44FFFFFF, 0xD8FFFFFF, 0x29FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x29FFFFFF, 0xD8FFFFFF, 0x44FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD0FFFFFF, 0xA9FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x9BFFFFFF, 0xBAFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 
        0x97FFFFFF, 0xBEFFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0xD0FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xE7FFFFFF,
  0xDDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xAFFFFFFF, 0x87FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x87FFFFFF, 0xAFFFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xA3FFFFFF, 0xA3FFFFFF, 0xD4FFFFFF, 0xD8FFFFFF, 0xC6FFFFFF, 0x9BFFFFFF, 0xBEFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xDDFFFFFF,
  0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 0x44FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x51FFFFFF, 0x51FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x44FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xC2FFFFFF, 0x9BFFFFFF, 0xD4FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBAFFFFFF, 0xA3FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF,
  0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x51FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x51FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBAFFFFFF, 0xA9FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xC6FFFFFF, 0x97FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF,
  0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x51FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x51FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBAFFFFFF, 0xA9FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xC6FFFFFF, 0x97FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 
        0x97FFFFFF, 0xD0FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF,
  0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 0x44FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x51FFFFFF, 0x51FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x44FFFFFF, 0xD8FFFFFF, 0x1BFFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xC2FFFFFF, 0x9BFFFFFF, 0xD4FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBAFFFFFF, 0xA3FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF,
  0xDDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x36FFFFFF, 0xAFFFFFFF, 0x87FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x87FFFFFF, 0xAFFFFFFF, 0x36FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xA3FFFFFF, 0xA3FFFFFF, 0xD4FFFFFF, 0xD8FFFFFF, 0xC6FFFFFF, 0x9BFFFFFF, 0xBEFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xDDFFFFFF,
  0xE9FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x44FFFFFF, 0xD8FFFFFF, 0x29FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x29FFFFFF, 0xD8FFFFFF, 0x44FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD0FFFFFF, 0xA9FFFFFF, 0x97FFFFFF, 0x97FFFFFF, 0x9BFFFFFF, 0xBAFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBEFFFFFF, 0x9FFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xB1FFFFFF, 0xB1FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xE9FFFFFF,
  0xFAFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x29FFFFFF, 0x87FFFFFF, 0xCAFFFFFF, 0x29FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x29FFFFFF, 0xCAFFFFFF, 0x87FFFFFF, 0x29FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xFAFFFFFF,
  0xFF000000, 0xE7FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBDFFFFFF, 0x0EFFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x44FFFFFF, 0x1BFFFFFF, 0x1BFFFFFF, 0x44FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x0EFFFFFF, 0xBDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xE7FFFFFF, 0xFF000000,
  0xFF000000, 0xFCFFFFFF, 0xDBFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xBDFFFFFF, 0x29FFFFFF, 0x44FFFFFF, 0xAFFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xAFFFFFFF, 0x44FFFFFF, 0x29FFFFFF, 0xBDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xDBFFFFFF, 0xFCFFFFFF, 0xFF000000,
  0xFF000000, 0xFF000000, 0xF8FFFFFF, 0xDBFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0x87FFFFFF, 0x36FFFFFF, 0x1BFFFFFF, 0x36FFFFFF, 0x36FFFFFF, 0x1BFFFFFF, 0x36FFFFFF, 0x87FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xDBFFFFFF, 
        0xF8FFFFFF, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xF8FFFFFF, 0xDDFFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xDDFFFFFF, 0xF8FFFFFF, 
        0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFCFFFFFF, 0xE9FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xE7FFFFFF, 0xFCFFFFFF, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000,
  0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFF000000, 0xFAFFFFFF, 0xEEFFFFFF, 0xE2FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 
        0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xD8FFFFFF, 0xE2FFFFFF, 0xEEFFFFFF, 0xFAFFFFFF, 0xFF000000, 0xFF000000, 0xFF000000, 
        0xFF000000, 0xFF000000, 0xFF000000
};

GUI_CONST_STORAGE GUI_BITMAP g_off = {
  64, // xSize
  22, // ySize
  256, // BytesPerLine
  32, // BitsPerPixel
  (unsigned char *)g_res_off,  // Pointer to picture data
  NULL,  // Pointer to palette
  GUI_DRAW_BMP8888
};

/*************************** End of file ****************************/
