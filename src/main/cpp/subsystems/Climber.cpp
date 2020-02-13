/*----------------------------------------------------------------------------*/
/* Copyright (c) 2019 FIRST. All Rights Reserved.                             */
/* Open Source Software - may be modified and shared by FRC teams. The code   */
/* must be accompanied by the FIRST BSD license file in the root directory of */
/* the project.                                                               */
/*----------------------------------------------------------------------------*/

#include "subsystems/Climber.h"

#include "Constants.h"

Climber::Climber() :
    extender_(FORWARD_CHANNEL, REVERSE_CHANNEL),
    reel_left_(PWM_REEL_LEFT),
    reel_right_(PWM_REEL_RIGHT) {
    SetExtender(false);
}

// This method will be called once per scheduler run
void Climber::Periodic() {}

void Climber::SetExtender(bool extended) {
    if (extended) {
        extender_.Set(frc::DoubleSolenoid::Value::kForward);
    } else {
        extender_.Set(frc::DoubleSolenoid::Value::kReverse);
    }
}

bool Climber::GetExtender() {
    return (extender_.Get() == frc::DoubleSolenoid::Value::kForward);
}

void Climber::SetReelSpeed(double speed) {
    reel_left_.Set(speed);
    reel_right_.Set(speed);
}
