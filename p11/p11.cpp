#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    //variables
    const int h = 20;
    const int w = 20;

    int** grid = new int*[h];

    string s;

    for (int i=0; i<h; i++) {

        grid[i] = new int[w];

    }

    ifstream file("p11.txt");

    while (!file.eof()) {

        getline(file, s);
        cout << s << endl;

    }

    file.close();

    //Everything is OK!
    return 0;
}
