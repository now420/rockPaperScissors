#pragma once
#include <random>
#include <vector>
#include "helpers.h"

class c_random {
private:
    int randomIntInRange(int min, int max) {
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distrib(min, max);

        return distrib(gen);
    }

    std::vector<sRockPaperScissors> vec;
public:
    sRockPaperScissors getRandomChoice() {
        int choiceNum = randomIntInRange(1, 3);
        sRockPaperScissors choice = helpers->intToRockPaperScissors(choiceNum);

        return choice;
    }
};

std::unique_ptr<c_random> random = std::make_unique<c_random>();