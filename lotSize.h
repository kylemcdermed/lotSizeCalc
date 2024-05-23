#ifndef LOT_H
#define LOT_H

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



double calculateRisk();
double stopLossCalc(const double& risk);
double contractSize();
void lotSizeCalc(const double& stopLoss, const double& contract);



#endif
