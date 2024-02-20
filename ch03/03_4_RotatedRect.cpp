#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	// 회전된 사각형을 표현하는 클래스
	// 회전된 사각형의 중심 좌표를 나타내는 center, 가로세로를 나타내는 size, 회전 각도를 나타내는 angled을 멤버 변수로 가짐
	// RotatedRect클래스는 Point, Size, Rect 클래스와 달리 템플랫 클래스가 아니며, 모든 정보를 float 자료형을 사용하여 표현
	RotatedRect rr1(Point2f(40, 30), Size2f(40, 20), 30.f);

	Point2f pts[4];
	rr1.points(pts); // 사각형의 좌측 하단 꼭지점부터 시계 방향으로 꼭지점 좌표를 추출

	cout << pts[3] << endl; // pts[3] = (52.3205, 48.6603) 회전된 사각형의 네 꼭지점 좌표는 pts 배열에 저장됨
	Rect br = rr1.boundingRect(); // 특정 객체를 감싸는 사각형을 구하는 함수, br = [47 x 39 from (17, 11)]
	cout << br;
	

}
