/**************************************************************************
 File Name:     command.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:16:06 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"
#include"command.h"
void command(void)
{
    printf("This is command.c used by makefiles.\t\tcommand\n");
    printf("#define TEST_NUM: %d\t\t\t\tcommand\n\n", TEST_NUM);
}
