#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	// 사각형의 위치와 크기 정보를 표현할 때 사용
	// x, y, widht, height 멤버 변수를 가지고 있음
	Rect rc1;					// rc1 = [0 x 0 from (0, 0)]
	Rect rc2(10, 10, 60, 40);	// rc2 = [60 x 40 from (10, 10)]

	Rect rc3 = rc1 + Size(50, 40);	// rc3 = [50 x 40 from (0, 0)]
	Rect rc4 = rc2 + Point(10, 10);	// rc4 = [60 x 40 from (20, 20)]

	Rect rc5 = rc3 & rc4;		// rc5 = [30 x 20 from (10, 10)], 두 객체의 사각형이 교차하는 부분만 출력
	Rect rc6 = rc3 | rc4;		// rc6 = [80 x 60 from (0, 0)], 두 객체의 사각형을 모두 포함하는 영역 출력

	cout << "rc5: " << rc5 << endl;
	cout << "rc6: " << rc6 << endl;

}
