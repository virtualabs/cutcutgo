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
ifeq "$(wildcard nbproject/Makefile-local-cutcutgo_bl.mk)" "nbproject/Makefile-local-cutcutgo_bl.mk"
include nbproject/Makefile-local-cutcutgo_bl.mk
endif
endif

# Environment
MKDIR=mkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=cutcutgo_bl
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
	${MAKE}  -f nbproject/Makefile-cutcutgo_bl.mk ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

MP_PROCESSOR_OPTION=32MX470F512L
MP_LINKER_FILE_OPTION=,--script="src/config/cutcutgo/p32MX470F512H.bl.ld"
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
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo_bl/db070c3a37f57d0c98c1fddb61148795852e9d67 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo_bl/2ca33aa6ee1fa4de9756c21712f1e56667856640 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo_bl/33c94596b861ef9980494d3b30c20cb05a1f9f02 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo_bl/238ec4d437341720153f63fbabe05d9e3485fd08 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo_bl/745f8fa8dbcd3a1db3a2d693da6c9f77c82d9332 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo_bl/219f4118dd5c9862c0616ddeb88314d6e3a4fd02 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo_bl/4001d94ec629a49f24a564d983eb2b2eadcafcf5 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo_bl/6e9c780bf60de9186c1fcc08f89a19893da6e9ef .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo_bl/28fdf824a851a0c83d522db5261f1e9967545fda .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo_bl/2cde3621bb00cd1057095604d6f0b1d0255a37f1 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo_bl/e5cfc60768e31c0c1aa0649ff3592625c1e26699 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo_bl/49f9c9580c70d41d7196b941b77ffb99b9d94c4b .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo_bl/aa06d60e57af669ac6782bcec3d4006ce4559bf2 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo_bl/f21fb14eb4fa6d2ec011f08bbd2c7b3787395824 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo_bl/4c654213def787a0356af6101d29668ff9b9c68d .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo_bl/e90f367c0a2449736759b33f621232543b12cf96 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo_bl/ab112d1ef7c4c1779f128effc84b6a9525bb8c0e .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo_bl/df5ac39e4e468a1a51e54e6352a014a555514e14 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo_bl/9dd9a26c1c8ea17ab2c7c54dd36a6a34b9e5810d .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo_bl/8e2795478a5586bfd7f6b44ba9f0d749e7d2dd63 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo_bl/8c86517db156c6e897cb48f27c49477de52a0350 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo_bl/4341567df54c57b8c32139f717dfc5ffbd836c16 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo_bl/cf2a308cc036c25b5747e29b1465835bf29ac8f4 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo_bl/29a27e024261ab25e1fb6c9d5e9e1a0b0be3fb74 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo_bl/16adbdaa81f62f970d9c62e8903ddfbb37a0178d .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo_bl/39b9ed5bb2ff578eefd680b7098e41b5d073df91 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo_bl/2384f8ac502e2721b151e86e08136bd81119a481 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo_bl/17287fadd5af8dc564c9b137ef1d267444c0fbe7 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo_bl/861e6e2c36b25bbb1f5e88cafda1a06ce3382356 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo_bl/89ebe855c63d423341236256505cdd4f328fe5fd .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo_bl/76271d5a6d093ab59f51254f8f8f09c95457ddab .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo_bl/1d6e4b1aaac70dac6e7aa46901f4a42df7a8dde4 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo_bl/109ac0d8e2502ea35420bed767e5dcf9c9350bc8 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo_bl/f7ee6cfadf9eb1759d385b9023265a3a33af3915 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo_bl/4c1097e55164553e050b74292dcaec0834c240f6 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo_bl/a7ca1290b1a244dd6f36e58a24572c6ae7568e25 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo_bl/c4dbd0d42eff2d598d625b0803871d6bd48d2abd .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo_bl/c72f959db4e6ed134fe5002df3ba3a652dd01c7b .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/button.o: src/hal/button.c  .generated_files/flags/cutcutgo_bl/16c1585c44412f3608c6545670fc26bcf35e6543 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/button.o.d 
	@${RM} ${OBJECTDIR}/src/hal/button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/button.o.d" -o ${OBJECTDIR}/src/hal/button.o src/hal/button.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo_bl/9abec220f93dec737e511aad22c3ef9942dcb27d .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo_bl/1db78f5bde1d5e31aa67ac668ac0eed57b22f082 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/reset.o: src/reset.c  .generated_files/flags/cutcutgo_bl/9f274542dbe8e7e429185d4904c5606016a32d32 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/reset.o.d 
	@${RM} ${OBJECTDIR}/src/reset.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE) -g -D__DEBUG   -fframe-base-loclist  -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/reset.o.d" -o ${OBJECTDIR}/src/reset.o src/reset.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
