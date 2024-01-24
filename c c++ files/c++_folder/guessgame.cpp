#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<string> animalWords = {"elephant", "giraffe", "lion", "tiger", "kangaroo"};
vector<string> teamWords = {"yankees", "redsox", "dodgers", "cubs", "giants"};
vector<string> districtWords = {"manhattan", "brooklyn", "queens", "bronx", "statenisland"};
vector<string> filmWords = {"inception", "avatar", "titanic", "jaws", "gladiator"};
vector<string> bookWords = {"harrypotter", "tolkien", "davinci", "shakespeare", "twilight"};

int chances = 6; // Number of chances

string getRandomWord(const vector<string> &wordList) {
    int randomIndex = rand() % wordList.size();
    return wordList[randomIndex];
}

bool containsLetter(const string &word, char letter) {
    for (char c : word) {
        if (c == letter) {
            return true;
        }
    }
    return false;
}

string displayWord(const string &word, const string &guessedLetters) {
    string result = "";
    for (char c : word) {
        if (guessedLetters.find(c) != string::npos) {
            result += c;
        } else {
            result += '_';
        }
    }
    return result;
}

int main() {
	
    while (true) {
        cout << "Select a category:" << endl;
        cout << "1. Animals" << endl;
        cout << "2. Teams" << endl;
        cout << "3. Districts" << endl;
        cout << "4. Films" << endl;
        cout << "5. Books" << endl;

        int categoryChoice;
        cin >> categoryChoice;

        vector<string> selectedCategory;
        switch (categoryChoice) {
            case 1:
                selectedCategory = animalWords;
                break;
            case 2:
                selectedCategory = teamWords;
                break;
            case 3:
                selectedCategory = districtWords;
                break;
            case 4:
                selectedCategory = filmWords;
                break;
            case 5:
                selectedCategory = bookWords;
                break;
            default:
                cout << "Invalid category choice." << endl;
                return 1;
        }

        string targetWord = getRandomWord(selectedCategory);
        string guessedLetters = "";

        while (chances > 0) {
            cout << "Guess the word: " << displayWord(targetWord, guessedLetters) << endl;
            cout << "Chances left: " << chances << endl;
            cout << "Guess a letter or type 'exit': ";
            char guess;
            cin >> guess;
			if (guess== 'exit') {
                cout << "The word was: " << targetWord << endl;
                break;
            }

            if (containsLetter(targetWord, guess)) {
                guessedLetters += guess;
            } else {
                cout << "Incorrect guess!" << endl;
                chances--;
            }

            if (displayWord(targetWord, guessedLetters) == targetWord) {
                cout << "Congratulations! You guessed the word: " << targetWord << endl;
                break;
            }
        }

        if (chances == 0) {
            cout << "You ran out of chances. The word was: " << targetWord << endl;
        }

        cout << "Do you want to play again? (yes/no): ";
        string playAgain;
        cin >> playAgain;
        if (playAgain != "yes") {
            break;
        }
    }

    return 0;
}
