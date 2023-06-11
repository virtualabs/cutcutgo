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
SOURCEFILES_QUOTED_IF_SPACED=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/hal/watchdog.c src/main.c src/app.c

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/hal/watchdog.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o
POSSIBLE_DEPFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d ${OBJECTDIR}/src/grbl/grbl/settings.o.d ${OBJECTDIR}/src/grbl/grbl/gcode.o.d ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d ${OBJECTDIR}/src/grbl/grbl/jog.o.d ${OBJECTDIR}/src/grbl/grbl/print.o.d ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d ${OBJECTDIR}/src/grbl/grbl/protocol.o.d ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d ${OBJECTDIR}/src/grbl/grbl/serial.o.d ${OBJECTDIR}/src/grbl/grbl/planner.o.d ${OBJECTDIR}/src/grbl/grbl/system.o.d ${OBJECTDIR}/src/grbl/grbl/stepper.o.d ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d ${OBJECTDIR}/src/grbl/grbl/main.o.d ${OBJECTDIR}/src/grbl/grbl/report.o.d ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d ${OBJECTDIR}/src/grbl/grbl/limits.o.d ${OBJECTDIR}/src/grbl/grbl/probe.o.d ${OBJECTDIR}/src/hal/motor.o.d ${OBJECTDIR}/src/hal/timer.o.d ${OBJECTDIR}/src/hal/led.o.d ${OBJECTDIR}/src/hal/watchdog.o.d ${OBJECTDIR}/src/main.o.d ${OBJECTDIR}/src/app.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o ${OBJECTDIR}/src/config/cutcutgo/initialization.o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o ${OBJECTDIR}/src/config/cutcutgo/tasks.o ${OBJECTDIR}/src/grbl/grbl/settings.o ${OBJECTDIR}/src/grbl/grbl/gcode.o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o ${OBJECTDIR}/src/grbl/grbl/jog.o ${OBJECTDIR}/src/grbl/grbl/print.o ${OBJECTDIR}/src/grbl/grbl/motion_control.o ${OBJECTDIR}/src/grbl/grbl/protocol.o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o ${OBJECTDIR}/src/grbl/grbl/serial.o ${OBJECTDIR}/src/grbl/grbl/planner.o ${OBJECTDIR}/src/grbl/grbl/system.o ${OBJECTDIR}/src/grbl/grbl/stepper.o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o ${OBJECTDIR}/src/grbl/grbl/main.o ${OBJECTDIR}/src/grbl/grbl/report.o ${OBJECTDIR}/src/grbl/grbl/eeprom.o ${OBJECTDIR}/src/grbl/grbl/limits.o ${OBJECTDIR}/src/grbl/grbl/probe.o ${OBJECTDIR}/src/hal/motor.o ${OBJECTDIR}/src/hal/timer.o ${OBJECTDIR}/src/hal/led.o ${OBJECTDIR}/src/hal/watchdog.o ${OBJECTDIR}/src/main.o ${OBJECTDIR}/src/app.o

# Source Files
SOURCEFILES=src/config/cutcutgo/bsp/bsp.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c src/config/cutcutgo/peripheral/clk/plib_clk.c src/config/cutcutgo/peripheral/evic/plib_evic.c src/config/cutcutgo/peripheral/gpio/plib_gpio.c src/config/cutcutgo/stdio/xc32_monitor.c src/config/cutcutgo/system/int/src/sys_int.c src/config/cutcutgo/usb/src/usb_device.c src/config/cutcutgo/usb/src/usb_device_cdc.c src/config/cutcutgo/usb/src/usb_device_cdc_acm.c src/config/cutcutgo/initialization.c src/config/cutcutgo/interrupts.c src/config/cutcutgo/exceptions.c src/config/cutcutgo/usb_device_init_data.c src/config/cutcutgo/tasks.c src/grbl/grbl/settings.c src/grbl/grbl/gcode.c src/grbl/grbl/coolant_control.c src/grbl/grbl/jog.c src/grbl/grbl/print.c src/grbl/grbl/motion_control.c src/grbl/grbl/protocol.c src/grbl/grbl/spindle_control.c src/grbl/grbl/serial.c src/grbl/grbl/planner.c src/grbl/grbl/system.c src/grbl/grbl/stepper.c src/grbl/grbl/nuts_bolts.c src/grbl/grbl/main.c src/grbl/grbl/report.c src/grbl/grbl/eeprom.c src/grbl/grbl/limits.c src/grbl/grbl/probe.c src/hal/motor.c src/hal/timer.c src/hal/led.c src/hal/watchdog.c src/main.c src/app.c



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
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/35c43b7951a5447baf47141cdd91b2b3a2d9e863 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/f28f996250d9fd40dca95332278690f1e577dff8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/b1e3f8e962ba64748cab8898ebd6facfbaafa564 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/ee748bd12e99032a14d18a65be156078c3b587f3 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/f8ba4d6a4836f1b44492994a4332d0eac27d8e6e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/b75f2acceea9dd8a6728061ce7a24064e3293839 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/505381432d17afc8e8c0ad013e764ca3597d76f9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/7b46b980419f674029847d5facf38ecba3fa59bc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/39ddd47803d33a919ccdad4689d5f39cd9b377 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/1250b36938624aac06ba2a0003df61f5ed3c2491 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/3f5dd91c2c4a7a332785272367063d9d0a15469b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/d9f3d137a2252fad497c76c5b62756f9995620ca .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/8562ea7d88174ebefb267b6dad9dfdd8dceafd3d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/cc719158ed13d53dd7a1885d6edfb12f8e3c5c80 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/accafc7fea77586eb63d90727f80a75fb4e42350 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/202188e02d3833f23bb3b12457f8348ec913bdff .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/2303377cd09384e7fb99e9654713bf7f12a36896 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/d9fab29064e643d477cf7bc8ab7c6615364123b4 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/ccbf47a2bc1038417e911813020605b493aac56a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/c59460cd12946a75d95b0485e57452ddf4250e73 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/135e3ab92f10ba58c4a79a4de0d58873da3e2fc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/b9e8315b62c330cf4a3cf4c88c65161a0491bf49 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/c92ee8205ed5ae2919720d75be71de2d3f2d66a6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/134cba1ffd58ad4b6c184f010076d9ec004a5905 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/b5337506d6b23a849dcc8f59ccb2f16358aa8c82 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/d66b1b33e457b6a97d2d820ad6ceec970995405e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/f28f470caed9d9f5d6ab936f1c5c21747acec1ec .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/7ac134bbdd39b13d52ae2d0a741b1a71ca004b49 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/6956871346bdfc56c9818f52a7fce5a4567ee7b9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/c7c5b9246eaeff0c714d505a2ae44e5accd8bbd7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/27842753e6a427e35bdd17c66470ce15ce7830eb .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/a4b7945103c035e78747e89d6f1a47a4948baddc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/1333cda6fbdbdd60a5d23a834a6802fb50ed7d0d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/39eda4306cb1cb201e0d4a7294be0f011c6edba4 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/e31b091e5ffe5ab3795ce15051ef488f6cbf7cd9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/7d47521dcffee1b8d65fc46ec93ead93117a6230 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/3b3d95ebe55ae8d677eec3977a15436c7603ab32 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/a60c57828a510f3c9714b9df4106707cbfea6132 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/557f2834a54f670a9cb907d8b5605084bf5f47c0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/d2e9106c78f02bff3240c60db48966af95b7a6b5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
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
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/73711752c22f68c4f87ba8f25998c4405dd86d6e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -O1 -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
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
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/CutcutGo.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC0275F  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
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
