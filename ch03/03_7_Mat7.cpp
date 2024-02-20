#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;

int main()
{
  Mat img1 = imread("dog.bmp");

  // shallow copy
  // 행렬의 원소 데이터를 공유
	Mat img2 = img1;
	Mat img3;
	img3 = img1;

  // deep copy
  // 동일한 Mat 객체를 완전히 새로 만들어서 반환
	Mat img4 = img1.clone();
	Mat img5;
	img1.copyTo(img5);

	img1.setTo(Scalar(0, 255, 255));	// yellow

	imshow("img1", img1); // yellow
	imshow("img2", img2); // yellow
	imshow("img3", img3); // yellow
	imshow("img4", img4); // dog
	imshow("img5", img5); // dog

	waitKey();
	destroyAllWindows();
}


