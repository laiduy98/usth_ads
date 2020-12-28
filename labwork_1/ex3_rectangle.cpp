#include <iostream>

using namespace std;

struct Point
{
    float x = 0;
    float y = 0;
};
struct Vector
{
    float x = 0;
    float y = 0;
};


bool can_rectangle(Point p1, Point p2){
    return !(p1.x == p2.x || p1.y == p2.y);
}

float area(Point p1, Point p2){
    return abs((p1.x - p2.x)*(p1.y - p2.y));
}

bool check_in_rectangle(Point p1, Point p2, Point p3){
    // 0 <= dot(AB,AM) <= dot(AB,AB) &&
    // 0 <= dot(BC,BM) <= dot(BC,BC)
    Vector v1, v2, v3, v4;
    v1.x = p2.x - p1.x;
    v1.y = p1.y - p1.y;

    v2.x = p2.x - p2.x;
    v2.y = p2.y - p1.y;

    v3.x = p3.x - p1.x;
    v3.y = p3.y - p1.y;

    v4.x = p3.x - p2.y;
    v4.y = p3.y - p1.y;

    float dot_v1_v1 = v1.x*v1.x + v1.y*v1.y;
    float dot_v2_v2 = v2.x*v2.x + v2.y*v2.y;
    float dot_v1_v3 = v1.x*v1.x + v3.y*v3.y;
    float dot_v2_v3 = v2.x*v2.x + v3.y*v3.y;


    return 0 <= dot_v1_v3 <= dot_v1_v1 && 0 <= dot_v2_v3 <= dot_v2_v2 ;
}

int main(int argc, char const *argv[])
{
    Point p1, p2, p3;

    while (!can_rectangle(p1, p2)){
        cout << "Enter the cordinates of the first point (x,y): \n";
        cin >> p1.x;
        cin >> p1.y;

        cout << "Enter the cordinates of the second point (x,y): \n";
        cin >> p2.x;
        cin >> p2.y;
    }

    cout << "Area of rectangle is " << area(p1, p2);
    
    cout << "Check if a point falls within a rectangle.\n";
    cout << "Enter the cordinates of the third point (x,y): \n";
    cin >> p3.x;
    cin >> p3.y;
    if(check_in_rectangle(p1, p2, p3)){
        cout << "Point 3 is in the rectangle.\n";
    }else
    {
        cout << "Point 3 is not in the rectangle.\n";
    }
    


    return 0;
}
