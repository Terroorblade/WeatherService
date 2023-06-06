#include <iostream>
<<<<<<< HEAD
#include "JsonService.h"
using namespace std;

int main() {
    JsonService js;
    Weather jw = js.getWeather("weather.json");
=======
#include "XmlService.h"


int main() {
    XmlService xs;
    Weather xw = xs.getWeather("weather.xml");

>>>>>>> feature-xml
}
