/**************************************************************************
 File Name:     display.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:22:49 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"
#include"command.h"
#include"buffer.h"

void display(void)
{
    printf("This is display.c used by makefiles.\t\tdisplay\n");
    printf("#define TEST_NUM: %d\t\t\t\tdisplay\n", TEST_NUM);
    printf("#define TEST_COMMAND: 0x%x\t\t\tdisplay\n", TEST_COMMAND);
    printf("#define TEST_BUFFER: 0x%x\t\t\tdisplay\n\n", TEST_BUFFER);
}
