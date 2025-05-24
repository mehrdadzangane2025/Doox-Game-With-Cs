#include <iostream>
using namespace std;

int main() {


    char board[3][3] =
    {
        { '0' , '0' , '0'},
        { '0' , '0' , '0'},
        { '0' , '0' , '0'}
    };

    int x = 0;
    int y = 0;
    int turn = 1;
    int inputPlayer = 0;
    bool winner = false;
    bool isOver = false;

    while (!isOver)
    {
        system("cls"); // For Windows

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i, j] == '0')
                {
                    cout << "| |";
                }
                else
                {
                    Console.Write($" |{board[i, j]}| ");
                }
            }
            Console.WriteLine();
        }

        for (int row = 0; row < 3; row++)
        {
            if (board[row, 0] == board[row, 1] && board[row, 1] == board[row, 2])
            {
                if (board[row, 0] == 'X')
                {
                    winner = true;
                    isOver = true;
                }
                else if (board[row, 0] == 'O')
                {
                    winner = false;
                    isOver = true;
                }
            }
        }

        for (int col = 0; col < 3; col++)
        {
            if (board[0, col] == board[1, col] && board[1, col] == board[2, col])
            {
                if (board[0, col] == 'X')
                {
                    winner = true;
                    isOver = true;
                }
                else if (board[0, col] == 'O')
                {
                    winner = false;
                    isOver = true;
                }
            }
        }

        if (board[0, 0] == board[1, 1] && board[1, 1] == board[2, 2])
        {
            if (board[0, 0] == 'X')
            {
                winner = true;
                isOver = true;
            }
            else if (board[0, 0] == 'O')
            {
                winner = false;
                isOver = true;
            }
        }

        if (board[0, 2] == board[1, 1] && board[1, 1] == board[2, 0])
        {
            if (board[0, 2] == 'X')
            {
                winner = true;
                isOver = true;
            }
            else if (board[0, 2] == 'O')
            {
                winner = false;
                isOver = true;
            }
        }

        if (isOver)
        {


            if (winner == true)
            {
                Console.WriteLine();
                Console.WriteLine("   (X is win)");
            }
            else
            {
                Console.WriteLine();
                Console.WriteLine("   (O is win)");
            }
            break;
        }

        Console.WriteLine("\nPlease doing your turn ...");
        inputPlayer = Convert.ToInt32(Console.ReadLine());
        x = (inputPlayer - 1) / 3;
        y = (inputPlayer - 1) % 3;

        if (turn == 1)
        {
            board[x, y] = 'X';
        }
        else
        {
            board[x, y] = 'O';
        }

        turn *= -1;
    }
}


