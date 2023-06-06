cmake_minimum_required(VERSION 3.23)
project(WeatherService)

set(CMAKE_CXX_STANDARD 17)

<<<<<<< HEAD
add_executable(WeatherService main.cpp Weather.cpp Weather.h JsonService.cpp JsonService.h Service.h)
=======
add_executable(WeatherService main.cpp Weather.cpp Weather.h cmake-build-debug/Service.h XmlService.cpp XmlService.h Service.h)
>>>>>>> feature-xml
