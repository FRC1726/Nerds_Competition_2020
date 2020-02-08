/*----------------------------------------------------------------------------*/
/* Copyright (c) 2018 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#pragma once

#include <string>

namespace nerd {

template <typename T>
struct ConfigKey {
  std::string key;
  T value;
};

}  // namespace nerd

// Joysticks
const nerd::ConfigKey<double> JOYSTICK_DRIVE_MAX_HIGH{
  "Joysticks/Drive/Max Speed/High",
  1
};
const nerd::ConfigKey<double> JOYSTICK_DRIVE_MAX_LOW{
  "Joysticks/Drive/Max Speed/Low",
  0.6
};
const nerd::ConfigKey<double> JOYSTICK_DRIVE_MIN_HIGH{
  "Joysticks/Drive/Min Speed/High",
  0.35
};
const nerd::ConfigKey<double> JOYSTICK_DRIVE_MIN_LOW{
  "Joysticks/Drive/Min Speed/Low",
  0.35
};
const nerd::ConfigKey<double> JOYSTICK_TURN_MAX_HIGH{
  "Joysticks/Turn/Max Speed/High",
  1
};
const nerd::ConfigKey<double> JOYSTICK_TURN_MAX_LOW{
  "Joysticks/Turn/Max Speed/Low",
  0.6
};
const nerd::ConfigKey<double> JOYSTICK_TURN_MIN_HIGH{
  "Joysticks/Turn/Min Speed/High",
  0.35
};
const nerd::ConfigKey<double> JOYSTICK_TURN_MIN_LOW{
  "Joysticks/Turn/Min Speed/Low",
  0.35
};
const nerd::ConfigKey<double> JOYSTICKS_DRIVE_DEADZONE{
  "Joysticks/Drive/Deadzone",
  0.02
};
const nerd::ConfigKey<bool> JOYSTICKS_REVERSE_FORWARD{
  "Joysticks/Drive/Reverse",
  false
};
const nerd::ConfigKey<bool> SWITCH_SPEED_PREFERENCES{
  "Joysticks/Low Speed",
  false
};
// end Joysticks

// Ramsete
const nerd::ConfigKey<double> FEEDFORWARD_KS {
  "Ramsete/Feed Forward/KS",
  0.1
};

const nerd::ConfigKey<double> FEEDFORWARD_KA {
  "Ramsete/Feed Forward/KA",
  0
};

const nerd::ConfigKey<double> FEEDFORWARD_KV {
  "Ramsete/Feed Forward/KV",
  0.0811
};

const nerd::ConfigKey<double> KP_DRIVE_VELOCITY {
  "Ramsete/KP DRIVE VELOCITY",
  0.05
};

const nerd::ConfigKey<double> K_MAX_SPEED {
  "Ramsete/MAX SPEED",
  1
};

const nerd::ConfigKey<double> K_MAX_ACCELERATION {
  "Ramsete/K_MAX_ACCELERATION",
  0.5
};

const nerd::ConfigKey<double> K_RAMSETE_B {
  "Ramsete/K_RAMSETE_B",
  2
};

const nerd::ConfigKey<double> K_RAMSETE_ZETA {
  "Ramsete/K_RAMSETE_ZETA",
  0.2
};
