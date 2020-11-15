/*
 * settings_archi.h - Archi the only one
 */

/***********************************************************************/
/**** Archi profile ******************************************/
/***********************************************************************/

// ***> NOTE: The init message must be a single line with no CRs or LFs
#define INIT_MESSAGE "Initializing Archi configs"

//**** GLOBAL / GENERAL SETTINGS ******************************************************

// Machine configuration settings

#define SOFT_LIMIT_ENABLE           1                       // 0=off, 1=on
#define HARD_LIMIT_ENABLE           1                       // 0=off, 1=on

#define FEEDHOLD_Z_LIFT             10      				// {zl: mm to lift Z on feedhold

#define MANUAL_FEEDRATE_OVERRIDE_ENABLE true					// [obsolete]: ex FEED_OVERRIDE_ENABLE
// #define FEED_OVERRIDE_ENABLE	true							// froe Already in planer.h ex 
// #define FEED_OVERRIDE_FACTOR				1.0					// fro
#define SPINDLE_OVERRIDE_ENABLE			1				// spoe
#define SPINDLE_OVERRIDE_FACTOR			1.0				// spo

// Gcode startup defaults

#define GCODE_DEFAULT_UNITS         MILLIMETERS             // MILLIMETERS or INCHES
#define GCODE_DEFAULT_PLANE         CANON_PLANE_XY          // CANON_PLANE_XY, CANON_PLANE_XZ, or CANON_PLANE_YZ
#define GCODE_DEFAULT_COORD_SYSTEM  G54                     // G54, G55, G56, G57, G58 or G59
#define GCODE_DEFAULT_PATH_CONTROL  PATH_CONTINUOUS
#define GCODE_DEFAULT_DISTANCE_MODE ABSOLUTE_DISTANCE_MODE

#define G55_X_OFFSET 116
#define G55_Y_OFFSET 190
#define G55_Z_OFFSET 0

// *** motor settings ************************************************************************************

#define MOTOR_POWER_MODE            MOTOR_POWERED_IN_CYCLE  // default motor power mode (see cmMotorPowerMode in stepper.h)
#define MOTOR_POWER_TIMEOUT         2.00                    // motor power timeout in seconds

#define M1_MOTOR_MAP                AXIS_X_EXTERNAL         // 1ma
#define M1_STEP_ANGLE               1.8                     // 1sa
#define M1_TRAVEL_PER_REV           5		                // 1tr
#define M1_MICROSTEPS               8                       // 1mi  1,2,4,8,16,32
#define M1_POLARITY                 0                       // 1po  0=normal, 1=reversed
#define M1_POWER_MODE               MOTOR_POWER_MODE        // 1pm  TRUE=low power idle enabled
#define M1_POWER_LEVEL              1.0
#define M1_POWER_LEVEL_IDLE         0.3

#define M2_MOTOR_MAP                AXIS_Y_EXTERNAL
#define M2_STEP_ANGLE               1.8
#define M2_TRAVEL_PER_REV           5
#define M2_MICROSTEPS               8
#define M2_POLARITY                 1
#define M2_POWER_MODE               MOTOR_POWER_MODE
#define M2_POWER_LEVEL              1.0
#define M2_POWER_LEVEL_IDLE         0.3

#define M3_MOTOR_MAP                AXIS_Z_EXTERNAL
#define M3_STEP_ANGLE               1.8
#define M3_TRAVEL_PER_REV           5
#define M3_MICROSTEPS               8
#define M3_POLARITY                 1
#define M3_POWER_MODE               MOTOR_POWER_MODE
#define M3_POWER_LEVEL              1.0
#define M3_POWER_LEVEL_IDLE         0.3

// *** axis settings **********************************************************************************

#define JERK_MAX                    4000

#define X_AXIS_MODE                 AXIS_STANDARD           // xam  see canonical_machine.h cmAxisMode for valid values
#define X_VELOCITY_MAX              2000                    // xvm  G0 max velocity in mm/min
#define X_FEEDRATE_MAX              1500      			    // xfr  G1 max feed rate in mm/min
#define X_TRAVEL_MIN                0                       // xtn  minimum travel for soft limits
#define X_TRAVEL_MAX                232                     // xtm  travel between switches or crashes
#define X_JERK_MAX                  JERK_MAX                // xjm  jerk * 1,000,000
#define X_JERK_HIGH_SPEED           10000                   // xjh
#define X_HOMING_INPUT              2                       // xhi  input used for homing or 0 to disable
#define X_HOMING_DIRECTION          0                       // xhd  0=search moves negative, 1= search moves positive
#define X_SEARCH_VELOCITY           1000                    // xsv  minus means move to minimum switch
#define X_LATCH_VELOCITY            100                     // xlv  mm/min
#define X_LATCH_BACKOFF             2                       // xlb  mm
#define X_ZERO_BACKOFF              1                       // xzb  mm

