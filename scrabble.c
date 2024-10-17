#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int checkVal(char a);
string capitalize(string a, const int b);

int main()
{
    string p1 = get_string("Player 1: ");
    string p2 = get_string("Player 2: ");
    int p1Total = 0;
    int p2Total = 0;

    const int p1Length = strlen(p1); // Length of player 1 word
    const int p2Length = strlen(p2); // Length of player 2 word
    p1 = capitalize(p1, p1Length); // Capitalize the whole string
    p2 = capitalize(p2, p2Length); // Capitalize the whole string

    for(int i = 0; i < p1Length; i++) // Calculates value of player 1 word
    {
        p1Total += checkVal(p1[i]);
    }
    
    for(int i = 0; i < p2Length; i++) // Calculates value of player 2 word
    {
        p2Total += checkVal(p2[i]);
    }


    if(p1Total > p2Total) //Checks for winner
    {
        printf("Player 1 Wins!\n");
    }
    else if(p2Total > p1Total)
    {
        printf("Player 2 Wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

string capitalize(string a, const int b)
{
    for(int i = 0; i < b; i++)
    {
        a[i] = toupper(a[i]);
    }
    return a;
}

int checkVal(char a)
{
    int total = 0;
    switch(a){
        case 'A':
            total += 1;
            break;
        case 'B':
            total += 3;
            break;
        case 'C':
            total += 3;
            break;
        case 'D':
            total += 2;
            break;
        case 'E':
            total += 1;
            break;
        case 'F':
            total += 4;
            break;
        case 'G':
            total += 2;
            break;
        case 'H':
            total += 4;
            break;
        case 'I':
            total += 1;
            break;
        case 'J':
            total += 8;
            break;
        case 'K':
            total += 5;
            break;
        case 'L':
            total += 1;
            break;
        case 'M':
            total += 3;
            break;
        case 'N':
            total += 1;
            break;
        case 'O':
            total += 1;
            break;
        case 'P':
            total += 3;
            break;
        case 'Q':
            total += 10;
            break;
        case 'R':
            total += 1;
            break;
        case 'S':
            total += 1;
            break;
        case 'T':
            total += 1;
            break;
        case 'U':
            total += 1;
            break;
        case 'V':
            total += 4;
            break;
        case 'W':
            total += 4;
            break;
        case 'X':
            total += 8;
            break;
        case 'Y':
            total += 4;
            break;
        case 'Z':
            total += 10;
            break;
        default:
            total += 0;
            break;
    }
    return total;
}