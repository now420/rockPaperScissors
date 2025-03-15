#pragma once
#include <memory>

static enum eRockPaperScissors {
    rock, paper, scissors
};

struct sRockPaperScissors {
    eRockPaperScissors num;
    const char* name;
};

class c_helpers {
public:
    sRockPaperScissors intToRockPaperScissors(int choiceNum) {
        sRockPaperScissors choice;

        if (choiceNum == 1) {
            choice = { rock, "rock" };
        }
        else if (choiceNum == 2) {
            choice = { paper, "paper" };
        }
        else {
            choice = { scissors, "scissors" };
        }

        return choice;
    }

    int isWin(sRockPaperScissors input, sRockPaperScissors computer) { // 0 = lost, 1 = tie, 2 = win
        if (input.num == computer.num) return 1;

        if (input.num == rock && computer.num == scissors ||
            input.num == paper && computer.num == rock ||
            input.num == scissors && computer.num == paper) {
            return 2;
        }

        return 0;
    }
};

std::unique_ptr<c_helpers> helpers = std::make_unique<c_helpers>();