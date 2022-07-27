#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROWS 11
#define COLS 11
#define ROW ROWS-2
#define COL COLS-2


void Init_board(char board[ROWS][COLS],int rows,int cols,char set);
void Display_board(char board[ROWS][COLS],int row,int col);
void Arrange_board(char stor[ROWS][COLS], int row, int col);
void Find_mine(char show[ROWS][COLS],char stor[ROWS][COLS],int row,int col);
int around_mine(char stor[ROWS][COLS],int x,int y);