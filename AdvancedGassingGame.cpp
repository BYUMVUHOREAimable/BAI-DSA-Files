#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

class WordGuessingGame {
private:
    std::vector<std::string> animals{"elephant", "giraffe", "zebra", "tiger", "lion"};
    std::vector<std::string> teams{"lakers", "warriors", "bulls", "celtics", "rockets"};
    std::vector<std::string> districts{"nyanza", "huye", "gasabo", "bugesera", "burera"};
    std::vector<std::string> films{"inception", "avatar", "interstellar", "matrix", "jaws"};
    std::vector<std::string> books{"mathematics", "java", "citizenship", "biology", "physics"};

    std::vector<std::string> selectedWords;
    std::string selectedWord;
    std::string guessedWord;
    int maxAttempts;
    int attemptsLeft;

    std::string getRandomWord(const std::vector<std::string>& wordList) {
        int randomIndex = rand() % wordList.size();
        return wordList[randomIndex];
    }

public:
    WordGuessingGame() {
        srand(static_cast<unsigned>(time(0)));
        maxAttempts = 7;
    }

    void selectCategory(int choice) {
        switch (choice) {
            case 1:
                selectedWords = animals;
                break;
            case 2:
                selectedWords = teams;
                break;
            case 3:
                selectedWords = districts;
                break;
            case 4:
                selectedWords = films;
                break;
            case 5:
                selectedWords = books;
                break;
            default:
                std::cout << "Invalid choice. Exiting the game.";
                exit(1);
        }
        selectedWord = getRandomWord(selectedWords);
        guessedWord = std::string(selectedWord.length(), '_');
        attemptsLeft = maxAttempts;
    }

    void playGame() {
        std::cout << "Welcome to the Word Guessing Game!\n";
        std::cout << "Select a category:\n";
        std::cout << "1. Animals\n2. Teams\n3. Districts\n4. Films\n5. Books\n";
        int choice;
        std::cin >> choice;
        selectCategory(choice);

        while (attemptsLeft > 0) {
            std::cout << "Word to guess: " << guessedWord << "\n";
            std::cout << "Attempts left: " << attemptsLeft << "\n";
            std::cout << "Enter a letter: ";
            char guess;
            std::cin >> guess;

            if (guess == 'exit') {
                std::cout << "Exiting the game. The word was: " << selectedWord << "\n";
                return;
            }

            bool found = false;
            for (size_t i = 0; i < selectedWord.length(); ++i) {
                if (selectedWord[i] == guess) {
                    guessedWord[i] = guess;
                    found = true;
                }
            }

            if (!found) {
                std::cout << "Incorrect guess. Try again.\n";
                --attemptsLeft;
            }

            if (guessedWord == selectedWord) {
                std::cout << "Congratulations! You guessed the word: " << selectedWord << "\n";
                break;
            }
        }

        if (attemptsLeft <= 0) {
            std::cout << "Sorry, you're out of attempts. The word was: " << selectedWord << "\n";
        }

        std::cout << "Do you want to play again? (yes/no): ";
        std::string playAgain;
        std::cin >> playAgain;

        if (playAgain == "yes") {
            playGame();
        } else {
            std::cout << "Thanks for playing! Goodbye!\n";
        }
    }
};

int main() {
    WordGuessingGame game;
    game.playGame();
    return 0;
}
