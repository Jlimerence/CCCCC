#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2

void Init_board(char stor[ROWS][COLS],char set);

void display_board(char board[ROWS][COLS]);

void arrange_board(char stor[ROWS][COLS]);