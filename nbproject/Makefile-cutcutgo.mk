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
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/850bc103b8c47c9d27564df6ee26320f2d44abbf .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/5e7cb82ebfe757e7a7ef568d29eeb84eedf34160 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/17cd6625d19d123fb1b919135266727d8d630fc8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/8f26abdfc35b2caea94b49bc09e08d2b4d8d8f21 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/88684495389897f3c4db1b15b9f32bdd4c8261ee .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/5b779c2d87c02ac490db767211c0088e413228a0 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/19acdbf9995c0d2849a158fd6444adfcdb4cc2aa .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/b2e3743a75a568b1d73f2f690a60b98a2d836e4f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/44cb5526d001ae430d5bb41ef3eb800a91f6f178 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/77ca61b6407c318773f7944b3488c625bb1e1474 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/4526ced3ff9ce029c3aed178bf637bcc5159583b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/b83e57f7354b2b3cad6248ea4a8598ed75b4bc75 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/f4d07bd5378b0cf76ba11d89f7db9254b75931c9 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/c0957f7a17f9fd3e5f23b0e3fa011acd6d442b9d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/2ec768a9c84354f8b4c56388c355ee76629f6f9f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/367fedefd4d137731cdf4a11d82caa7bbcf241a2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/3ab4982f6aa9f9d9e99800eb5d12ef2d10e48190 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/51fac2fd0d04c4d497e3c80364425bfa4d237b9c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/797554b3e864b5b6dc97e1a3253bf9274a44e3b4 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/a09099309f9d679f3d1e516c4d8eb3818f203d96 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/264b2789bdefc774ce52e9f7ef0bc922d0531547 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/d75af90afde99bcbf3a6fa9106b321ae40b255a5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/281e2071c84a7f93c0730f37b7acdb43de22d9fe .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/12ecf650fe0e687f8141cbe770c493f90c8f8df2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/7908ddacd9126df81332232d9e06c941f899de8d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/318a413f56d38b57f7d982fe5f7da415fa8f1929 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/722d816be2e1d794e0ab0a2f6b2ca1b85fb72ff7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/1c4aa9c4d1cedea4c73631b2bc35cb8a444ca244 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/3f8ebeecb628678a1cfa38986450e636cf33ca11 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/db6e0e70b4913d4b8ea7ffa003fa8e0706a2b9a7 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/d2d5627feb0d09d32814a78b3a964854d78478fd .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/9170d2bbb8e8e9a9cc52672d882f278bc5b22ff1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/c9dfc86edf17f8848351271e99f11a779546d2be .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/974e6d1ada673d153a48f709c27a7db103b76721 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/ca912eb2714702fc12c8883623b195caf84797bc .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/383a8177f20d506ecab0579e72c78fe866b55c3d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/88f8babedd637272e73d902a26d16637675ab8c8 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/65565da82c4ea2f490bbba534d403a657cfb0e4a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/4e0b6c4442f0c746f0a4700280378bbad99b02ab .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/3af6ddf7a95de16315b309eed228f932e5b2f4a4 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo/e5104ff8f6b3b85decd3978ea4c3cf0c92cece0f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo/c0d2703a9d8dfe5a4c2c98db2cdb4f97f758f054 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo/12bff858a9e04ece89abc244d54d595ccfa31f0c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo/96c8d16b65546ce697215426dbab6330307c83ea .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo/f6238c6cae220cd788c02be466cb8998818ee7a2 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo/56ac4ddf899085551e6ee4d739ebfbd981724182 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo/7f02bd84bd0d1d26a526efed84914eff5a7ffd3b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo/6519089b592598bbd192c2bcbf9530b3ff2a3820 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo/e29d47c0d36804081ffc7317d08ca09db5a5bb93 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo/90534d79b32344bd8d94a42128f1a6afd2382f24 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo/7625942260c14846687157799f768e231b500027 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo/e971454cd8846b7d15a098aa1b0fd23b50e9f51a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo/6fc88b92e77f867c7e2074f51b87e6fdaa7d5434 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo/356d7b1e1cfca835d41d6f7f2483bba520af08ed .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo/d91c2677f4ba51c459c50c1bffab0f4da99966ed .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo/c8d45fc805ee32c0bf2d39213197edbf0e3e4c2c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo/8b8051115a41f46f0b4c07425b0df01746c2098a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo/e41c4ec08ed0df697b569a19804b171c80a81d35 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo/1e3a7b423d1bedbce5e45746d4e383e2ee335f7b .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo/7f5154dd2b202cd85c065a27f1cb0c1b48b6114a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo/54d38846082b40f0c140028c03e79de840bf63d3 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo/1edaeb05c63511cce65c2f6cc5da8469da1b27e6 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo/cd13f480b9d0ac7c06036d8898d4b2283bd48b5c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo/cac0ae61b4a12f004766da02f990488a5dc93426 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo/437907ef39ad3a746e607dcb7b865f4a71efe99a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo/975ed7513e8056acc5a752e64525884c018cd220 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo/33a33ef64f8ffed9e625d542c8c7441b2e5bd2d1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo/294d854f5a9481d2e7c473d02350bded0eb7844a .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo/47e2441c1457781194ec9ed052e7d4e003fa552e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo/366543f75cf70269af16345f67ea07a04280d4f .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo/b7ac1cc24d28cc8a93f3887864c6e42397d6fcc5 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo/53db0928ae0dd25c6d433eabc83d5abae3a25244 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo/9c4226f28a852edba080c0ee4ba15d035e2e1111 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo/707a4781a7d5abe1cda6809733713d7e01cecf42 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo/15b495a253a1d983075775b104613b6aab68a95d .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo/3ffcafbcf54d402a8a5f14d8f0dc5462d42153cf .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo/91fbb595ee15769ac7ed4a62ded417e8a6cf8831 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo/518b249d54abd520c9556c4c06ccdeaeecf7866e .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo/42db108c3c017df6ef1e60114558c0da1ce8767c .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo/254f70ede75362292f72900b1b48099b939c95e1 .generated_files/flags/cutcutgo/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -mdfp="${DFP_DIR}"  
	
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
