//
// Created by rubel on 9/14/21.
//

#include <bits/stdc++.h>
#include <ros/ros.h>
#include <std_msgs/String.h>

using namespace std;
using namespace ros;
using namespace std_msgs;

int main(int argc, char **argv) {
    //
    string node_name = "camera_node";
    string publisher_name = "camera_publisher";
    int que_size = 1;

    //
    init(argc, argv, node_name);
    NodeHandle node_handle;

    Publisher publisher = node_handle.advertise<String>(publisher_name, que_size);

}