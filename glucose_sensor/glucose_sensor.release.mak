###########################################################
# Makefile generated by xIDE for uEnergy                   
#                                                          
# Project: glucose_sensor
# Configuration: Release
# Generated: Thu 19. Mar 16:23:29 2015
#                                                          
# WARNING: Do not edit this file. Any changes will be lost 
#          when the project is rebuilt.                    
#                                                          
###########################################################

XIDE_PROJECT=glucose_sensor
XIDE_CONFIG=Release
OUTPUT=glucose_sensor
OUTDIR=C:/Users/bentr_000/Desktop/glucose_sensor
DEFS=

OUTPUT_TYPE=0
LIBRARY_VERSION=Auto
SWAP_INTO_DATA=0
USE_FLASH=0
ERASE_NVM=1
CSFILE_CSR100x=glucose_sensor_csr100x.keyr
CSFILE_CSR101x_A05=glucose_sensor_csr101x_A05.keyr
MASTER_DB=app_gatt_db.db
LIBPATHS=
INCPATHS=

DBS=\
\
      app_gatt_db.db\
      battery_service_db.db\
      dev_info_service_db.db\
      gap_service_db.db\
      gatt_service_db.db\
      glucose_service_db.db

INPUTS=\
      glucose_service.c\
      battery_service.c\
      dev_info_service.c\
      gap_service.c\
      glucose_sensor.c\
      glucose_sensor_gatt.c\
      glucose_sensor_hw.c\
      nvm_access.c\
      uartio.c\
      byte_queue.c\
      Calc_CRC.c\
      $(DBS)

KEYR=\
      glucose_sensor_csr100x.keyr\
      glucose_sensor_csr101x_A05.keyr


-include glucose_sensor.mak
include $(SDK)/genmakefile.uenergy
