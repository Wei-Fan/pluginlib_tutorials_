#include <pluginlib/class_loader.h>
#include <pluginlib_tutorials_/polygon_base.h>

int main(int argc, char** argv) {
    pluginlib::ClassLoader<polygon_base::RegularPolygon> poly_loader("plugin_tutorials_", "polygon_base::RegularPolygon");
}