# IOT Feather
Embedded Systems IOT project that utilizes Adafruit Feather M0, OpenWeatherMap
to create a simple home weather station. Created for *IOT: Internet of Things*
course @ WUT Warsaw University of Technology.

The idea behind this project was to exchange it between students group and work on different features.   


Visit the [Wiki](https://github.com/LatexB/iot-feather-M01/wiki) to read more about the project.

# Features
- Requesting data from OpenWeatherMap for outside weather data,
  - now featuring api requests for different cities
- BME280 Sensor to read surrounding's general temperature, humidity and pressure
- MCP9808 Sensor to read surrounding's accurate temperature.
- AS7262 Sensor to read visible light intensity

# Built with
- [Adafruit Feather M0](https://www.adafruit.com/product/3010) (ATSAM21 + ATWINC1500) uController
- Adafruit OLED FeatherWing 128x32 128x32 display shield
- BME280 I2C/SPI Sensor Breakout Board
- MCP9808 I2C/SPI Sensor Breakout Board
- AS7262 I2C/SPI Sensor Breakout Board
- OpenWeatherMap API

# File structure:
```
|
|-- src
|   |
|   |- Main.h (main of the program)
|   |- Main.cpp
|   |- ApiConfig.h  (configuration for api calls)
|   |- ApiConfig.cpp
|   |- WebClient.h  (webclient for api calls)
|   |- WebClient.cpp
|   |- WifiConfig.h (configuration for wifi connection)
|   |- WifiConfig.cpp
|   |- Display.h    (working with oled display)
|   |- Display.cpp
|   |- JsonParser.h (parsing the reponse from API)
|   |- JsonParser.cpp
|   |- Common.h     (debug switches)
|
|- LICENSE
|- platformio.ini
|- README.md --> This file
```

## Future development note
Project was built using PlatformIO extension for VSCode.
