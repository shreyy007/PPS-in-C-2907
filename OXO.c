#include <stdio.h>

char a[3][3] = {{'_','_','_'},{'_', '_', '_'}, {'_', '_', '_'}};
int flag = 0;


int table3x3() 
{
    printf("\n");
    int i;
	for (i = 0; i < 3; i++) 
    {
        int j;
		for (j = 0; j < 3; j++)
        {
            printf("%c\t", a[i][j]);
        }
        printf("\n");
    }
}


void checkWinner() 
{
	int i;
    for (i = 0; i < 3; i++) 
    {
        if (a[i][0] == a[i][1] && a[i][1] == a[i][2] && a[i][0] != '_') 
        {
            printf("\nPlayer %c wins!\n", a[i][0]);
            flag = 1;
            return;
        }
        if (a[0][i] == a[1][i] && a[1][i] == a[2][i] && a[0][i] != '_') 
        {
            printf("\nPlayer %c wins!\n", a[0][i]);
            flag = 1;
            return;
        }
    }

    
    if (a[0][0] == a[1][1] && a[1][1] == a[2][2] && a[0][0] != '_')
    {
        printf("\nPlayer %c wins!\n", a[0][0]);
        flag = 1;
        return;
    }

    if (a[0][2] == a[1][1] && a[1][1] == a[2][0] && a[0][2] != '_') 
    {
        printf("\nPlayer %c wins!\n", a[0][2]);
        flag = 1;
        return;
    }
}

int main() 
{
    int i, j, k;

    for (k = 0; k < 9; k++)
    {
        table3x3();

        if (k % 2 == 0) 
        {
            printf("\nPlayer X, enter your position:\n");
        }
        else 
        {
            printf("\nPlayer O, enter your position:\n");
        }

        printf("Enter row (0-2): ");
        scanf("%d", &i);
        printf("Enter column (0-2): ");
        scanf("%d", &j);

        if (i<0||i>2||j< 0||j>2||a[i][j] != '_') 
        {
            printf("Invalid move. Try again.\n");
            k--; 
            continue;
        }

        a[i][j] = (k % 2 == 0) ? 'X' : 'O';

        checkWinner();
        if (flag == 1) break;
    }

    if (flag == 0) 
    {
        printf("\nGame Draw!\n");
    }

    table3x3();
    return 0;
}
