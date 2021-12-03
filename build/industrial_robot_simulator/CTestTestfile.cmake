# CMake generated Testfile for 
# Source directory: /home/shabelson/st4_ws/src/industrial_core/industrial_robot_simulator
# Build directory: /home/shabelson/st4_ws/build/industrial_robot_simulator
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(_ctest_industrial_robot_simulator_roslaunch-check_launch "/home/shabelson/st4_ws/build/industrial_robot_simulator/catkin_generated/env_cached.sh" "/usr/bin/python2" "/opt/ros/melodic/share/catkin/cmake/test/run_tests.py" "/home/shabelson/st4_ws/build/industrial_robot_simulator/test_results/industrial_robot_simulator/roslaunch-check_launch.xml" "--return-code" "/usr/bin/cmake -E make_directory /home/shabelson/st4_ws/build/industrial_robot_simulator/test_results/industrial_robot_simulator" "/opt/ros/melodic/share/roslaunch/cmake/../scripts/roslaunch-check -o \"/home/shabelson/st4_ws/build/industrial_robot_simulator/test_results/industrial_robot_simulator/roslaunch-check_launch.xml\" \"/home/shabelson/st4_ws/src/industrial_core/industrial_robot_simulator/launch\" ")
subdirs("gtest")
