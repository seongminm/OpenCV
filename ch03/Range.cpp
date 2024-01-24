#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	// 범위 또는 구간을 표현하는 클래스
	// start, end 멤버 변수를 가지고 있음
	Range r1(0, 10);
	cout << r1 << '\n'; // [0, 10)
	cout << r1.size() << '\n'; //end - start 반환
	cout << r1.empty() << '\n'; // start == end일 경우 true 반환

}
