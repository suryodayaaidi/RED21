/* Starting the program for the RED21 */

#include<iostream>
#include <stdlib.h>

using namespace std;

int main(){

    int a=1, b, c, d, count=0;
    int i, j, n=1, x, y;

    cout << "\t <---- Welcome! ---->" << endl;
    cout << "\t You are playing RED21" << endl;

    while(n<21){

        // level for first player.

        begain:
        cout << "\t Player 1 how many number you want to enter: ";
        cin >> x;

        /* This is for the if user want to input the number more than 3 at a time for player-2 */

        if(x>3 || x<1){
            cout << "\t You can enter number 1, 2 or 3 at a time." << endl;
            goto begain;
        }

        else
        {
        cout << "\t Player-1 your "<< x << " numbers are:" << endl;

        /* To enter the number for first player */

        for(i=1; i<=x; i++){
            if(n<21){
                cout << "\t " << a++;
            }
            else
                break;

            if(n==20){
                c=1;
            }
            j=i;
            n++;
            count++;
        }
        cout << "\t count = " << count << endl;
        if(c==1){
            cout << "\t Congratulation player 1 you win. \n \t player 2 goes to RED21";
            exit(0);
        }
        cout << endl;
        }

        /* To enter the number for second player */

        // Level for second player.

        again:
        cout << "\t Player 2 how many number you want to enter: ";
        cin >> y;

        /* This is for the if user want to input the number more than 3 at a time for player-2 */
        if(y>3 || y<1){
            cout << "\t You can enter number 1, 2 or 3 at a time!" << endl;
            goto again;
        }

        else
        {
        cout << "\t Player-2 your "<< y << " number:" << endl;

        for(i=j; i<x+y; i++){
            if(n<21){
                cout << "\t " << a++;
            }
            else
                break;
            if(n==20){
                d=1;
            }
            n++;
            count++;
        }

        cout << "\t count = " << count << endl;

        if(d==1){
            cout << "\t Congratulation player 2 you win. \n \t player 1 goes to RED21";
            exit(0);
        }

        cout << endl;
        }
    }
    return 0;
}

/* End the game RED21 */
