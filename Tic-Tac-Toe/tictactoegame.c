#include <stdio.h>
#include <stdlib.h>

char tic[10] = {'a', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
int resultcheck();
void board();

int main()
{
    int player = 1, i, choice;
    char mark;

    do
    {
        board();
        player = (player % 2) ? 1 : 2; // asks if player is 1 or 2;; 0.5 rounds to 1

        printf("\n\nPlayer %d, choose a tile to place your mark: ", player);
        scanf("%d", &choice);

        mark = (player == 1) ? 'X' : 'O'; // asks if player 1 use X otherwise O

        if (choice == 1 && tic[1] == '1')
        {
            tic[1] = mark;
        }
        else if (choice == 2 && tic[2] == '2')
        {
            tic[2] = mark;
        }
        else if (choice == 3 && tic[3] == '3')
        {
            tic[3] = mark;
        }
        else if (choice == 4 && tic[4] == '4')
        {
            tic[4] = mark;
        }
        else if (choice == 5 && tic[5] == '5')
        {
            tic[5] = mark;
        }
        else if (choice == 6 && tic[6] == '6')
        {
            tic[6] = mark;
        }
        else if (choice == 7 && tic[7] == '7')
        {
            tic[7] = mark;
        }
        else if (choice == 8 && tic[8] == '8')
        {
            tic[8] = mark;
        }
        else if (choice == 9 && tic[9] == '9')
        {
            tic[9] = mark;
        }
        else
        {
            printf("\nInvalid Move");
            player--;
            system("PAUSE");
        }

        i = resultcheck();
        player++;

    } while (i == -1);

    board();
    if (i == 1)
        printf(" !!! Player %d wins !!!\n", --player); // declares previous player as winner
    else
        printf("  !!! Game Draw !!!\n"); // if i=0

    system("PAUSE");

    return 0;

} // main

int resultcheck()
{
    if (tic[1] == tic[2] && tic[2] == tic[3])
        return 1;
    else if (tic[4] == tic[5] && tic[5] == tic[6])
        return 1;
    else if (tic[7] == tic[8] && tic[8] == tic[9])
        return 1;
    else if (tic[1] == tic[4] && tic[4] == tic[7])
        return 1;
    else if (tic[2] == tic[5] && tic[5] == tic[8])
        return 1;
    else if (tic[3] == tic[6] && tic[6] == tic[9])
        return 1;
    else if (tic[3] == tic[5] && tic[5] == tic[7])
        return 1;
    else if (tic[1] == tic[5] && tic[5] == tic[9])
        return 1;
    else if (tic[1] != '1' && tic[2] != '2' && tic[3] != '3' &&
             tic[4] != '4' && tic[5] != '5' && tic[6] != '6' && tic[7] != '7' && tic[8] != '8' && tic[9] != '9')
        return 0;
    else
        return -1;
}

// board
void board()
{
    system("cls");
    printf("\n\n<<<<<<<< ================== >>>>>>>>\n");
    printf("<<                                >>\n");
    printf("<< Tic Tac Toe made in C Language >>");
    printf("\n<<                                >>");
    printf("\n<<<<<<<< ================== >>>>>>>>\n");
    printf("<<<<                            >>>>\n");
    printf("<<<< Player 1 = X  Player 2 = O >>>>\n");
    printf("<<<<                            >>>>\n");
    printf("<<<<============================>>>>\n");
    printf("<<\t|     |     |     |\t  >>\n");
    printf("<<\t|  %c  |  %c  |  %c  |\t  >>\n", tic[1], tic[2], tic[3]);

    printf("<<\t|_____|_____|_____|\t  >>\n");
    printf("<<\t|     |     |     |\t  >>\n");

    printf("<<\t|  %c  |  %c  |  %c  |\t  >>\n", tic[4], tic[5], tic[6]);

    printf("<<\t|_____|_____|_____|\t  >>\n");
    printf("<<\t|     |     |     |\t  >>\n");

    printf("<<\t|  %c  |  %c  |  %c  |\t  >>\n", tic[7], tic[8], tic[9]);

    printf("<<\t|     |     |     |\t  >>\n");
    printf("<<<<============================>>>>\n");
}
