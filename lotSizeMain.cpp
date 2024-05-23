#include <algorithm>
#include <array>
#include <assert.h>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <chrono>
#include <cmath>
#include <functional>
#include <iomanip>
#include <iostream>
#include <ios>
#include <limits>
#include <locale>
#include <numeric>
#include <random>
#include <string>
#include <string_view>
#include <typeinfo>
#include <type_traits>
#include <unistd.h>
#include <utility>
#include <vector>



using namespace std;
using std::cout;
using std::cin;





/*
// TRIVIAL DOW JONES INDUSTRIAL AVERAGE (US30) LOT SIZE CALCULATION FUN


// Take amount you are willing to risk -- $100
double calculateRisk() {

    double risk;
    bool end = false;

    cout << "How much are you willing to risk in dollars ($): ";
    cin >> risk;

    while (!end) {

    if (!std::cin) {
        cout << "Enter a valid dollar amount.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "How much are you willing to risk in dollars ($): ";
        cin >> risk;
    } else {
        end = true;
    }

    }

    return risk;

}

// Divide of size of your stop loss -- 4000 pips
double stopLossCalc(const double& risk) {

    double stopLoss;
    double result;
    bool end = false;

    cout << "What is the size of your stop loss: ";
    cin >> stopLoss;

    while (!end) {

    if (!std::cin) {
        cout << "Enter a valid stop loss.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "What is the size of your stop loss: ";
        cin >> stopLoss;
    } else {
        end = true;
    }

    }

    result = risk / stopLoss;

    return result;

}

// What is contract size according to your broker  -- contract size 10
double contractSize() {

    double contractSize;
    bool end = false;

    cout << "What is your brokers contract size: ";
    cin >> contractSize;

    while (!end) {

    if (!std::cin) {
        cout << "Enter a valid contract size.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "What is your brokers contract size: ";
        cin >> contractSize;
    } else {
        end = true;
    }

    }

    return contractSize;

}

// Multiply result of previous equation and multiply that by contract size 10
void lotSizeCalc(const double& stopLoss, const double& contract) {

    cout << "Your lot size: " << (stopLoss * contract) << '\n';

}

int main() {

    double risk = calculateRisk();

    double stopLoss = stopLossCalc(risk);

    double contract = contractSize();

    lotSizeCalc(stopLoss, contract);

}
*/

/*
// forward declaration
double calculateRisk();
double stopLossCalc(const double& risk);
double contractSize();
void lotSizeCalc(const double& stopLoss, const double& contract);
*/

#include "lotSize.h"

int main() {

    double risk = calculateRisk();

    double stopLoss = stopLossCalc(risk);

    double contract = contractSize();

    lotSizeCalc(stopLoss, contract);

}













































