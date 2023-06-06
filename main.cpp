#include <iostream>
#include "JsonService.h"
using namespace std;

int main() {
    JsonService js;
    Weather jw = js.getWeather("weather.json");
}
