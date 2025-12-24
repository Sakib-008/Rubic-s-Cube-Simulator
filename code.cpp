#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<char>> cube = {{'W', 'W', 'W', 'W'}, {'R', 'R', 'R', 'R'}, {'B', 'B', 'B', 'B'}, {'O', 'O', 'O', 'O'}, {'G', 'G', 'G', 'G'}, {'Y', 'Y', 'Y', 'Y'}};
    cout<<"Fresh Cube :"<<endl;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << cube[i][j] << " ";
        }
        cout << endl;
    }
    int n;
    cout << "Enter number of moves :";
    cin >> n;
    while (n--)
    {
        string move;
        cout << "Enter move (eg. 1U):";
        cin >> move;
        char m = move[0];
        char face = move[1];
        int f;
        if (face == 'U')
            f = 0;
        else if (face == 'D')
            f = 1;
        else if (face == 'L')
            f = 2;
        else if (face == 'R')
            f = 3;

        if (m == '1')
        {
            if (f == 0)
            {
                char temp1 = cube[0][1];
                char temp2 = cube[0][3];
                cube[0][1] = cube[5][1];
                cube[0][3] = cube[5][3];
                cube[5][1] = cube[4][1];
                cube[5][3] = cube[4][3];
                cube[4][1] = cube[3][1];
                cube[4][3] = cube[3][3];
                cube[3][1] = temp1;
                cube[3][3] = temp2;
            }
            else if (f == 1)
            {
                char t1 = cube[3][1];
                char t2 = cube[3][3];
                cube[3][1] = cube[4][1];
                cube[3][3] = cube[4][3];
                cube[4][1] = cube[5][1];
                cube[4][3] = cube[5][3];
                cube[5][1] = cube[0][1];
                cube[5][3] = cube[0][3];
                cube[0][1] = t1;
                cube[0][3] = t2;
            }
            else if (f == 2)
            {
                char t1 = cube[0][2];
                char t2 = cube[0][3];
                cube[0][2] = cube[2][2];
                cube[0][3] = cube[2][3];
                cube[2][2] = cube[4][2];
                cube[2][3] = cube[4][3];
                cube[4][2] = cube[1][2];
                cube[4][3] = cube[1][3];
                cube[1][2] = t1;
                cube[1][3] = t2;
            }
            else if (f == 3)
            {
                char t1 = cube[1][2];
                char t2 = cube[1][3];
                cube[1][2] = cube[4][2];
                cube[1][3] = cube[4][3];
                cube[4][2] = cube[2][2];
                cube[4][3] = cube[2][3];
                cube[2][2] = cube[0][2];
                cube[2][3] = cube[0][3];
                cube[0][2] = t1;
                cube[0][3] = t2;
            }
        }
        else
        {
            if (f == 0)
            {
                char t0 = cube[0][0];
                char t1 = cube[0][1];
                char t2 = cube[0][2];
                char t3 = cube[0][3];
                cube[0][0] = cube[5][0];
                cube[0][1] = cube[5][1];
                cube[0][2] = cube[5][2];
                cube[0][3] = cube[5][3];
                cube[5][0] = cube[4][0];
                cube[5][1] = cube[4][1];
                cube[5][2] = cube[4][2];
                cube[5][3] = cube[4][3];
                cube[4][0] = cube[3][0];
                cube[4][1] = cube[3][1];
                cube[4][2] = cube[3][2];
                cube[4][3] = cube[3][3];
                cube[3][0] = t0;
                cube[3][1] = t1;
                cube[3][2] = t2;
                cube[3][3] = t3;
            }
            else if (f == 1)
            {
                char t0 = cube[3][0];
                char t1 = cube[3][1];
                char t2 = cube[3][2];
                char t3 = cube[3][3];
                cube[3][0] = cube[4][0];
                cube[3][1] = cube[4][1];
                cube[3][2] = cube[4][2];
                cube[3][3] = cube[4][3];
                cube[4][0] = cube[5][0];
                cube[4][1] = cube[5][1];
                cube[4][2] = cube[5][2];
                cube[4][3] = cube[5][3];
                cube[5][0] = cube[0][0];
                cube[5][1] = cube[0][1];
                cube[5][2] = cube[0][2];
                cube[5][3] = cube[0][3];
                cube[0][0] = t0;
                cube[0][1] = t1;
                cube[0][2] = t2;
                cube[0][3] = t3;
            }
            else if (f == 2)
            {
                char t0 = cube[0][0];
                char t1 = cube[0][1];
                char t2 = cube[0][2];
                char t3 = cube[0][3];
                cube[0][0] = cube[2][0];
                cube[0][1] = cube[2][1];
                cube[0][2] = cube[2][2];
                cube[0][3] = cube[2][3];
                cube[2][0] = cube[4][0];
                cube[2][1] = cube[4][1];
                cube[2][2] = cube[4][2];
                cube[2][3] = cube[4][3];
                cube[4][0] = cube[1][0];
                cube[4][1] = cube[1][1];
                cube[4][2] = cube[1][2];
                cube[4][3] = cube[1][3];
                cube[1][0] = t0;
                cube[1][1] = t1;
                cube[1][2] = t2;
                cube[1][3] = t3;
            }
            else if (f == 3)
            {
                char t0 = cube[1][0];
                char t1 = cube[1][1];
                char t2 = cube[1][2];
                char t3 = cube[1][3];
                cube[1][0] = cube[4][0];
                cube[1][1] = cube[4][1];
                cube[1][2] = cube[4][2];
                cube[1][3] = cube[4][3];
                cube[4][0] = cube[2][0];
                cube[4][1] = cube[2][1];
                cube[4][2] = cube[2][2];
                cube[4][3] = cube[2][3];
                cube[2][0] = cube[0][0];
                cube[2][1] = cube[0][1];
                cube[2][2] = cube[0][2];
                cube[2][3] = cube[0][3];
                cube[0][0] = t0;
                cube[0][1] = t1;
                cube[0][2] = t2;
                cube[0][3] = t3;
            }
        }

        for (int i = 0; i < 6; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << cube[i][j] << " ";
            }
            cout << endl;
        }
    }
}