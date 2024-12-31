#include <iostream>
#include <memory>
#include "shape.h"
#include "oval.h"
#include "circle.h"

//  Reference => https://www.youtube.com/watch?v=8jLOx1hD3_o

int main(){

    Shape* shape_ptr = new Circle(15,"Circle1");
    shape_ptr->draw(25,"Blue");

    // in here, it did not work with shape polymorphism
    // in the next lecture, we will search through oval polymorphism
    // (polymorphism can be set up at different levels)

    return 0;
}