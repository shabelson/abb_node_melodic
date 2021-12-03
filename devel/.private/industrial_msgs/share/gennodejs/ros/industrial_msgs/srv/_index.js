
"use strict";

let GetRobotInfo = require('./GetRobotInfo.js')
let StartMotion = require('./StartMotion.js')
let StopMotion = require('./StopMotion.js')
let CmdJointTrajectory = require('./CmdJointTrajectory.js')
let SetRemoteLoggerLevel = require('./SetRemoteLoggerLevel.js')
let SetDrivePower = require('./SetDrivePower.js')

module.exports = {
  GetRobotInfo: GetRobotInfo,
  StartMotion: StartMotion,
  StopMotion: StopMotion,
  CmdJointTrajectory: CmdJointTrajectory,
  SetRemoteLoggerLevel: SetRemoteLoggerLevel,
  SetDrivePower: SetDrivePower,
};
