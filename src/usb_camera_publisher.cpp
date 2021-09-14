//
// Created by rubel on 9/14/21.
//

#include <bits/stdc++.h>
#include <ros/ros.h>
#include <std_msgs/String.h>
#include <usb_cam/usb_cam.h>

using namespace std;
using namespace ros;
using namespace std_msgs;
//using namespace usb_cam;

int main(int argc, char **argv) {
    //
    string node_name = "camera_node";
    string publisher_name = "camera_publisher";
    int que_size = 1;

    //
    init(argc, argv, node_name);
    NodeHandle node_handle;

    Publisher camera_publisher = node_handle.advertise<String>(publisher_name, que_size);

//    UsbCam usbCam = UsbCam();
//    usbCam.start_capturing();
//    while (ok()) {
//
//    }
//
//    usbCam.stop_capturing();
//    usbCam.shutdown();
}