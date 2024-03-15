##
# Author : Yusuf Sakr
# Date   : 13, March 2024
# GitHUB : github.com/yusufsakr/
##

# Assign variales
SHELL      = /bin/sh
CC         = gcc
ARM        = arm-cortexa9_neon-linux-musleabihf-cc
CC_ST_OBJ  = -c 
CC_DY_OBJ  = -c -fPIC
CC_ST_ELF  = -L. ./lib/libmath.a
CC_DY_ELF  = -I ./includes/ -L./lib
AR_FLAGS   = rcs

TARGET_ST_LIB  = libmath.a
TARGET_DY_LIB  = libmath.so
TARGET_ST_NTV  = main_st_x86.elf
TARGET_ST_CRS  = main_st_arm.elf
TARGET_DY_NTV  = main_dy_x86.elf
TARGET_DY_CRS  = main_dy_arm.elf
SOURCES    = $(shell echo lib/*.c)
HEADERS    = $(shell echo includes/*.h)
MAIN       = main.c 
OBJECTS    = $(SOURCES:.c=.o)


static_native :
	$(CC) $(CC_ST_OBJ) $(SOURCES)
	ar $(AR_FLAGS) lib/$(TARGET_ST_LIB) $(OBJECTS)
	$(CC) -static $(MAIN) $(CC_ST_ELF) -o $(TARGET_ST_NTV) 

dynamic_native :
	$(CC) $(CC_DY_OBJ) $(SOURCES)
	$(CC) -shared -o $(TARGET_DY_LIB) $(SOURCES)
	$(CC) $(MAIN) $(CC_DY_ELF) -lmath -o $(TARGET_DY_NTV)

static_cross :
	$(ARM) $(CC_ST_OBJ) $(SOURCES)
	ar $(AR_FLAGS) lib/$(TARGET_ST_LIB) $(OBJECTS)
	$(ARM) -static $(MAIN) $(CC_ST_ELF) -o $(TARGET_ST_CRS)

dynamic_cross :
	$(ARM) $(CC_DY_OBJ) $(SOURCES)
	$(ARM) -shared -o $(TARGET_DY_LIB) $(SOURCES)
	$(ARM) $(MAIN) $(CC_DY_ELF) -lmath -o $(TARGET_DY_CRS)

clean_st:
	rm lib/*.o lib/*.a
	echo > "Cleaned, ALl DONE XD"

clean_dy:
	rm lib/*.o lib/*.so
	echo > "Cleaned, All DONE XD"


