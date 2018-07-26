#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

    //variables
    const int len = 1000;
    string s = "";
    int i = 0;

    //define input object and open the file
    ifstream file;
    file.open("p8.txt");

    //define line string
    string line;

    //while we arent at the end
    while (i<20) {
        
        //read line
        getline(file, line);

        //save line
        s += line;
        
        //advance counter
        i++;

    }

    //close file
    file.close();

    const int width = 13;
    unsigned long int prod = 1;
    unsigned long int max = 0;
    string temp;
    //loop through length of string
    for (int i=0; i<=len-width; i++) {

        //loop through width of product
        for (int j=0; j<width; j++) {
    
            temp = s[i+j];
            prod *= stoi(temp);

        }

        //check if new max
        if (prod > max) { max = prod; }
        prod = 1;
    }

    cout << max << endl;


    //everything is OK!
    return 0;
}
