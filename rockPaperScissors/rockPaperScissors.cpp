#include "random.h"
#include <iostream>

auto main() -> int {
    while (true) {
        std::string iChoice;

        std::cout << R"(
1: Rock
2: Paper
3: Scissors
Input here: )";

        std::cin >> iChoice;

        sRockPaperScissors choice;

        if (iChoice == "1" || iChoice == "rock" || iChoice == "Rock") {
            choice = helpers->intToRockPaperScissors(1);
        }
        else if (iChoice == "2" || iChoice == "paper" || iChoice == "Paper") {
            choice = helpers->intToRockPaperScissors(2);
        }
        else if (iChoice == "3" || iChoice == "scissors" || iChoice == "Scissors") {
            choice = helpers->intToRockPaperScissors(3);
        }
        else {
            std::cout << "Invalid choice, going back to start..." << std::endl;
            break;
        }

        sRockPaperScissors computer = random->getRandomChoice();

        std::cout << "Computer choice: " << computer.name << std::endl;
        std::cout << "User choice: " << choice.name << std::endl;

        int isWin = helpers->isWin(choice, computer);

        if (isWin == 2) {
            std::cout << "You won!" << std::endl;
        }
        else if (isWin == 1) {
            std::cout << "It was a draw." << std::endl;
        }
        else {
            std::cout << "You lost :(" << std::endl;
        }

        system("pause");
        system("cls");
    }
}