else
${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o: src/config/cutcutgo/bsp/bsp.c  .generated_files/flags/cutcutgo_bl/c0889b53829cf2dc3d4924047437aa2ca3dd1da1 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/bsp" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/bsp/bsp.o src/config/cutcutgo/bsp/bsp.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c  .generated_files/flags/cutcutgo_bl/668a6b6242e8b14c6eb477f121937af1b66fb53c .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o: src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c  .generated_files/flags/cutcutgo_bl/8ca275f06c46a538c68be328cd0a045f006d84a0 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.o src/config/cutcutgo/driver/usb/usbfs/src/drv_usbfs_device.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o: src/config/cutcutgo/peripheral/clk/plib_clk.c  .generated_files/flags/cutcutgo_bl/4162826d2d66be18a57ab203921ca87dce28ca51 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/clk/plib_clk.o src/config/cutcutgo/peripheral/clk/plib_clk.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o: src/config/cutcutgo/peripheral/evic/plib_evic.c  .generated_files/flags/cutcutgo_bl/9e20605f7e9eea099d24561e171f7f87d3efcaea .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/evic/plib_evic.o src/config/cutcutgo/peripheral/evic/plib_evic.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o: src/config/cutcutgo/peripheral/gpio/plib_gpio.c  .generated_files/flags/cutcutgo_bl/45b42307e00f184186abb16c4d98e38189d937fd .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/peripheral/gpio/plib_gpio.o src/config/cutcutgo/peripheral/gpio/plib_gpio.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o: src/config/cutcutgo/stdio/xc32_monitor.c  .generated_files/flags/cutcutgo_bl/4be03fadc8ba3cb264e75f8e69387fe118c48414 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/stdio" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/stdio/xc32_monitor.o src/config/cutcutgo/stdio/xc32_monitor.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o: src/config/cutcutgo/system/int/src/sys_int.c  .generated_files/flags/cutcutgo_bl/903acfe7b927e305da65c2a46e8152dd1b59bfb1 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/system/int/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/system/int/src/sys_int.o src/config/cutcutgo/system/int/src/sys_int.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o: src/config/cutcutgo/usb/src/usb_device.c  .generated_files/flags/cutcutgo_bl/ac69061661d6ddd6763b93cae56d02ab9032966c .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device.o src/config/cutcutgo/usb/src/usb_device.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o: src/config/cutcutgo/usb/src/usb_device_cdc.c  .generated_files/flags/cutcutgo_bl/896fe1c89c480c9ab75e0e3a92c3bb3f9418fbff .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc.o src/config/cutcutgo/usb/src/usb_device_cdc.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o: src/config/cutcutgo/usb/src/usb_device_cdc_acm.c  .generated_files/flags/cutcutgo_bl/3bd5734794408d704d849c9db6f26f903c00fd4f .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo/usb/src" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb/src/usb_device_cdc_acm.o src/config/cutcutgo/usb/src/usb_device_cdc_acm.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/initialization.o: src/config/cutcutgo/initialization.c  .generated_files/flags/cutcutgo_bl/6b1b633b121f95e5de71440c11c1e05bddd89292 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/initialization.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/initialization.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/initialization.o src/config/cutcutgo/initialization.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/interrupts.o: src/config/cutcutgo/interrupts.c  .generated_files/flags/cutcutgo_bl/840e5d00fa06124fc3e761006b9fafb8f4dc96cb .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/interrupts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/interrupts.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/interrupts.o src/config/cutcutgo/interrupts.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/exceptions.o: src/config/cutcutgo/exceptions.c  .generated_files/flags/cutcutgo_bl/9ede5089af0db734e4651c8870918acb650775b5 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/exceptions.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/exceptions.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/exceptions.o src/config/cutcutgo/exceptions.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o: src/config/cutcutgo/usb_device_init_data.c  .generated_files/flags/cutcutgo_bl/86b30a9d90e912893736956a92be2969bef74324 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/usb_device_init_data.o src/config/cutcutgo/usb_device_init_data.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/config/cutcutgo/tasks.o: src/config/cutcutgo/tasks.c  .generated_files/flags/cutcutgo_bl/9314478b34d574ae23b79ab474407146c5011a79 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/config/cutcutgo" 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o.d 
	@${RM} ${OBJECTDIR}/src/config/cutcutgo/tasks.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/config/cutcutgo/tasks.o.d" -o ${OBJECTDIR}/src/config/cutcutgo/tasks.o src/config/cutcutgo/tasks.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/settings.o: src/grbl/grbl/settings.c  .generated_files/flags/cutcutgo_bl/17ca5b63e5b038a41c1415073a811a3dd30c159 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/settings.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/settings.o.d" -o ${OBJECTDIR}/src/grbl/grbl/settings.o src/grbl/grbl/settings.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/gcode.o: src/grbl/grbl/gcode.c  .generated_files/flags/cutcutgo_bl/e43ae9b3ad0be6571de070ca3b3b4cc2e118c29 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/gcode.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/gcode.o.d" -o ${OBJECTDIR}/src/grbl/grbl/gcode.o src/grbl/grbl/gcode.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/coolant_control.o: src/grbl/grbl/coolant_control.c  .generated_files/flags/cutcutgo_bl/8bfa3413f7ce2c60b92dfe4f6a3f0fa343e9fabf .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/coolant_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/coolant_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/coolant_control.o src/grbl/grbl/coolant_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/jog.o: src/grbl/grbl/jog.c  .generated_files/flags/cutcutgo_bl/9f83a8d7a47a0a9746884a3f3924038fe2772385 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/jog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/jog.o.d" -o ${OBJECTDIR}/src/grbl/grbl/jog.o src/grbl/grbl/jog.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/print.o: src/grbl/grbl/print.c  .generated_files/flags/cutcutgo_bl/939365e954d83d97c3c4fbbfd177f702d6f8e589 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/print.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/print.o.d" -o ${OBJECTDIR}/src/grbl/grbl/print.o src/grbl/grbl/print.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/motion_control.o: src/grbl/grbl/motion_control.c  .generated_files/flags/cutcutgo_bl/3ae9422ea555d9cd8d0761dc48cc35e0a1ba87d1 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/motion_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/motion_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/motion_control.o src/grbl/grbl/motion_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/protocol.o: src/grbl/grbl/protocol.c  .generated_files/flags/cutcutgo_bl/8de28d4cc4c52e91310efb26f806fb635876a636 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/protocol.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/protocol.o.d" -o ${OBJECTDIR}/src/grbl/grbl/protocol.o src/grbl/grbl/protocol.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/spindle_control.o: src/grbl/grbl/spindle_control.c  .generated_files/flags/cutcutgo_bl/935cdf245bc530ad73525c4330357adec06ed1ae .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/spindle_control.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/spindle_control.o.d" -o ${OBJECTDIR}/src/grbl/grbl/spindle_control.o src/grbl/grbl/spindle_control.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/serial.o: src/grbl/grbl/serial.c  .generated_files/flags/cutcutgo_bl/e6128e65fc5a99adc38ac489c07944e7eb98a5c7 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/serial.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/serial.o.d" -o ${OBJECTDIR}/src/grbl/grbl/serial.o src/grbl/grbl/serial.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/planner.o: src/grbl/grbl/planner.c  .generated_files/flags/cutcutgo_bl/45ef1b4ff06a36c16bc0af3891535d5a4d857a89 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/planner.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/planner.o.d" -o ${OBJECTDIR}/src/grbl/grbl/planner.o src/grbl/grbl/planner.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/system.o: src/grbl/grbl/system.c  .generated_files/flags/cutcutgo_bl/7e3da9b69c10401d3a24ad554f81654ad584214b .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/system.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/system.o.d" -o ${OBJECTDIR}/src/grbl/grbl/system.o src/grbl/grbl/system.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/stepper.o: src/grbl/grbl/stepper.c  .generated_files/flags/cutcutgo_bl/ae68983cf55cca8ba64383cd059f3ddfd39cea58 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/stepper.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/stepper.o.d" -o ${OBJECTDIR}/src/grbl/grbl/stepper.o src/grbl/grbl/stepper.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o: src/grbl/grbl/nuts_bolts.c  .generated_files/flags/cutcutgo_bl/e70e4225be5fcda466f54a6e8d86c60aabf2625c .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o.d" -o ${OBJECTDIR}/src/grbl/grbl/nuts_bolts.o src/grbl/grbl/nuts_bolts.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/main.o: src/grbl/grbl/main.c  .generated_files/flags/cutcutgo_bl/bc18fcea88155b0e36455b8f6f879864a6fe09aa .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/main.o.d" -o ${OBJECTDIR}/src/grbl/grbl/main.o src/grbl/grbl/main.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/report.o: src/grbl/grbl/report.c  .generated_files/flags/cutcutgo_bl/940efa7e0f045692f7927b46d3b59ed7a618f46c .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/report.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/report.o.d" -o ${OBJECTDIR}/src/grbl/grbl/report.o src/grbl/grbl/report.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/eeprom.o: src/grbl/grbl/eeprom.c  .generated_files/flags/cutcutgo_bl/66502c51bc307e137450fc3f0efc5bd8ca253cb8 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/eeprom.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/eeprom.o.d" -o ${OBJECTDIR}/src/grbl/grbl/eeprom.o src/grbl/grbl/eeprom.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/limits.o: src/grbl/grbl/limits.c  .generated_files/flags/cutcutgo_bl/84df868edf376d0051009a77ee7593f269a6586a .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/limits.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/limits.o.d" -o ${OBJECTDIR}/src/grbl/grbl/limits.o src/grbl/grbl/limits.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/grbl/grbl/probe.o: src/grbl/grbl/probe.c  .generated_files/flags/cutcutgo_bl/62f9a26d8aa2ce228f48383b55c1e8c301010895 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/grbl/grbl" 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o.d 
	@${RM} ${OBJECTDIR}/src/grbl/grbl/probe.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/grbl/grbl/probe.o.d" -o ${OBJECTDIR}/src/grbl/grbl/probe.o src/grbl/grbl/probe.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/motor.o: src/hal/motor.c  .generated_files/flags/cutcutgo_bl/972eb88c5ca7a9270e411bc2b668038270da4d9f .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/motor.o.d 
	@${RM} ${OBJECTDIR}/src/hal/motor.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/motor.o.d" -o ${OBJECTDIR}/src/hal/motor.o src/hal/motor.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/timer.o: src/hal/timer.c  .generated_files/flags/cutcutgo_bl/a939704345f2765edf876eab9c0471ce840b2f23 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/timer.o.d 
	@${RM} ${OBJECTDIR}/src/hal/timer.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/timer.o.d" -o ${OBJECTDIR}/src/hal/timer.o src/hal/timer.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/led.o: src/hal/led.c  .generated_files/flags/cutcutgo_bl/6adadd31a57f5f49bd2a4b29aec28966ec8a4b34 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/led.o.d 
	@${RM} ${OBJECTDIR}/src/hal/led.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/led.o.d" -o ${OBJECTDIR}/src/hal/led.o src/hal/led.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/watchdog.o: src/hal/watchdog.c  .generated_files/flags/cutcutgo_bl/ab1c3efba83ce651f29659304493bb1f1ac922a0 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o.d 
	@${RM} ${OBJECTDIR}/src/hal/watchdog.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/watchdog.o.d" -o ${OBJECTDIR}/src/hal/watchdog.o src/hal/watchdog.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/hal/button.o: src/hal/button.c  .generated_files/flags/cutcutgo_bl/2fa14b0d77720adc9658c31e04a216900f63ca62 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src/hal" 
	@${RM} ${OBJECTDIR}/src/hal/button.o.d 
	@${RM} ${OBJECTDIR}/src/hal/button.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/hal/button.o.d" -o ${OBJECTDIR}/src/hal/button.o src/hal/button.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/main.o: src/main.c  .generated_files/flags/cutcutgo_bl/5ac61f75f89ecc6650ece9d5b860ee1589fe2651 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/main.o.d 
	@${RM} ${OBJECTDIR}/src/main.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/main.o.d" -o ${OBJECTDIR}/src/main.o src/main.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/app.o: src/app.c  .generated_files/flags/cutcutgo_bl/d7cd8ecf3fddfd4ece381d07d240064a6697b778 .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/app.o.d 
	@${RM} ${OBJECTDIR}/src/app.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/app.o.d" -o ${OBJECTDIR}/src/app.o src/app.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
${OBJECTDIR}/src/reset.o: src/reset.c  .generated_files/flags/cutcutgo_bl/5f86a274def8d289806716c445d470d8ffe5be4d .generated_files/flags/cutcutgo_bl/da39a3ee5e6b4b0d3255bfef95601890afd80709
	@${MKDIR} "${OBJECTDIR}/src" 
	@${RM} ${OBJECTDIR}/src/reset.o.d 
	@${RM} ${OBJECTDIR}/src/reset.o 
	${MP_CC}  $(MP_EXTRA_CC_PRE)  -g -x c -c -mprocessor=$(MP_PROCESSOR_OPTION)  -ffunction-sections -fno-common -I"src" -I"src/config/cutcutgo" -Werror -Wall -MP -MMD -MF "${OBJECTDIR}/src/reset.o.d" -o ${OBJECTDIR}/src/reset.o src/reset.c    -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wundef -Wshadow -Wpointer-arith -Wbad-function-cast -Wwrite-strings -Waggregate-return -Wstrict-prototypes -Wno-deprecated-declarations -Wredundant-decls -Wnested-externs -Wlong-long -Wunreachable-code -Wmissing-noreturn -DBOOTLOADER_MODE -mdfp="${DFP_DIR}"  
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: compileCPP
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
else
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk    src/config/cutcutgo/p32MX470F512H.bl.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE) -g   -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)   -mreserve=data@0x0:0x1FC -mreserve=boot@0x1FC02000:0x1FC02FEF -mreserve=boot@0x1FC02000:0x1FC0275F  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=__MPLAB_DEBUG=1,--defsym=__DEBUG=1,-D=__DEBUG_D,--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
	
else
${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   src/config/cutcutgo/p32MX470F512H.bl.ld
	@${MKDIR} ${DISTDIR} 
	${MP_CC} $(MP_EXTRA_LD_PRE)  -mprocessor=$(MP_PROCESSOR_OPTION)  -o ${DISTDIR}/cutcutgo.X.${IMAGE_TYPE}.${DEBUGGABLE_SUFFIX} ${OBJECTFILES_QUOTED_IF_SPACED}          -DXPRJ_cutcutgo_bl=$(CND_CONF)    $(COMPARISON_BUILD)  -Wl,--defsym=__MPLAB_BUILD=1$(MP_EXTRA_LD_POST)$(MP_LINKER_FILE_OPTION),--defsym=_min_heap_size=512,--gc-sections,--no-code-in-dinit,--no-dinit-in-serial-mem,-Map="${DISTDIR}/${PROJECTNAME}.${IMAGE_TYPE}.map",--memorysummary,${DISTDIR}/memoryfile.xml -mdfp="${DFP_DIR}"
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

DEPFILES=$(shell "${PATH_TO_IDE_BIN}"mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
