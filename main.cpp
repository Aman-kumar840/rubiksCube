#include "Prototype/RubiksCube3dArray.cpp"
#include "Prototype/RubiksCube1dArray.cpp"
#include "Prototype/RubiksCubeBitboard.cpp"

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    cout << "=== Testing RubiksCube3dArray ===\n";
    RubiksCube3dArray cube3d;
    cube3d.print();

    if (cube3d.isSolved())
        cout << "Status: SOLVED\n";
    else
        cout << "Status: NOT SOLVED\n";

    auto moves3d = cube3d.randomShuffleCube(3);
    cout << "Shuffle Moves (3d): ";
    for (auto move : moves3d)
        cout << cube3d.getMove(move) << " ";
    cout << "\nAfter Shuffling:\n";
    cube3d.print();
    cout << (cube3d.isSolved() ? "Status: SOLVED\n" : "Status: NOT SOLVED\n");

    cout << "\n=== Testing RubiksCube1dArray ===\n";
    RubiksCube1dArray cube1d;
    cube1d.print();
    auto moves1d = cube1d.randomShuffleCube(3);
    cout << "Shuffle Moves (1d): ";
    for (auto move : moves1d)
        cout << cube1d.getMove(move) << " ";
    cout << "\nAfter Shuffling:\n";
    cube1d.print();
    cout << (cube1d.isSolved() ? "Status: SOLVED\n" : "Status: NOT SOLVED\n");

    cout << "\n=== Testing RubiksCubeBitboard ===\n";
    RubiksCubeBitboard cubeBitboard;
    cubeBitboard.print();
    auto movesBit = cubeBitboard.randomShuffleCube(3);
    cout << "Shuffle Moves (bitboard): ";
    for (auto move : movesBit)
        cout << cubeBitboard.getMove(move) << " ";
    cout << "\nAfter Shuffling:\n";
    cubeBitboard.print();
    cout << (cubeBitboard.isSolved() ? "Status: SOLVED\n" : "Status: NOT SOLVED\n");

    return 0;
}
