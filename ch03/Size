#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	// 영상 또는 사각형 영역의 크기를 표현
	// width, height라는 멤버 변수를 가짐
	Size sz1, sz2(10, 20);			// sz1 = [0 x 0], sz2 = [10 x 20]
	sz1.width = 5; sz1.height = 10;	// sz1 = [5 x 10]

	Size sz3 = sz1 + sz2;	// sz3 = [15 x 30]
	Size sz4 = sz1 * 2;		// sz4 = [10 x 20]
	int area1 = sz4.area();	// area1 = 200, 사각형의 면적을 반환

	cout << "sz3: " << sz3 << endl;
	cout << "sz4: " << sz4 << endl;
	

}
