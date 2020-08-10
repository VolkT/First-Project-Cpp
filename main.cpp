#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

char d2 [20][3] = {' '};
int c;
void fuck();
void qqq();
int x = 1, y = 1;

int main()
{
    cout << "How To Play" << endl
    << "W - Up" << endl
    << "S - Down" << endl
    << "A - Left" << endl
    << "D - Right" << endl
    << "Reach the bottom right corner to win." << endl
    << "Good luck!" << endl
    << "--------------------" << endl;
    cout
    << "####################" << endl
    << "#                  #" << endl
    << "#&                 #" << endl
    << "#                  #" << endl
    << "####################" << endl;
    cout << "--------------------" << endl;
    qqq();


    char q;
    cout << "Write your legent name: ";
    cin >> q;

    return 0;
}

 void fuck()
 {
    c = getch();

    system("cls");
    cout << "How To Play" << endl
    << "W - Up" << endl
    << "S - Down" << endl
    << "A - Left" << endl
    << "D - Right" << endl
    << "Reach the bottom right corner to win." << endl
    << "Good luck!" << endl
    << "--------------------" << endl;
    d2[x][y]=' ';
    if(y > 0 && (c == 'w' || c == 'W')){
        y--;
    }
    if(y < 2 && (c == 's' || c == 'S')){
        y++;
    }
    if(x < 18 && (c == 'd' || c == 'D')){
        x++;
    }
    if(x > 1 && (c == 'a' || c == 'A')){
        x--;
    }
    d2[x][y]='&';
    for(int iy = 0; iy <= 2; iy++)
    {
        d2[0][iy] = '#';
        d2[19][iy] = '#';
    }


    cout << "####################" << endl;
    for(int iy = 0; iy <= 2; iy++){
        for(int ix = 0; ix <= 19; ix++){
        cout << d2[ix][iy];
        }
        cout << endl;
      }
    cout << "####################"  << endl
    << "--------------------" << endl;
 }

 void qqq()
 {
     fuck();
    if(y == 2 && x == 18){
        system("cls");
        cout << "GG" << endl;
    }
    else
        qqq();
 }
