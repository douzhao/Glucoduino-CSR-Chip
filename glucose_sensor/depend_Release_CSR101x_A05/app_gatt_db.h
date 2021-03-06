/*
 * THIS FILE IS AUTOGENERATED, DO NOT EDIT!
 *
 * generated by gattdbgen from depend_Release_CSR101x_A05/app_gatt_db.db_
 */
#ifndef __APP_GATT_DB_H
#define __APP_GATT_DB_H

#include <main.h>

#define HANDLE_GAP_SERVICE              (0x0001)
#define HANDLE_GAP_SERVICE_END          (0x0007)
#define ATTR_LEN_GAP_SERVICE            (2)
#define HANDLE_DEVICE_NAME              (0x0003)
#define ATTR_LEN_DEVICE_NAME            (1)
#define HANDLE_DEVICE_APPEARANCE        (0x0005)
#define ATTR_LEN_DEVICE_APPEARANCE      (2)
#define HANDLE_GATT_SERVICE             (0x0008)
#define HANDLE_GATT_SERVICE_END         (0x0008)
#define ATTR_LEN_GATT_SERVICE           (2)
#define HANDLE_GLUCOSE_SERVICE          (0x0009)
#define HANDLE_GLUCOSE_SERVICE_END      (0x0014)
#define ATTR_LEN_GLUCOSE_SERVICE        (2)
#define HANDLE_GLUCOSE_MEASUREMENT      (0x000b)
#define ATTR_LEN_GLUCOSE_MEASUREMENT    (17)
#define HANDLE_GLUCOSE_MEASUREMENT_CLIENT_CONFIG (0x000c)
#define ATTR_LEN_GLUCOSE_MEASUREMENT_CLIENT_CONFIG (0)
#define HANDLE_GLUCOSE_MEASUREMENT_CONTEXT (0x000e)
#define ATTR_LEN_GLUCOSE_MEASUREMENT_CONTEXT (17)
#define HANDLE_GLUCOSE_MEASUREMENT_CONTEXT_CLIENT_CONFIG (0x000f)
#define ATTR_LEN_GLUCOSE_MEASUREMENT_CONTEXT_CLIENT_CONFIG (0)
#define HANDLE_GLUCOSE_FEATURE          (0x0011)
#define ATTR_LEN_GLUCOSE_FEATURE        (2)
#define HANDLE_RECORD_ACCESS_CONTROL_POINT (0x0013)
#define ATTR_LEN_RECORD_ACCESS_CONTROL_POINT (17)
#define HANDLE_RACP_CLIENT_CONFIG       (0x0014)
#define ATTR_LEN_RACP_CLIENT_CONFIG     (0)
#define HANDLE_DEVICE_INFO_SERVICE      (0x0015)
#define HANDLE_DEVICE_INFO_SERVICE_END  (0x0025)
#define ATTR_LEN_DEVICE_INFO_SERVICE    (2)
#define HANDLE_DEVICE_INFO_SERIAL_NUMBER (0x0017)
#define ATTR_LEN_DEVICE_INFO_SERIAL_NUMBER (15)
#define HANDLE_DEVICE_INFO_MODEL_NUMBER (0x0019)
#define ATTR_LEN_DEVICE_INFO_MODEL_NUMBER (21)
#define HANDLE_DEVICE_INFO_SYSTEM_ID    (0x001b)
#define ATTR_LEN_DEVICE_INFO_SYSTEM_ID  (8)
#define HANDLE_DEVICE_INFO_HARDWARE_REVISION (0x001d)
#define ATTR_LEN_DEVICE_INFO_HARDWARE_REVISION (11)
#define HANDLE_DEVICE_INFO_FIRMWARE_REVISION (0x001f)
#define ATTR_LEN_DEVICE_INFO_FIRMWARE_REVISION (21)
#define HANDLE_DEVICE_INFO_SOFTWARE_REVISION (0x0021)
#define ATTR_LEN_DEVICE_INFO_SOFTWARE_REVISION (27)
#define HANDLE_DEVICE_INFO_MANUFACTURER_NAME (0x0023)
#define ATTR_LEN_DEVICE_INFO_MANUFACTURER_NAME (23)
#define HANDLE_DEVICE_INFO_END          (0x0025)
#define ATTR_LEN_DEVICE_INFO_END        (7)
#define HANDLE_BATTERY_SERVICE          (0x0026)
#define HANDLE_BATTERY_SERVICE_END      (0xffff)
#define ATTR_LEN_BATTERY_SERVICE        (2)
#define HANDLE_BATT_LEVEL               (0x0028)
#define ATTR_LEN_BATT_LEVEL             (1)
#define HANDLE_BATT_LEVEL_C_CFG         (0x0029)
#define ATTR_LEN_BATT_LEVEL_C_CFG       (0)

extern uint16 *GattGetDatabase(uint16 *len);

#endif

/* End-of-File */
