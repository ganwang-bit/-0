#include"game.h"
#include<stdio.h>
#include<windows.h>
void chushihua(char qipan[ROW][COL],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            qipan[i][j]=' ';
        }
    }
}
void display(char qipan[ROW][COL],int row,int col )
{
    int i,j;
    int p = 0;
    for(i=0;i<row;)
    {
        if(p==0 || p%2==0)
        {
            for(j=0;j<col;j++)
        {
            printf(" %c ",qipan[i][j]);
            if(j!=col-1)
            printf("|");
        }
        i++;
        p++;
        printf("\n");
        }
        else
        {
            for(j=0;j<col;j++)
            {
                printf("---");
                if(j!=col-1)
                {
                    printf("|");
                }
            }
            p++;
            printf("\n");
        }
    }
}
void player(char qipan[ROW][COL],int row,int col)
{
    int x,y;
    printf("玩家走，请输入要下的坐标：");
    while(1)
    {
        scanf("%d%d",&x,&y);
        if(x >= 1 && x<=row && y>=1 && y<=col)
            {
                if(qipan[x-1][y-1]==' ')
                {
                    qipan[x-1][y-1]='*';
                    break;
                }
                else
                {
                    printf("非法输入，请重新输入：");
                }
            }
        else
            {
               printf("坐标非法，请重新输入：");
            }
    }
}
void computer(char qipan[ROW][COL],int row,int col)
{
    printf("电脑走\n");
    Sleep(1000);
    while(1)
    {
        int x =rand()%row;
        int y =rand()%col;
        if(qipan[x][y]==' ')
        {
            qipan[x][y]='#';
            break;
        }
    }
}
int win(char qipan[ROW][COL],int row,int col)
{
    int x,y,a=0,b=0;
    for(x=0;x<row;x++)
    {
        if(qipan[x][0]==qipan[x][1] && qipan[x][1]==qipan[x][2] && qipan[x][0]=='*')
        {
            printf("玩家赢\n");
            return 0;
        }
        if(qipan[x][0]==qipan[x][1] && qipan[x][1]==qipan[x][2] && qipan[x][0]=='#')
        {
            printf("电脑赢\n");
            return 0;
        }
    }
    for(y=0;y<col;y++)
    {
        if(qipan[0][y]==qipan[1][y] && qipan[1][y]==qipan[2][y] && qipan[1][y]=='*')
        {
            printf("玩家赢\n");
            return 0;
        }
        if(qipan[0][y]==qipan[1][y] && qipan[1][y]==qipan[2][y] && qipan[1][y]=='#')
        {
            printf("电脑赢\n");
            return 0;
        }
    }
        if(qipan[a][b]==qipan[a+1][b+1] && qipan[a+1][b+1]==qipan[a+2][b+2] && qipan[1][1]=='*')
        {
            printf("玩家赢\n");
            return 0;
        }
        if(qipan[a][b]==qipan[a+1][b+1] && qipan[a+1][b+1]==qipan[a+2][b+2] && qipan[1][1]=='#')
        {
            printf("电脑赢\n");
            return 0;
        }
        if(qipan[a+2][b]==qipan[a+1][b+1] && qipan[a+1][b+1]==qipan[a][b+2] && qipan[1][1]=='*')
        {
            printf("玩家赢\n");
            return 0;
        }
        if(qipan[a+2][b]==qipan[a+1][b+1] && qipan[a+1][b+1]==qipan[a][b+2] && qipan[1][1]=='#')
        {
            printf("电脑赢\n");
            return 0;
        }
        return 1;
}
int ping(char qipan[ROW][COL],int row,int col)
{
    int x=0,y=0;
    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            if(qipan[x][y]==' ')
            {
                return 0;
            }
        }
    }
        return 3;

}
