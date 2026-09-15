// Random Number

//Folders

#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>

//Namespace

using namespace std; 

//Code

int main () {
    srand(time(0));
    int randomNum = rand();
    cout << randomNum;

}