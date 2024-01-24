//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//int main() {
//    // Declare a variable named 'input_string' to hold our input.
//    string input_string; 
//    
//    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
//    getline(cin, input_string); 
//    
//    // Print a string literal saying "Hello, World." to stdout using cout.
//    cout << "Hello, World." << endl;
//
//    // TODO: Write a line of code here that prints the contents of input_string to stdout.
//    cout <<input_string;
//    return 0;
//}

#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the getMinimumCost function below.
int getMinimumCost(int k, vector<int> c) {
sort(c.rbegin(), c.rend());
int minimumCost = 0;
int multiplier = 1;
for (int i = 0; i < c.size(); i++){
    minimumCost += c[i] * multiplier;
    if ((i + 1)% k == 0){
        multiplier++;
    }
}
return minimumCost;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<int> c(n);

    for (int i = 0; i < n; i++) {
        int c_item = stoi(c_temp[i]);

        c[i] = c_item;
    }

    int minimumCost = getMinimumCost(k, c);

    fout << minimumCost << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
