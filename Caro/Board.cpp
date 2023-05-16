#include "Board.h"
void PrintScoreBoard(int k)
{
    fstream file;
    string line;
    int x = SIZE * 4 + 6, y = 4;
    file.open("1.txt", ios::in);
    if (k == 1)
    {
        while (!file.eof()) {
            getline(file, line);
            gotoXY(x, y);
            for (int j = 0; j < line.length(); j++)
            {
                if (line[j] == '.')
                {
                    Textcolor(15);
                    cout << char(219);
                }
                else if (line[j] == '1')
                {
                    Textcolor(FullBlue);
                    cout << char(219);
                }
                else if (line[j] == '2')
                {
                    Textcolor(0);
                    cout << char(219);
                }
                else if (line[j] == '4')
                {
                    Textcolor(Black);
                    cout << char(30);
                }
                else if (line[j] == '5')
                {
                    Textcolor(Black);
                    cout << char(17);
                }
                else if (line[j] == '6')
                {
                    Textcolor(Black);
                    cout << char(16);
                }
                else if (line[j] == '7')
                {
                    Textcolor(Black);
                    cout << char(31);
                }
                else
                {
                    Textcolor(Black);
                    cout << line[j];
                }
            }
            y += 1;
        }
        file.close();
        // Bang 1
        Textcolor(Blue);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 5, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 35, i + 1);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 5, 10);
        for (int i = 0; i <= 30; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 5, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
        //Bang 2
        Textcolor(Grey);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 38, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 68, 1 + i);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 38, 10);
        for (int i = 0; i < 31; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 38, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
    }
    if (k == 2)
    {
        while (!file.eof()) {
            getline(file, line);
            gotoXY(x, y);
            for (int j = 0; j < line.length(); j++)
            {
                if (line[j] == '.')
                {
                    Textcolor(15);
                    cout << char(219);
                }
                else if (line[j] == '1')
                {
                    Textcolor(0);
                    cout << char(219);
                }
                else if (line[j] == '2')
                {
                    Textcolor(FullRed);
                    cout << char(219);
                }
                else
                {
                    Textcolor(Black);
                    cout << line[j];
                }
            }
            y += 1;
        }
        file.close();
        // Bang 1
        Textcolor(Grey);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 5, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 35, i + 1);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 5, 10);
        for (int i = 0; i <= 30; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 5, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
        //Bang 2
        Textcolor(Red);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 38, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 68, 1 + i);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 38, 10);
        for (int i = 0; i < 31; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 38, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
    }
    if (k == 3) {
        while (!file.eof()) {
            getline(file, line);
            gotoXY(x, y);
            for (int j = 0; j < line.length(); j++)
            {
                if (line[j] == '.')
                {
                    Textcolor(15);
                    cout << char(219);
                }
                else if (line[j] == '1')
                {
                    Textcolor(FullBlue);
                    cout << char(219);
                }
                else if (line[j] == '2')
                {
                    Textcolor(0);
                    cout << char(219);
                }
                else if (line[j] == '4')
                {
                    Textcolor(Black);
                    cout << char(30);
                }
                else if (line[j] == '5')
                {
                    Textcolor(Black);
                    cout << char(17);
                }
                else if (line[j] == '6')
                {
                    Textcolor(Black);
                    cout << char(16);
                }
                else if (line[j] == '7')
                {
                    Textcolor(Black);
                    cout << char(31);
                }
                else
                {
                    Textcolor(Black);
                    cout << line[j];
                }
            }
            y += 1;
        }
        file.close();
        // Bang 1
        Textcolor(Grey);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 5, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 35, i + 1);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 5, 10);
        for (int i = 0; i <= 30; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 5, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
        //Bang 2
        Textcolor(Grey);
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 38, i + 1);
            cout << char(219);
        }
        for (int i = 10; i < 18; i++) {
            gotoXY(SIZE * 4 + 68, 1 + i);
            cout << char(219);
        }
        gotoXY(SIZE * 4 + 38, 10);
        for (int i = 0; i < 31; i++) {
            cout << char(220);
        }
        gotoXY(SIZE * 4 + 38, 18);
        for (int i = 0; i < 31; i++) {
            cout << char(223);
        }
    }
    
    Textcolor(Black);
    gotoXY(SIZE * 4 + 10, 12);
    cout << "PLAYER 1";
    gotoXY(SIZE * 4 + 10, 14);
    cout << "X Moves : ";
    gotoXY(SIZE * 4 + 10, 15);
    cout << "Player 1 Has Won : ";
    Textcolor(Black);
    gotoXY(SIZE * 4 + 45, 12);
    cout << "PLAYER 2";
    Textcolor(Black);
    gotoXY(SIZE * 4 + 45, 14);
    cout << "O Moves : ";
    gotoXY(SIZE * 4 + 45, 15);
    cout << "Player 2 Has Won : ";

    // Bang 3
    Textcolor(0);
    for (int i = 0; i < 40; i++) {
        gotoXY(SIZE * 4 + 3, 40 - i);
        cout << char(219);
    }
    for (int i = 0; i < 40; i++) {
        gotoXY(SIZE * 4 + 70, 40 - i);
        cout << char(219);
    }
    gotoXY(SIZE * 4 + 3, 1);
    for (int i = 3; i < 71; i++) {
        cout << char(223);
    }
    gotoXY(SIZE * 4 + 3, 40);
    for (int i = 3; i < 71; i++) {
        cout << char(220);
    }

    //Textcolor(Black);
    //gotoXY(SIZE * 4 + 31, 33);
    //cout << "-----------------------";
    //gotoXY(SIZE * 4 + 30, 36);
    //cout << " L : Save Game ";
    //gotoXY(SIZE * 4 + 30, 37);
    //cout << " T : Load Game ";
    //gotoXY(SIZE * 4 + 30, 38);
    //cout << " ESC : Exit ";

    gotoXY(2, 1);
} // IN BANG DIEM
void Draw(int i, int x, int y) {
    fstream file;
    string line;
    file.open(file_name[i], ios::in);
    while (!file.eof()) {
        getline(file, line);
        gotoXY(x, y);
        for (int j = 0; j < line.length(); j++)
        {
            if (line[j] == '.')
            {
                Textcolor(15);
                cout << char(219);
            }
            else if (line[j] == '+')
            {
                Textcolor(FullRed);
                cout << line[j];
            }
            else if (line[j] == '~')
            {
                Textcolor(FullGreen);
                cout << line[j];
            }
            else if (line[j] == '@')
            {
                Textcolor(FullYellow);
                cout << line[j];
            }
            else if (line[j] == '^')
            {
                Textcolor(FullBlue);
                cout << line[j];
            }
            else if (line[j] == '*')
            {
                Textcolor(0);
                cout << line[j];
            }
            else if (line[j] == '8')
            {
                Textcolor(FullAzure);
                cout << line[j];
            }
            else if (line[j] == '/')
            {
                Textcolor(FullAzure);
                cout << char(254);
            }
            else if (line[j] == '"')
            {
                Textcolor(Red);
                cout << char(003);
            }
            else if (line[j] == 'z')
            {
                Textcolor(Black);
                cout << char(179);
            }
            else if (line[j] == '#')
            {
                Textcolor(Grey);
                cout << char(179);
            }
            else if (line[j] == '|' || line[j] == '-')
            {
                Textcolor(0);
                cout << char(179);
            }
            else
            {
                Textcolor(Black);
                cout << line[j];
            }
        }
        y += 1;

    }
    file.close();
}
void drawBoard()
{
    system("color FA");
    //if (SiZe == 0) return;
    Textcolor(Black);
    // vẽ cột phải
    for (int i = 0; i < SIZE * 2; i++)
    {
        gotoXY(SIZE * 4, i + 1);
        if ((i + 1) % 2 == 1)
            cout << char(186);
        else
            cout << char(182);
    }

    // vẽ dòng ngang
    for (int i = 0; i < SIZE * 2; i = i + 2)
    {
        gotoXY(0, i);
        for (int j = 0; j < SIZE * 4; j++)
        {
            if (j % 4 == 0)
                cout << char(197);
            else
                cout << char(196);
        }
    }

    // vẽ cột trái
    for (int i = 0; i < SIZE * 2; i++)
    {
        gotoXY(0, i + 1);
        if ((i + 1) % 2 == 1)
            cout << char(186);
        else
            cout << char(199);
    }

    // vẽ cột dọc
    for (int i = 1; i < SIZE * 2; i = i + 2)
    {
        for (int j = 0; j < SIZE * 4; j = j + 4)
        {
            gotoXY(j, i);
            if (j == 0)
                continue;
            cout << char(179);
        }
    }

    // vẽ dòng đầu
    gotoXY(0, 0);
    for (int i = 0; i < SIZE * 4; i++)
    {
        if (i % 4 == 0)
            cout << char(209);
        else
            cout << char(205);
    }
    gotoXY(0, 0); cout << char(201);
    gotoXY(SIZE * 4, 0); cout << char(187);

    // vẽ dòng cuối
    gotoXY(0, SIZE * 2);
    for (int i = 0; i < SIZE * 4; i++)
    {
        if (i % 4 == 0)
            cout << char(207);
        else
            cout << char(205);
    }
    gotoXY(0, SIZE * 2); cout << char(200);
    gotoXY(SIZE * 4, SIZE * 2);
    cout << char(188);

    // về vị trí x y
    gotoXY(2, 1);
}
void box()
{
    int i = 5, j = 5;
    Textcolor(Red);
    gotoXY(35, j + 19);
    cout << "ESC : BACK";
}
void LoadingGame()
{
    playSound(6);
    hideCur();
    fstream file;
    string line;
    for (int l = 0; l < 8; l++)
    {
        int x = 30, y = 10;
        file.open("Loading.txt", ios::in);
        while (!file.eof()) {
            getline(file, line);
            gotoXY(x, y);
            if (line == "load") {
                y = 9;
                Sleep(150);
            }
            else {
                for (int j = 0; j < line.length(); j++)
                {
                    if (line[j] == '.')
                    {
                        Textcolor(15);
                        cout << char(219);
                    }
                    else if (line[j] == 'x')
                    {
                        Textcolor(Blue);
                        cout << char(254);
                    }
                    else if (line[j] == '=')
                    {
                        Textcolor(FullRed);
                        cout << char(219);
                    }
                    else if (line[j] == '0')
                    {
                        Textcolor(Grey);
                        cout << char(219);
                    }
                    else if (line[j] == '+')
                    {
                        Textcolor(rand() % 100);
                        cout << line[j];
                    }
                    else if (line[j] == '~')
                    {
                        Textcolor(rand() % 100);
                        cout << line[j];
                    }
                    else if (line[j] == '@')
                    {
                        Textcolor(rand() % 100);
                        cout << line[j];
                    }
                    else if (line[j] == '^')
                    {
                        Textcolor(rand() % 100);
                        cout << line[j];
                    }

                }

            }
            y += 1;
        }
        file.close();
    }
    clearConsole();
}
void winDraw(int i, char variableWin, int x, int y)
{

    hideCur();
    fstream file;
    string line;
    if (i == 1 || i == 2)
    {
        playSound(4);
    }
    else
        playSound(5);
    for (int k = 0; k < 5; k++)
    {
        file.open(file_name[i], ios::in);
        while (!file.eof()) {
            getline(file, line);
            gotoXY(x, y);
            if (line == "load") {
                y = 10;
                Sleep(250);
            }
            else {
                for (int j = 0; j < line.length(); j++)
                {
                    if (line[j] == '.')
                    {
                        Textcolor(15);
                        cout << char(219);
                    }
                    else if (line[j] == variableWin)
                    {
                        Textcolor(rand() % 15);
                        cout << line[j];
                    }

                    else if (line[j] == '/')
                    {
                        Textcolor(Red);
                        cout << char(003);
                    }
                    else if (line[j] == ',')
                    {
                        Textcolor(Blue);
                        cout << char(004);
                    }
                    else if (line[j] == '-')
                    {
                        Textcolor(Green);
                        cout << char(005);
                    }
                }
            }
            y += 1;
        }
        file.close();
    }
}
