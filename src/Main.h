#ifndef MAIN_H
#define MAIN_H

#include <Arduino.h>
#include "WebClient.h"
#include "JsonParser.h"
#include "Display.h"
#include <ctime>
#define REQUEST_INTERVAL 600
#include "IndoorSensors.h"

typedef enum
{
  A,
  B,
  C,
  NOT_PRESSED,
} ButtonType_t;

typedef enum
{
  INFO,
  TEMPERATURE,
  AROUND,
  INDOOR,
  INDOOR_TEMP_PRECISE,
  ERROR,
} DataType_t;

extern String location;
extern String real_temperature;
extern String feelslike_temperature;
extern String pressure;
extern String humidity;
extern String indoor_humidity;
extern String indoor_pressure;
extern String indoor_temperature;

extern bool BME_ACTIVE;

extern void OnButtonPress(ButtonType_t btn);
extern void Display_ShowData(DataType_t data);

#endif /* MAIN_H */