#define Y_AXIS_MODE                 AXIS_STANDARD
#define Y_VELOCITY_MAX              2000
#define Y_FEEDRATE_MAX              1500
#define Y_TRAVEL_MIN                0
#define Y_TRAVEL_MAX                381
#define Y_JERK_MAX                  JERK_MAX
#define Y_JERK_HIGH_SPEED           10000
#define Y_HOMING_INPUT              4
#define Y_HOMING_DIRECTION          0
#define Y_SEARCH_VELOCITY           1000
#define Y_LATCH_VELOCITY            100
#define Y_LATCH_BACKOFF             2
#define Y_ZERO_BACKOFF              1

#define Z_AXIS_MODE                 AXIS_STANDARD
#define Z_VELOCITY_MAX              2000
#define Z_FEEDRATE_MAX              1500
#define Z_TRAVEL_MIN                -95
#define Z_TRAVEL_MAX                0
#define Z_JERK_MAX                  1000
#define Z_JERK_HIGH_SPEED           2500
#define Z_HOMING_INPUT              5
#define Z_HOMING_DIRECTION          1
#define Z_SEARCH_VELOCITY           500
#define Z_LATCH_VELOCITY            100
#define Z_LATCH_BACKOFF             2
#define Z_ZERO_BACKOFF              1

//*** Input / output settings **************************************************************************
/*
    IO_MODE_DISABLED
    IO_ACTIVE_LOW    aka NORMALLY_OPEN
    IO_ACTIVE_HIGH   aka NORMALLY_CLOSED

    INPUT_ACTION_NONE
    INPUT_ACTION_STOP
    INPUT_ACTION_FAST_STOP
    INPUT_ACTION_HALT
    INPUT_ACTION_RESET

    INPUT_FUNCTION_NONE
    INPUT_FUNCTION_LIMIT
    INPUT_FUNCTION_INTERLOCK
    INPUT_FUNCTION_SHUTDOWN
    INPUT_FUNCTION_PANIC
*/
// Xmax 
#define DI1_ENABLED                 IO_ENABLED
#define DI1_POLARITY                NORMALLY_CLOSED
#define DI1_ACTION                  INPUT_ACTION_LIMIT

// Xmin
#define DI2_ENABLED                 IO_ENABLED
#define DI2_POLARITY                NORMALLY_CLOSED
#define DI2_ACTION                  INPUT_ACTION_LIMIT

// Ymax
#define DI3_ENABLED                 IO_ENABLED
#define DI3_POLARITY                NORMALLY_CLOSED
#define DI3_ACTION                  INPUT_ACTION_LIMIT

// Ymin
#define DI4_ENABLED                 IO_ENABLED
#define DI4_POLARITY                NORMALLY_CLOSED
#define DI4_ACTION                  INPUT_ACTION_LIMIT

// Zmax
#define DI5_ENABLED                 IO_ENABLED
#define DI5_POLARITY                NORMALLY_CLOSED
#define DI5_ACTION                  INPUT_ACTION_LIMIT

// Zmin
#define DI6_ENABLED                 IO_ENABLED
#define DI6_POLARITY                NORMALLY_CLOSED
#define DI6_ACTION                  INPUT_ACTION_LIMIT

// Desactivate others
#define DI7_ENABLED                 IO_DISABLED
#define DI8_ENABLED                 IO_DISABLED
#define DI9_ENABLED                 IO_DISABLED
#define DI10_ENABLED                IO_DISABLED
#define DI11_ENABLED                IO_DISABLED
#define DI12_ENABLED                IO_DISABLED

// *** Spindle Settings ********************************************************************************

#define SPINDLE_MODE                1 					// spmo
#define SPINDLE_ENABLE_POLARITY     1                   // spep  0=active low, 1=active high
#define SPINDLE_DIR_POLARITY        0                   // spdp 0=clockwise is low, 1=clockwise is high
#define SPINDLE_PAUSE_ON_HOLD       true				// spph
#define SPINDLE_SPINUP_DELAY        4.0					// spde
#define SPINDLE_SPEED_MIN			0					// spsn
#define SPINDLE_SPEED_MAX			24000				// spsm

// PWM
#define P1_PWM_FREQUENCY            1000				// in Hz
#define P1_CW_SPEED_LO              0					// in RPM (arbitrary units)
#define P1_CW_SPEED_HI              24000
#define P1_CW_PHASE_LO              0					// phase [0..1]
#define P1_CW_PHASE_HI              1
#define P1_CCW_SPEED_LO             0  
#define P1_CCW_SPEED_HI				24000 
#define P1_CCW_PHASE_LO             0
#define P1_CCW_PHASE_HI             1 
#define P1_PWM_PHASE_OFF            0
