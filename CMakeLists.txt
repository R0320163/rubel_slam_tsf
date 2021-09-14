cmake_minimum_required(VERSION 3.0.2)
project(realsense_slam_tsf)

find_package(catkin REQUIRED COMPONENTS
        roscpp
        std_msgs
        )
catkin_package()
include_directories(
        # include
        ${catkin_INCLUDE_DIRS}
)

add_executable(realsense_slam_tsf src/camera_publisher.cpp)
target_link_libraries(realsense_slam_tsf ${catkin_LIBRARIES})