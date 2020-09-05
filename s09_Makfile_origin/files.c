/**************************************************************************
 File Name:     files.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:28:23 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"
#include"buffer.h"
#include"command.h"
void files(void)
{
    printf("This is files.c used by makefiles.\t\tfiles\n");
    printf("#define TEST_BUFFER: 0x%x\t\t\t\t\tfiles\n\n", TEST_BUFFER);
    printf("#define TEST_COMMAND: 0x%x\t\t\t\t\tfiles\n\n", TEST_COMMAND);
}
