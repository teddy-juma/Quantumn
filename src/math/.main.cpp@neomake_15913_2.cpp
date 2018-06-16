#include "Vector3D.h"
void test(){
    Vector3D<float> vec1 = Vector3D<float>(10.0, 20.0, 3.0);
    Vector3D<float> vec2 = Vector3D<float>(5.0, 20.0, 3.0);
    assert((vec1 + vec2) == Vector3D<float>(15.0, 40.0, 6.0));
    assert((vec1 - vec2) == Vector3D<float>(5.0, 0.0, 0.0));
    assert(vec1 * 2.0 == Vector3D<float>(20.0, 40.0, 6.0));
    assert(vec1 / 2.0 == Vector3D<float>(10.0, 20.0, 3.0));
}

int main(){
    return 0;
}
