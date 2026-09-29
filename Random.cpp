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
    cout << endl;
    
    cout << "Please enter the maximum value: ";
    double y;
    cin >> y;
    cout << endl;
    
    cout << "Integer (I) or Decimal (D) ?: ";
    string o;
    cin >> o;
    cout << endl;
    
    if (o == "I" || o == "i") {
        uniform_int_distribution<int> random(x, y);
        cout << random(gen) << endl;
    } 
    else if (o == "D" || o == "d") {
        uniform_real_distribution<double> random(x, y);
        cout << random(gen) << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }
    main();
}
