#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Include project Makefile
include Makefile
# Include makefile containing local settings
ifeq "$(wildcard nbproject/Makefile-local-default.mk)" "nbproject/Makefile-local-default.mk"
include nbproject/Makefile-local-default.mk
endif

# Environment
MKDIR=gnumkdir -p
RM=rm -f 
MV=mv 
CP=cp 

# Macros
CND_CONF=default
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
IMAGE_TYPE=debug
OUTPUT_SUFFIX=cof
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
else
IMAGE_TYPE=production
OUTPUT_SUFFIX=hex
DEBUGGABLE_SUFFIX=cof
FINAL_IMAGE=dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}
endif

# Object Directory
OBJECTDIR=build/${CND_CONF}/${IMAGE_TYPE}

# Distribution Directory
DISTDIR=dist/${CND_CONF}/${IMAGE_TYPE}

# Object Files Quoted if spaced
OBJECTFILES_QUOTED_IF_SPACED=${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/interrupts.o ${OBJECTDIR}/main.o ${OBJECTDIR}/system.o ${OBJECTDIR}/user.o
POSSIBLE_DEPFILES=${OBJECTDIR}/configuration_bits.o.d ${OBJECTDIR}/interrupts.o.d ${OBJECTDIR}/main.o.d ${OBJECTDIR}/system.o.d ${OBJECTDIR}/user.o.d

# Object Files
OBJECTFILES=${OBJECTDIR}/configuration_bits.o ${OBJECTDIR}/interrupts.o ${OBJECTDIR}/main.o ${OBJECTDIR}/system.o ${OBJECTDIR}/user.o


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
	${MAKE} ${MAKE_OPTIONS} -f nbproject/Makefile-default.mk dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}

# ------------------------------------------------------------------------------------
# Rules for buildStep: compile
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "configuration_bits.c" +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/configuration_bits.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/configuration_bits.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "configuration_bits.c" +EXPORT +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/interrupts.o: interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "interrupts.c" +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/interrupts.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/interrupts.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "interrupts.c" +EXPORT +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "main.c" +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/main.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/main.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "main.c" +EXPORT +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/system.o: system.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "system.c" +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/system.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/system.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "system.c" +EXPORT +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/user.o: user.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "user.c" +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/user.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/user.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "user.c" +EXPORT +FH +DF  #__DEBUG=1 +ICD +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
else
${OBJECTDIR}/configuration_bits.o: configuration_bits.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "configuration_bits.c" +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/configuration_bits.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/configuration_bits.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "configuration_bits.c" +EXPORT +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/interrupts.o: interrupts.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "interrupts.c" +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/interrupts.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/interrupts.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "interrupts.c" +EXPORT +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/main.o: main.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "main.c" +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/main.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/main.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "main.c" +EXPORT +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/system.o: system.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "system.c" +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/system.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/system.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "system.c" +EXPORT +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
${OBJECTDIR}/user.o: user.c  nbproject/Makefile-${CND_CONF}.mk
	${MKDIR} ${OBJECTDIR} 
ifeq (8,1) 
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
	${MP_CC}  out="dist/${CND_CONF}/${IMAGE_TYPE}"  "user.c" +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/user.cof dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.cof 
	@mv dist/${CND_CONF}/${IMAGE_TYPE}/user.hex dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.hex
else 
	${MP_CC}  out="${OBJECTDIR}" "user.c" +EXPORT +FH +DF +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE #__18F87K22=TRUE +EXPORTD="${OBJECTDIR}"  
	
endif 
	
endif

# ------------------------------------------------------------------------------------
# Rules for buildStep: link
ifeq ($(TYPE_IMAGE), DEBUG_RUN)
dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
ifeq (8,1) 
	
else 
	${MP_LD}   out="dist/${CND_CONF}/${IMAGE_TYPE}"  +FH +DF LINK="pic18_template_1.X.${IMAGE_TYPE}.hex=${OBJECTDIR}/configuration_bits.o,${OBJECTDIR}/interrupts.o,${OBJECTDIR}/main.o,${OBJECTDIR}/system.o,${OBJECTDIR}/user.o" +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE
	
endif 
	
else
dist/${CND_CONF}/${IMAGE_TYPE}/pic18_template_1.X.${IMAGE_TYPE}.${OUTPUT_SUFFIX}: ${OBJECTFILES}  nbproject/Makefile-${CND_CONF}.mk   
	${MKDIR} dist/${CND_CONF}/${IMAGE_TYPE} 
ifeq (8,1) 
	
else 
	${MP_LD}   out="dist/${CND_CONF}/${IMAGE_TYPE}"  +FH +DF LINK="pic18_template_1.X.${IMAGE_TYPE}.hex=${OBJECTDIR}/configuration_bits.o,${OBJECTDIR}/interrupts.o,${OBJECTDIR}/main.o,${OBJECTDIR}/system.o,${OBJECTDIR}/user.o" +Y=9 +EA +DF +LN +T +A +M +J +ES +Z +PE
	
endif 
	
endif


# Subprojects
.build-subprojects:


# Subprojects
.clean-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r build/default
	${RM} -r dist/default

# Enable dependency checking
.dep.inc: .depcheck-impl

DEPFILES=$(shell mplabwildcard ${POSSIBLE_DEPFILES})
ifneq (${DEPFILES},)
include ${DEPFILES}
endif
