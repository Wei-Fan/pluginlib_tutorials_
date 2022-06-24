#ifndef PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H_
#define PLUGINLIB_TUTORIALS__POLYGON_PLUGINS_H_

#include <pluginlib_tutorials_/polygon_base.h>
#include <cmath>

namespace polygon_plugins
{
    class Triangle : public polygon_base::RegularPolygon
    {
    private:
        double side_length_;
    public:
        Triangle() {}

        void initialize(double side_length) override{
            side_length_ = side_length;
        }

        double area() override{
            return 0.5 * side_length_ * getHeight();
        }

        double getHeight() {
            return sqrt((side_length_ * side_length_) - ((side_length_ / 2) * (side_length_ / 2)));
        }
    };

    class Square : public polygon_base::RegularPolygon
    {
    private:
        double side_length_;
    public:
        Square() {}

        void initialize(double side_length) override {
            side_length_ = side_length;
        }

        double area() override {
            return side_length_ * side_length_;
        }
    };
};

#endif