// 103_assessment.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "task1.h"



void create(soccer player) {
    cout << "\nEnter player number(input type int): \t";
    cin >> player.playerNumber;
    cout << "\nEnter player's top speed in mph (input type float): \t";
    cin >> player.topSpeed;
    cout << "\nEnter player position (g, m, s, w or d)\n goalkeep, midfield, striker, winger and defender (input type char): \t";
    cin >> player.positionType;
    player.positionType = tolower(player.positionType);




    switch (player.positionType) {
    case 'g':
        position = positions::goalkeeper;
        break;

    case 'm':
        position = positions::midfielder;
        break;

    case 's':
        position = positions::striker;
        break;

    case 'w':
        position = positions::winger;
        break;

    case 'd':
        position = positions::defender;
        break;

    default:
        cout << "Something went wrong............\n\n";
    }
    
    display(player);
}

void display(soccer player) {
    soccer p = player;
    cout << "\nYour player profile...................\n" <<
        "\nPlayer Number: \t" << p.playerNumber <<
        "\nPlayer top speed: \t" << p.topSpeed << "mph" <<
        "\nPlayer position: \t" << enumToString(position) << endl;
}

int main()
{
    create(player1);
    create(player2);
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
