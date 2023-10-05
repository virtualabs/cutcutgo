#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
ifeq "${IGNORE_LOCAL}" "TRUE"
# do not include local makefile. User is passing all local related variables already
else
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-cutcutgo.mk)" "nbproject/Makefile-local-cutcutgo.mk"
include nbproject/Makefile-local-cutcutgo.mk
endif
endif

# Environment
MKDIR=mkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=cutcutgo
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=elf
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

ifeq ($(COMPARE_BUILD), true)
COMPARISON_BUILD=-mafrlcsj
else
COMPARISON_BUILD=
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Source Files Quoted if spaced
SOURCEFILES_QUOTED_IF_SPACED=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/hal/watchdog.c src/hal/button.c src/main.c src/app.c src/reset.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/hal/watchdog.o ${OBJECTDIR}/src/hal/button.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o ${OBJECTDIR}/src/reset.o
POSSIBLE_DEPFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d ${OBJECTDIR}/src/grbl/grbl/settings.o.d ${OBJECTDIR}/src/grbl/grbl/gcode.o.d ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d ${OBJECTDIR}/src/grbl/grbl/jog.o.d ${OBJECTDIR}/src/grbl/grbl/print.o.d ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d ${OBJECTDIR}/src/grbl/grbl/protocol.o.d ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d ${OBJECTDIR}/src/grbl/grbl/serial.o.d ${OBJECTDIR}/src/grbl/grbl/planner.o.d ${OBJECTDIR}/src/grbl/grbl/system.o.d ${OBJECTDIR}/src/grbl/grbl/stepper.o.d ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d ${OBJECTDIR}/src/grbl/grbl/main.o.d ${OBJECTDIR}/src/grbl/grbl/report.o.d ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d ${OBJECTDIR}/src/grbl/grbl/limits.o.d ${OBJECTDIR}/src/grbl/grbl/probe.o.d ${OBJECTDIR}/src/hal/motor.o.d ${OBJECTDIR}/src/hal/timer.o.d ${OBJECTDIR}/src/hal/led.o.d ${OBJECTDIR}/src/hal/watchdog.o.d ${OBJECTDIR}/src/hal/button.o.d ${OBJECTDIR}/src/main.o.d ${OBJECTDIR}/src/app.o.d ${OBJECTDIR}/src/reset.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/hal/watchdog.o ${OBJECTDIR}/src/hal/button.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o ${OBJECTDIR}/src/reset.o

# Source Files
SOURCEFILES=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/hal/watchdog.c src/hal/button.c src/main.c src/app.c src/reset.c



CFLAGS=
ASFLAGS=
LDLIBSOPTIONS=

############# Tool locations ##########################################
# If you copy a project from one host to another, the path where the  #
# compiler is installed may be different.                             #
# If you open this project with MPLAB X in the new host, this         #
# makefile will be regenerated and the paths will be corrected.       #
#######################################################################
# fixDeps replaces a bunch of sed/cat/printf statements that slow down the build
FIXDEPS=fixDeps

.build-conf:  ${BUILD_SUBPROJECTS}
ifneq ($(INFORMATION_MESSAGE), )
	@echo $(INFORMATION_MESSAGE)
endif
	${MAKE}  -f nbproject/Makefile-cutcutgo.mk ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX470F512L
