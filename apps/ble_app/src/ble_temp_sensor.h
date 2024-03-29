/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

#ifndef H_BLE_TEMP_SENSOR_
#define H_BLE_TEMP_SENSOR_

#include <log/log.h>

#ifdef __cplusplus
extern "C" {
#endif

extern struct log logger;

/* define how many record we need to check */
#define LATEST_TEMP_COUNT 10

/* arry for recording the history tempture */
extern int16_t temp_record[LATEST_TEMP_COUNT];

/* function to convert the tempture sequence */
extern void get_temp_record(int16_t *record_array);

/* Use the first "per user" log module slot for ble_temp_sensor module. */
#define LOG_MODULE (LOG_MODULE_PERUSER + 0)

/* Convenience macro for logging to the ble_temp_sensor module. */
#define LOG(lvl, ...) LOG_ ## lvl(&logger, LOG_MODULE, __VA_ARGS__)

#ifdef __cplusplus
}
#endif

#endif
