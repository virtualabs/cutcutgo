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
FINAL_IMAGE=${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=elf
FINAL_IMAGE=${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
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
SOURCEFILES_QUOTED_IF_SPACED=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/main.c src/app.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o
POSSIBLE_DEPFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d ${OBJECTDIR}/src/grbl/grbl/settings.o.d ${OBJECTDIR}/src/grbl/grbl/gcode.o.d ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d ${OBJECTDIR}/src/grbl/grbl/jog.o.d ${OBJECTDIR}/src/grbl/grbl/print.o.d ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d ${OBJECTDIR}/src/grbl/grbl/protocol.o.d ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d ${OBJECTDIR}/src/grbl/grbl/serial.o.d ${OBJECTDIR}/src/grbl/grbl/planner.o.d ${OBJECTDIR}/src/grbl/grbl/system.o.d ${OBJECTDIR}/src/grbl/grbl/stepper.o.d ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d ${OBJECTDIR}/src/grbl/grbl/main.o.d ${OBJECTDIR}/src/grbl/grbl/report.o.d ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d ${OBJECTDIR}/src/grbl/grbl/limits.o.d ${OBJECTDIR}/src/grbl/grbl/probe.o.d ${OBJECTDIR}/src/hal/motor.o.d ${OBJECTDIR}/src/hal/timer.o.d ${OBJECTDIR}/src/hal/led.o.d ${OBJECTDIR}/src/main.o.d ${OBJECTDIR}/src/app.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o

# Source Files
SOURCEFILES=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/main.c src/app.c



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
	${MAKE}  -f nbproject/Makefile-cutcutgo.mk ${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

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
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/3087083ccd70e62424b0586861fba5c928b10d3c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/5c2355dd89693be4c7979137a097499f3d765017 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/f6bd15aae3e9317c0e80dfc260523d88e136a4d9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/2d0be6c43374d6e084481cf1ca426604315492f3 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/a9cc4d518f008328ebbb776b312f56d04f403a4c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/52e8574d105dfa8e2218497393edaa4f48631815 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/b60db6f2579dc523ceb14352813219d83584bd42 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/4a5d9467ca02a80203ca6aec92f0692d16b8bf7e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/72d23c12138c544632bedadf985611a5d750e9ff .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/9cbe43ce73bbe64ea37e070c94c4b3c7ab67d9e1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/b5bd4d32a93ceb4a9eecd102fc3c8dd4aa319bfc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/ab7c4c6f8b60d9bf56343059508ab620db0c8b8c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/b4242c6a33f51236e958a6bc854eeb1f78b2cfe0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/2da2cb0992d3cc49626604df7e6459d98dcf1979 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/da5af5907c37d4e70a9c2fdbf247ce06614730b2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/7cfdd1f725eb9b3ff3c883266d43425d82fd7b20 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/a76f2b043344752ca847a1a74a735b49cd60e04c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/be6ff1fa282370b14791abac269cd54155249bbd .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/2eb3a9de9dfa8514d9e13a32323f09eaa0e552ec .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/3488d5601af92425a255dcc5331dcff2ea206d05 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/b59340c3f610e04ec6adf1d501c5204b30d2a35c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/34f4a3ce9c518638deae62f6378cded466c2d3c2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/3e0e1b26f148fbfa56cffb8e216f39c528902753 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/44e205879bdad93dd19a1148aaaefcc5aabb8298 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/ff7d1878129d698ea0d77cf81220987236bb1ec5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/25f00db0ea4b23bb214d37530bd267a2e9fa3357 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/932197af23294c5bc48d62fe78a8a521e01d6529 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/382bd505ec6b3bc6b99cbe814ceba47190e4352f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/2da142ac7bcc2578204cc683e1498f7fc4048f89 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/6bdbb9533a259617872317307d7acf3e256bbd36 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/94d886bd66838e2356e77f7af627df444d9059de .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/6d0c8d82d89b2c4be13e7e7a505ce43c45c1a463 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/a78305f2b86e0d56e878a001222f39a016b48df0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/81524579374f7f5f3cecd27f078f3c7eabaea901 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/73cd82b5f8ebf001ce7f9df9f475ae99fa6c5130 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/ee5bba5b046a1357ac5e39d5a24a43bafb91ebd2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/55faae7f955806c06c34e8b462757b5798a2005 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/b9b6e615ec039e67809ca3fe34f87c9ee916e461 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/7a73a44267f017a2120cd7f7c4f030e4568c40f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG -D__MPLAB_DEBUGGER_PK3=1  -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/a189fe4d8fb29c7dc6d1eed75cddffb9200e60a1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/48504f435aea6be0934b3423428a6b5159df147d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/5eabd089c710b5c424ebe52ce8b88bea36111e0e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/b57d2457a31feb5d8acf218abd92620b5e979355 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/beda6a39e4e19783ececbc98740367132d3ea3fe .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/ce672e099551d790715b603d9ac88162cc2ecae0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/56216953b7580924d2decc70f134c844ebd6223e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/9cf8977bcd0454a183a60e950458bebb1b87b212 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/2e1a397f6f4b716c614bfb6ff6e4bd8ea2417c70 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/fb307a06e2b166037a9fa0ae56d6d2f2bff95df7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/df02e9338cf71d36fa04f253bf170b950bcf7804 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/c9d1aaaaf261c495f05015d2d949609988c94192 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/3f7725a2c6062cf6213baeb39e7197d442226c65 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/d7077047fda9dc0dbcda13a5bd39c2ab36b3d76e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/7643fdbbdedd0df183b4bfaf3d6bbf9fe3b27cf2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/5cc4fd6cb68b420da84d27547b26b2c8b26ab7f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/fede2cb69cf17ce7fb8ee38f55e4e82cf9d56dc6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/8570afabc7b19cb7b875ea226c01720c7d5ebbf8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/bc4686f038e64232a8c447ac9ea0a99cda3b27ee .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/1f69b61b3fffb37bc9361650e2f9e34c13e383fc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/c7c3560a4966cc1781ed676cf8900ef15cbfc2c9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/f9a1f6727ab08ae0dd37604ed2172504475261c8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/b22eecbb67d924c5c0b01edd2b311423074e5d9e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/16de60637e201fededea97e1e75bec60d4228fd0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/2f0ea569dba9554816b00de5bc466d509b721832 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/6b64a6cf77cf2201ee14f72f674f1f4b17638d6e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/32ed0f409e8a8e4dc9e5844364eb1106821566b8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/aa647b9ac133aaf48f60b4b615266df91dbc7be7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/99ff798debd14bedbe6c6d2d3dd6fe488f0cdb5c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/1cc35be388b741a529cebc2b46ac8737a0be2961 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/88cd3bb5abc4505c0cdf2659eb3136f799370ff8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/7365f4838afb9eb692c6dc0c53ed5f960da90607 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/cefc411acb594ae9c9345f1a06a3bf74891e6381 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/780ff364f9a8417360a4e0f5cee181964b1297d2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/f060b08638413273bcbd7b4a0e5f2b99c33681f8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/4c6c2e02bdf5810e455eeb3204ced4b55fcec1e6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/120168a84016dd3c93b220c55c2e1a063a53a260 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/4664715e75baa60eec744180ad2b7d5f0aa9c16a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/ff13dcf39b325d8710b10f4e685eddb6cd0d9892 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    src/config/cutcutgo/p32MX470F512H.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g -mdebugger -D__MPLAB_DEBUGGER_PK3=1 -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC0275F  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=__MPLAB_DEBUGGER_PK3=1,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   src/config/cutcutgo/p32MX470F512H.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	${MP_CC_DIR}/xc32-bin2hex ${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} 
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

DEPFILES=$(shell "${PATH_TO_IDE_BIN}"mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
