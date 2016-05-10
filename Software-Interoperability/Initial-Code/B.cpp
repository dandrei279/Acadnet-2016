/*
	Source: Codefight
	Adapted by: Dorinel Filip
*/
#include <iostream>
#include <vector>
#include <algorithm>

bool pairOf(std::vector<std::vector<int>> shoes)
{
    std::vector<int> leftShoes, rightShoes;

    for (int i = 0; i < shoes.size(); i++) {
        if (shoes[i][0] == 0)
            leftShoes.push_back(shoes[i][0]);
        else
            rightShoes.push_back(shoes[i][1]);
    }

    std::sort(leftShoes.begin(), leftShoes.end());
    std::sort(rightShoes.begin(), rightShoes.end());

    if (leftShoes.size() != rightShoes.size()) {
        return false;
    }

    for (int i = 0; i < leftShoes.size(); i++) {
        if (leftShoes[i] != rightShoes[i]) {
            return false;
        }
    }

    return true;
}

int main(void)
{
    int no_of_shoes;
    int type, size;
    std::vector<std::vector<int> > shoes;

    std::cin >> no_of_shoes;

    for (int i = 1; i <= no_of_shoes; i++) {
        std::cin >> type >> size;
        shoes.push_back(std::vector<int>({type, size}));
    }

    if (pairOf(shoes)) {
        std::cout << "YES" << std::endl;
    } else {
        std::cout << "NO" << std::endl;
    }
}