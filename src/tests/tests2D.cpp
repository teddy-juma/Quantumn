#include <iostream>
#include <iomanip>
#include <vector>
#include "../math/vector2.cpp"

template<class T>
void tests(Vector2D<T>& testVec, Vector2D<T>& testOther){
    //test getters and setters
    std::cout << testVec.getX() << std::setw(4)<<testVec.getY() << std::endl;
    testVec.setX(12);
    testVec.setY(10);
    std::cout << "New value: "<<testVec.getX() << std::setw(4) << testVec.getY() << std::endl;
    //vector to vector arithmetic
    Vector2D<T> res;
    res = testVec + testOther;
    std::cout << "For res addition: " << std::endl;
    std::cout << res.getX() <<std::setw(4) <<res.getY() << std::endl;

    res = testVec - testOther;
    std::cout << "For res subtraction: " << std::endl;
    std::cout << res.getX() <<std::setw(4) <<res.getY() << std::endl;

    res = testVec * testOther;
    std::cout << "For res multiplication: " << std::endl;
    std::cout << res.getX() <<std::setw(4) <<res.getY() << std::endl;

    res = testVec / testOther;
    std::cout << "For res division: " << std::endl;
    std::cout << res.getX() <<std::setw(4) <<res.getY() << std::endl;
    //scalar ops
    res = testVec * 3;
    std::cout << "For res scalar multiplication: " << std::endl;
    std::cout << testVec.getX() <<std::setw(4) <<res.getY() << std::endl;

    res = testVec / 3;
    std::cout << "For res scalar division: " << std::endl;
    std::cout << testVec.getX() <<std::setw(4) <<res.getY() << std::endl;

    //magnitude
    T mag = testVec.getMagnitudeFromOrigin();
    std::cout << "Magnitude from origin: "<< mag << std::endl;

}

int main(){
    Vector2D<int> vec1(3,5); 
    Vector2D<int> vec2(8,4);
    tests(vec1, vec2);
    return 0;
}