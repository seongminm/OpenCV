// 부분 행렬 추출

#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;


int main()
{
	Mat img1 = imread("cat.bmp");

	if (img1.empty()) {
		cout << "Image load failed!" << endl;
		return;
	}

    // 340 x 240 from (220, 120)의 사각형 부분 영상을 추출
	// shallow copy
	Mat img2 = img1(Rect(220, 120, 340, 240)); 
	
	//deep copy
	Mat img3 = img1(Rect(220, 120, 340, 240)).clone();
    
  // 컬러 영상 반전
	img2 = ~img2; 

	imshow("img1", img1); // 반전된 img2를 포함한 이미지
	imshow("img2", img2); // 반전된 img2 
	imshow("img3", img3); // 원본 cat이미지

	waitKey();
	destroyAllWindows();
}
