/**************************************************************************
 File Name:     insert.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:25:16 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"
#include"buffer.h"
void insert(void)
{
    printf("This is insert.c used by makefiles.\t\tinsert\n");
    printf("#define TEST_BUFFER: 0x%x\t\t\tinsert\n\n", TEST_BUFFER);
}
