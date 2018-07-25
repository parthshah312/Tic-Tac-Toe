#include <stdio.h>
#include <conio.h>
char sqr[9] = { '0', '1', '2', '3', '4', '5', '6', '7', '8' };
int check();
void board();
int main()
{
    int player = 1, i,choice;
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';
        if (choice == 0 && sqr[0] == '0')
            sqr[0] = mark;
        else if (choice == 1 && sqr[1] == '1')
            sqr[1] = mark;
        else if (choice == 2 && sqr[2] == '2')
            sqr[2] = mark;
        else if (choice == 3 && sqr[3] == '3')
            sqr[3] = mark;
        else if (choice == 4 && sqr[4] == '4')
            sqr[4] = mark;
        else if (choice == 5 && sqr[5] == '5')
            sqr[5] = mark;
        else if (choice == 6 && sqr[6] == '6')
            sqr[6] = mark;
        else if (choice == 7 && sqr[7] == '7')
            sqr[7] = mark;
        else if (choice == 8 && sqr[8] == '8')
            sqr[8] = mark;
        else
        {
            printf("Invalid move ");
            player--;
            getch();
        }
        i = check();
        player++;
    }while (i == - 1);
    if (i==1)
        printf("Player %d win ",--player);
    else
        printf("Game draw");
    getch();
    return 0;
}
int check()
{
    if (sqr[0] == sqr[1] && sqr[1] == sqr[2])
        return 1;
    else if (sqr[3] == sqr[4] && sqr[4] == sqr[5])
        return 1;
    else if (sqr[6] == sqr[7] && sqr[7] == sqr[8])
        return 1;
    else if (sqr[0] == sqr[3] && sqr[3] == sqr[6])
        return 1;
    else if (sqr[1] == sqr[4] && sqr[4] == sqr[7])
        return 1;
    else if (sqr[2] == sqr[5] && sqr[5] == sqr[8])
        return 1;
    else if (sqr[0] == sqr[4] && sqr[4] == sqr[8])
        return 1;
    else if (sqr[2] == sqr[4] && sqr[4] == sqr[6])
        return 1;
    else if (sqr[0] != '0' && sqr[1] != '1' && sqr[2] != '2' &&
             sqr[3] != '3' && sqr[4] != '4' && sqr[5] != '5' && sqr[6]
             != '6' && sqr[7] != '7' && sqr[8] != '8')
        return 0;
    else
        return -1;
}
void board()
{
    printf("\t\tTic Tac Toe\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sqr[0], sqr[1], sqr[2]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sqr[3], sqr[4], sqr[5]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", sqr[6], sqr[7], sqr[8]);
    printf("     |     |     \n\n");
}
