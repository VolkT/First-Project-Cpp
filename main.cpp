#include <iostream>
#include <conio.h>

using namespace std;

void output();
void draw();
void movement();
void req();
void endgame();
void trap();
void mainmenu();
void help();
char v;
const int cx = 50, cy = 50;
int mx = 0, my = 0;
int hx = 0, hy = 0;
char d2 [cx][cy] = {' '};
int c;
int x = 1;
int y = 1;

int main()
{
    mainmenu();
    system("cls");
    return 0;
}

void help(){
    cout << "How To Play:" << endl
    << "W - Up" << endl
    << "S - Down" << endl
    << "A - Left" << endl
    << "D - Right" << endl
    << "Try to avoid traps(o)" << endl
    << "Reach the exit(H)" << endl
    << "Good luck!" << endl;
}

void req()
{
    output();
    movement();
    if (d2[x][y] == 'o'){
        trap();
    }
    else
        if(x == hx && y == hy)
        {
            endgame();
        }
        else
        {
            d2[x][y] = '&';
            req();
        }
}

void output()
{
    system("cls");
    if(c == 'h' || c == 'H'){
        draw();
        help();
    }
    else{
    draw();
    cout << "Press 'h' for help" << endl;
    }
}

void movement()
{
    c = getch();
    d2[x][y] = ' ';
    if( d2[x][y-1] != '#' && (c == 'w' || c == 'W') )
    {
        y--;
    }
    if( d2[x][y+1] != '#' && (c == 's' || c == 'S') )
    {
        y++;
    }
    if( d2[x+1][y] != '#' && (c == 'd' || c == 'D') )
    {
        x++;
    }
    if( d2[x-1][y] != '#' && (c == 'a' || c == 'A') )
    {
        x--;
    }
}

void trap(){
    system("cls");
    cout << "Oh no! You fell in the trap. Lets try again. Ok?" << endl;
    v = getch();
    mainmenu();
}

void endgame()
{
    system("cls");

    cout << "GOOD GAME!!! Well Played!" << endl
    << "You get out from that strange place." << endl
    << "This project was made by SG with help of PG." << endl
    << "Thanks to everyone who reach the end." << endl
    << "And wish me luck in my future projects." << endl;
    c = getch();
    mainmenu();
}

void mainmenu(){
    system("cls");
    cout << "Choose level and enter his number to play:" << endl
    << "1 - Tutorial" << endl;
    int m = 0;
    m = getch();

    switch(m)
    {
    case '0':
        return;
    case '1':
        mx = 22;
        my = 6;
        x = 2;
        y = 2;
        hx = 20;
        hy = 2;
        d2[6][3] = 'o';
        d2[8][2] = 'o';
        d2[10][1] = 'o';
        d2[11][1] = 'o';
        d2[12][1] = 'o';
        d2[14][2] = 'o';
        d2[5][1] = '#';
        d2[5][2] = '#';
        d2[5][3] = '#';
        d2[15][1] = '#';
        d2[15][2] = '#';
        d2[15][3] = '#';
        d2[11][5] = '#';
        d2[11][4] = '#';
        d2[11][3] = '#';
        break;
    case '2':
        break;
    case '3':
        break;
    case '4':
        break;
    case '5':
        break;
    case '6':
        break;
    case '7':
        break;
    case '8':
        break;
    case '9':
        break;
    }
        for(int a = 0; a <= my; a++)
    {
        d2[0][a] = '#';
        d2[mx - 1][a] = '#';
    }

    for(int b = 0; b <= mx; b++)
    {
        d2[b][0] = '#';
        d2[b][my - 1] = '#';
    }
    d2[hx][hy] = 'H';
    d2[x][y] = '&';
    req();
}

void draw()
{
    for(int iy = 0; iy < my; iy++)
    {
        for(int ix = 0; ix < mx; ix++)
        {
            cout << d2[ix][iy];
        }
        cout << endl;
    }
}
