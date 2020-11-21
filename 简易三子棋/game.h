#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#define ROW 3
#define COL 3
#include<time.h>
#include<stdlib.h>
void chushihua(char qipan[ROW][COL],int row,int col);
void display(char qiapn[ROW][COL],int row,int col);
void player(char qipan[ROW][COL],int row,int col);
void computer(char qipan[ROW][COL],int row,int col);
int win(char qipan[ROW][COL],int row,int col);
int ping(char qipan[ROW][COL],int row,int col);
#endif // GAME_H_INCLUDED
