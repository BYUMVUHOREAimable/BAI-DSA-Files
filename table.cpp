#include <iostream>
#include <iomanip>

int main() {
    const int numRows = 4;
    const int numCols = 4;

    // Declaration and Initialization of the 2D array
    int population[numRows][numCols] = {
        {500, 520, 540, 560},  // School 1: 2015, 2016, 2017, 2018
        {480, 490, 505, 515},  // School 2: 2015, 2016, 2017, 2018
        {450, 460, 470, 480},  // School 3: 2015, 2016, 2017, 2018
        {420, 430, 440, 450}   // School 4: 2015, 2016, 2017, 2018
    };

    // Displaying the table
    std::cout << std::setw(15) << "School"
              << std::setw(10) << "2015"
              << std::setw(10) << "2016"
              << std::setw(10) << "2017"
              << std::setw(10) << "2018"
              << std::endl;

    for (int i = 0; i < numRows; ++i) {
        std::cout << std::setw(15) << "School " << i + 1;
        for (int j = 0; j < numCols; ++j) {
            std::cout << std::setw(10) << population[i][j];
        }
        std::cout << std::endl;
    }

    return 0;
}
