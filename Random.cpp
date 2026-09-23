#include <iostream>
#include <vector>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <random>


using namespace std; 




int main () {
    random_device rd;

    
    mt19937 gen(rd());
    cout << "Please enter the minimum value: ";
    double x;
    cin >> x;
    cout << " " << endl;
    
    cout << "Please enter the maximum value: ";
    double y;
    cin >> y;
    cout << " " << endl;



    uniform_int_distribution<int> random(x, y);

    cout << random(gen) << endl;
    main();
}