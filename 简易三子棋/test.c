#include<stdio.h>
#include"game.h"
#include<windows.h>

void game()
{
    char qipan[ROW][COL]={0};
    chushihua(qipan,ROW,COL);
    display(qipan,ROW,COL);
    while(1)
    {
        player(qipan,ROW,COL);
        system("cls");
        display(qipan,ROW,COL);
        int winner1 =win(qipan,ROW,COL);
        if(winner1 == 0)
        {
            break;
        }
        int pi =ping(qipan,ROW,COL);
        if(pi == 3)
        {
            printf("ƽ��\n");
            break;
        }
        computer(qipan,ROW,COL);
        system("cls");
        display(qipan,ROW,COL);
        win(qipan,ROW,COL);
        int winner2 =win(qipan,ROW,COL);
        if(winner2 == 0)
        {
            break;
        }
        int pl =ping(qipan,ROW,COL);
        if(pl == 3)
        {
            printf("ƽ��\n");
            break;
        }
    }
}
void menu()
{
        printf("************        ������        *************\n");
        printf("************    1.play  0.exit    *************\n");
        printf("                    �����룺");
}
void test()
{
    srand((unsigned int)time(NULL));
    int x;
    do
    {
        menu();
    regain:
        scanf("%d",&x);
        if(x==1)
            {
                system("cls");
                game();
            }
        else if(x==0)
            {
                system("cls");
                printf("�˳�����\n");
                break;
            }
        else
        {
            printf("������1����0\n");
            goto regain;
        }
    }
    while(1);
}
int main()
{
    test();
    return 0;
}
