/**************************************************************************
 File Name:     kdb.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:13:49 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"
#include"command.h"
void kdb(void)
{
    printf("This is kdb.c used by makefiles.\t\tkdb\n");
    printf("#define TEST_NUM: 0x%x\t\t\t\tkdb\n", TEST_NUM);
    printf("#define TEST_COMMAND: 0x%x\t\t\tkdb\n\n", TEST_COMMAND);
}
