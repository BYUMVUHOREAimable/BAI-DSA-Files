#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

std::vector<std::string> animals = {"elephant", "giraffe", "tiger", "lion", "zebra"};
std::vector<std::string> movies = {"inception", "avatar", "interstellar", "titanic", "jaws"};

std::string getRandomWord(const std::vector<std::string>& category) {
    int index = rand() % category.size();
    return category[index];
}

bool playGame() {
    std::vector<std::string> category;
    std::string categoryName;

    std::cout << "Select a category:" << std::endl;
    std::cout << "1. Animals" << std::endl;
    std::cout << "2. Movies" << std::endl;
    int choice;
    std::cin >> choice;

    if (choice == 1) {
        category = animals;
        categoryName = "Animals";
    } else if (choice == 2) {
        category = movies;
        categoryName = "Movies";
    } else {
        std::cout << "Invalid choice. Exiting game." << std::endl;
        return false;
    }

    std::string word = getRandomWord(category);
    std::string guessed(word.size(), '_');
    int chances = 7;

    while (chances > 0) {
        std::cout << "Category: " << categoryName << std::endl;
        std::cout << "Word: " << guessed << std::endl;
        std::cout << "Chances left: " << chances << std::endl;
        std::cout << "Enter a letter or 'exit' to quit: ";
        std::string guess;
        std::cin >> guess;

        if (guess == "exit") {
            std::cout << "Exiting game. The word was: " << word << std::endl;
            return true;
        }

        bool found = false;
        for (size_t i = 0; i < word.size(); ++i) {
            if (word[i] == guess[0]) {
                guessed[i] = guess[0];
                found = true;
            }
        }

        if (!found) {
            std::cout << "Incorrect guess. Try again!" << std::endl;
            --chances;
        }

        if (guessed == word) {
            std::cout << "Congratulations! You guessed the word: " << word << std::endl;
            return true;
        }
    }

    std::cout << "Out of chances! The word was: " << word << std::endl;
    return true;
}

int main() {
    srand(static_cast<unsigned>(time(0)));

    bool playAgain = true;
    while (playAgain) {
        playAgain = playGame();

        std::cout << "Play again? (yes/no): ";
        std::string response;
        std::cin >> response;
        if (response != "yes") {
            playAgain = false;
        }
    }

    return 0;
}