MP_LINKER_FILE_OPTION=,--script="src/config/cutcutgo/p32MX470F512H.ld"
# ------------------------------------------------------------------------------------
# Rules for buildStep: assemble
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: assembleWithPreprocess
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/bf6ea7a624f2a80f98b073e3085feecfe1db9831 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/87f19e34c6d409696cffc83ce85e9475e828fce9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/6f4fac7c505d019cd47f012edb585e1e9560a0e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/5109adb197659d9042c07dd7aa90ceee078e8f71 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/432d034b19e6653f0c88373c7e08197157805a08 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/747792b229629a5f6a1c31d8b92d15308feb0c81 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/c85a919a2da25a77239d64c72ff7fc6c85193b08 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/7734f6b1e18f684efa8b7291cfb75ace2a58bb6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/509d18ec9a01c27af25a2e69ca23c434da633a86 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/65dc1d9cdb4b49b610908db25692bcc5931173ca .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/131a2c5a198b357df752c0ba0a516c4343a0d22f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/779e334a0754335ba8342b98bd2c398f73ea43b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/a178a73e8c99cf796bc2da0f25313af4897eb472 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/ae52d00221324513d762aee43291416af7ba2937 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/5e3762edba82350e5ddba159347d32aac9b9e05f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/abbbfd506d338caf39286a5e5cd0d7fc3b5048f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/665230102a3f6653238b54b82b984621c53f80a6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/40a97a5751092a7ad3f416111a22e84206bcf84 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/e5af2ccde122b0db15cd33a3e196e8eca173c67 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/d0e03c8164b7b7758b9f0de0dc5d5a5cdb44f3f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/87c26cdb7a66171bc61061cd4815eb07afd514b1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/b1f28fb127ef96025b155aa51564e0586784b32d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/e13f9aaeac731db3ce6c2619c2670fa6a8487ca8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/2103ebfef29730067871aea9520f37e61b8bede7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/95af7f779ef8f60f55a6e9e8d503cefc4c0997b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/f5a5e6d70f14a7a210bf95830eef6351476f3f87 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/6f5d388293eb678b3574e4aba2a9e513f94d997b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/e89064d73c6a1c671ae3fd8e16b02b5cad83bb85 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/e6e17b4d229bcefe695c05e8bbeb050478e303f9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/8cbf24fca3084a95bef4f349e07883440f91034 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/71e2186057a2b3a496bf01d6221e1c8a8ac62f83 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/686e3346f0cac3b9e7b1235281ec59c3f56a2706 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/22a43f8bda3a6bf5d5d310e46f3ccdbf0bed7ddc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/13a5fd93bf76bcfe96cd90706e6326b0384d0938 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/159d7de0c130a1d44f9813fd9308e8618b9cb902 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/cabc8d6c83589ca569483a97223e191537e7827c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/927cedb281e04cb402a000a73a39a1f860a679ce .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/a4a1ec745ad59ea523edc1b223e5987801d68161 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/button.o: src/hal/button.c  .generated_files/flags/cutcutgo/14f44641dc2d45a3c16d31882135d2ce0d71fb1c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/button.o.d 
	@${RM} ${OBJECTDIR}/src/hal/button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/button.o.d" -o ${OBJECTDIR}/src/hal/button.o src/hal/button.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/6f10e179f8c9a3de69cf0ff5140927b5de94ad4c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/99ac632fcd01e25ebe2872bbc8a5ac9e6dffd34a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/reset.o: src/reset.c  .generated_files/flags/cutcutgo/9d51698c341b11a6f07ad1b74fbd2c88bfadc92 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/reset.o.d 
	@${RM} ${OBJECTDIR}/src/reset.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/reset.o.d" -o ${OBJECTDIR}/src/reset.o src/reset.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/8b0aed3a25ececef2608762538ddfcfaa0dc3350 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/810c2d0a0fbf7a7080445ca556c4d74f83b64187 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/848e09c4ebce27252a240b19a6e251bf30c5775a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/39797a1f4974e16acfd3514e4a8f9c9eefceb0dc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/3c362a33227fe6373ddfda592b1450db6e4cb610 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/98c0b8173cb993b5da490e83b34b4933eafc6c2d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/c69e3eaafe5cc56d0e8a3d2a260ee103e940c2b4 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/3db11b032fc95e3c942965aebef058aad2f50645 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/810eda7fb5469a19e8d28ec735d1eac8f6d7745b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/90e82ad71868a8b3ddb373a072989493d54c511f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/fd6de343791bdf035ac64b49414d6771c9871b23 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/deddf40f77ce1f6a2ed2d50701c7f35cdaed6c10 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/b36630e7cfbc6949a75ab4c71f9045e23c23a0f2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/a1a4a425bf370558d9479d5cd3a460eb05554f6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/f45e10b074c5425704f96e5dc53a8292ca3ddbc5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/17618bd80eb15663cbe1367a7360fc55d76f09c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/fb08f3b3bf4caf26ffc82f266439bf9ab3a52e75 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/9df9210f5e9987d4f82d8d874d204fc13e38884c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/2aa754034acf596932f70a54591c79bc7a82572d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/6c057bb25f3108021c500d778a50d68c0e94fc7f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/2fcaf6f30ba8935cca804d13d4a4fecdd3ff74dc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/2f9af2819ae2a95b87212c2c83f21504063d054e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/6bbf1389d56d090ba4d014f4af96d219b598ebe6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/8a5f0624180eca557f6cbb833359d942b05d2240 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/cd6343949f91f8e3b2292358084c6b8a835795c7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/edaa937a9b540825ed1403ddffea1ba4123dd77a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/dbf522ad7362d1237c2100363bff62707e1f70ec .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/1e22d708aa38f5d4c5b3a4865df3f6dd8062ae22 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/7adcddd0226dc34f11f0646911c89065763591cf .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/80d8eb4e9d410e277851291989bf6c8fb6f81422 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/8665e65bb7b7de8a0df918d13655fac8496a40f8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/d6a3b8b5d89216e74ca3002982999b4543c18800 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/7fc026f7fba9ac90d48f0bb1d06df32f8bc6dac .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/f3832f5b91560752768dc931cff6e7266fd34a54 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/7614df7419522a27baeeb5124715689c7594b288 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/3c7808c80cbce86eb12e3cedaaac3cf0ce0abcf .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/f6b4d57856726e63328052ba23cbcfe363224e34 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/b031d43e72bcf94d6a29309c6ab02512ec4c9b27 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/button.o: src/hal/button.c  .generated_files/flags/cutcutgo/ff06ebaa958ef4196615ca6251d0fc7a0cab1336 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/button.o.d 
	@${RM} ${OBJECTDIR}/src/hal/button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/button.o.d" -o ${OBJECTDIR}/src/hal/button.o src/hal/button.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/60248b7461e358c6232290bc97a5733f3c0ab79e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/8d6bb1c21204b874c3155d34c4322358400dc2b0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/reset.o: src/reset.c  .generated_files/flags/cutcutgo/c6fa79c8fe7307d9d0bdbd66a8d1460b535f5cb5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/reset.o.d 
	@${RM} ${OBJECTDIR}/src/reset.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/reset.o.d" -o ${OBJECTDIR}/src/reset.o src/reset.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    src/config/cutcutgo/p32MX470F512H.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC0275F  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   src/config/cutcutgo/p32MX470F512H.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}/xc32-bin2hex ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${OBJECTDIR}
	${RM} -r ${DISTDIR}

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(wildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
