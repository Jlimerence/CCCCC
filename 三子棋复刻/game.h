#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define ROW 3
#define COL 3

void Initboard(char board[ROW][COL]);

void Showboard(char board[ROW][COL]);

void Playermove(char board[ROW][COL]);

void COMmove(char board[ROW][COL]);

int Judgewin(char board[ROW][COL]);