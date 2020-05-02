// 작성자: 이아영,이정민
//c++을 이용한 rectangle class 구현
#include<iostream>
using namepsace std;
class Rect
{
int width, height;
public:
Rect(width=0, height=0){
this->width=width;
this->height=height;
}
int getArea(){
return width*height;
}
};

int main()
{
Rect a(5,10);
cout<<a.getArea()<<endl;
}

dmd 이아영 바보!!!!!
