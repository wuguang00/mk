/**************************************************************************
 File Name:     main.c
 Author:        wuguang
 E-mail:        wuguang20084520@163.com
 Created Time:  Sat 05 Sep 2020 01:09:06 PM CST
 Release Notes: 
 **************************************************************************/
#include<stdio.h>
#include"defs.h"

extern void command(void);
extern void display(void);
extern void files(void);
extern void insert(void);
extern void kdb(void);
extern void search(void);
extern void utils(void);

int main(void)
{
    printf("\nThis is main.c used by makefiles.\n");
    printf("#define TEST_NUM: %d\n\n", TEST_NUM);

	insert();
	command();
	display();
	files();
	kdb();
	search();
	utils();

	// in this place you can call the main(); but it will goto a dead loop.

    return 0;
}
