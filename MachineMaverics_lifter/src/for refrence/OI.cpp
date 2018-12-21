// RobotBuilder Version: 2.0
//
// This file was generated by RobotBuilder. It contains sections of
// code that are automatically generated and assigned by robotbuilder.
// These sections will be updated in the future when you export to
// C++ from RobotBuilder. Do not put any code or make any change in
// the blocks indicating autogenerated code or it will be lost on an
// update. Deleting the comments indicating the section will prevent
// it from being updated in the future.


#include "OI.h"

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES
#include "SmartDashboard/SmartDashboard.h"
#include "Commands/AutonomousCommand.h"
#include "Commands/clawClose.h"
#include "Commands/clawOpen.h"
#include "Commands/lowerElevator.h"
#include "Commands/raiseElevator.h"


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=INCLUDES

OI::OI() {
    // Process operator interface input here.
    // BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
    controller.reset(new frc::Joystick(2));
    
    elevatorDown.reset(new frc::JoystickButton(controller.get(), 4));
    elevatorDown->WhenPressed(new lowerElevator());
    elevatorUp.reset(new frc::JoystickButton(controller.get(), 3));
    elevatorUp->WhenPressed(new raiseElevator());
    openClaw.reset(new frc::JoystickButton(controller.get(), 1));
    openClaw->WhenPressed(new clawOpen());
    closeClaw.reset(new frc::JoystickButton(controller.get(), 1));
    closeClaw->WhenPressed(new clawClose());
    tankDriveRight.reset(new frc::Joystick(1));
    
    tankDriveLeft.reset(new frc::Joystick(0));
    

    // SmartDashboard Buttons
    frc::SmartDashboard::PutData("lower Elevator", new lowerElevator());
    frc::SmartDashboard::PutData("claw Close", new clawClose());
    frc::SmartDashboard::PutData("claw Open", new clawOpen());
    frc::SmartDashboard::PutData("Autonomous Command", new AutonomousCommand());
    frc::SmartDashboard::PutData("raise Elevator", new raiseElevator());

    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=CONSTRUCTORS
}

// BEGIN AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS

std::shared_ptr<frc::Joystick> OI::getTankDriveLeft() {
   return tankDriveLeft;
}

std::shared_ptr<frc::Joystick> OI::getTankDriveRight() {
   return tankDriveRight;
}

std::shared_ptr<frc::Joystick> OI::getController() {
   return controller;
}


    // END AUTOGENERATED CODE, SOURCE=ROBOTBUILDER ID=FUNCTIONS
