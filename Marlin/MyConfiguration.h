/**
  * MyConfiguration.h.example
  *
  * The intention of this file is to contain things particular to your configuration.
  * Configuration.h is a mixture of logic and settings, and the separation into MyConfiguration.h for
  * user specifics and Configuration.h for knock-on settings should help make merging easier on people.
  *
  * This is an example file, as used by Eddie Parker to drive his board.  More settings may be possible,
  * peruse the Configuration.h to see what can be overriden in here.  For now, you can copy this file
  * to MyConfiguration.h, and edit the values as makes sense for you.
  *
  * This example is for a deltabot style kossel pro reprap.
  */
#ifndef MY_CONFIGURATION_H
#define MY_CONFIGURATION_H

#define DELTA

#define MOTHERBOARD BOARD_RAMPS_13_EFB
#define BAUDRATE 115200 // Seems to cause issues if I go above with the mega.

// Positive values move the extruder lower
#define EXTRUDER_Z_OFFSET 0 // IN case I need to fix the bowing later

#define DELTA_SMOOTH_ROD_OFFSET    (209.55+EXTRUDER_Z_OFFSET)
#define DELTA_DIAGONAL_ROD        298.45
#define DELTA_EFFECTOR_OFFSET    25.4
#define DELTA_CARRIAGE_OFFSET    25.4
#define DELTA_PRINTABLE_RADIUS 100

#define X_MIN_ENDSTOP_INVERTING true
#define Y_MIN_ENDSTOP_INVERTING true
#define Z_MIN_ENDSTOP_INVERTING true
#define X_MAX_ENDSTOP_INVERTING true
#define Y_MAX_ENDSTOP_INVERTING true
#define Z_MAX_ENDSTOP_INVERTING true

#define XYZ_MICROSTEPS 16
#define XYZ_BELT_PITCH 2
#define XYZ_PULLEY_TEETH 20
#define E_STEPS 500

//#define MANUAL_Z_HOME_POS 286.5 // Distance between nozzle and printer
#define MANUAL_Z_HOME_POS 292.5

#define HOMING_FEEDRATE {150*60, 150*60, 150*60, 0}  // set the homing speeds (mm/min)

#define Z_PROBE_OFFSET_FROM_EXTRUDER 0.6

#define INVERT_X_DIR false
#define INVERT_Y_DIR false
#define INVERT_Z_DIR false

// AUto tune values: m303 E0 S200 C8
#define DEFAULT_Kp 18.94
#define DEFAULT_Ki 1.28
#define DEFAULT_Kd 69.81

#endif
