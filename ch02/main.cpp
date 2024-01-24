#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main() {
	Mat img;
	img = imread("lenna.bmp");
	
	if (img.empty()) {
		cout << "Image load failed" << "\n";
		return 0;
	}

	imshow("image", img);

	waitKey(); // 사용자의 입력을 기다리는 함수
	

}
