#ifndef PRESSURE_SENSOR_H
#define PRESSURE_SENSOR_H

#include "stm32f1xx_hal.h"

void pressure_sensor_init(I2C_HandleTypeDef *hi2c);
void pressure_sensor_start_measurement_mb(void);
float pressure_sensor_get_measurement_mb(void);

#endif
