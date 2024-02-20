#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;



int main() {
	// OpenCV라이브러리에서 가장 많이 사용하는 행렬을 표현하는 클래스
	// 고차원 행렬, 한 개 이상의 채널을 가질 수 있음
	// 실제적으로 2차원 영상 데이터를 저장하고 처리하는 용도로 가장 많이 사용되고 있음
	// OpenCV 라이브러리를 이용하여 컴퓨터 비전 프로그램을 개발하기 위해서는 Mat 클래스 사용법을 제대로 익히는 것이 중요
	//
	Mat img1; 	// empty matrix
	// Mat(rows, cols, type)
	
	// CV_<bit-depth> {U | S | F} C(<number_of_channels>) 주요 자료형
	// bit-depth: 8, 16, 32, 64비트를 나타냄
	// U: 부호 없는 정수형, S: 부호 있는 정수형, F: 부동 소수형을 의미
	// C1: 한 개의 채널, C3: 3개의 채널 

	// #define CV_8U 0 // uchar -> unsigned Char 부호 없는 1바이트 정수
	// #define CV_8S 1 // schar -> signed Char 부호 있는 1바이트 정수
	// #define CV_16U 2 // ushort -> unsigned Short 부호 없는 2바이트 정수
	// #define CV_16S 3 // signed Short 부호 있는 2바이트 정수
	// #define CV_32S 4 // int 부호 있는 4바이트 정수
	// #define CV_32F 5 // float
	// #define CV_64F 6 // dobule

	// Mat::Mat(int rows, int cols, int type);
	// Mat(행렬의 행 개수(영상의 세로 크기), 행렬의 열 개수(영상의 가로 크기), 행렬의 타입);
	
	Mat img2(480, 640, CV_8UC1);		// unsigned char, 1-channel
	Mat img3(480, 640, CV_8UC3);		// unsigned char, 3-channels
	Mat img4(Size(640, 480), CV_8UC3);	// Size(width, height)

	// Scalar(B, G, R) 색상 채널의 강도를 나타내는 역할
	Mat img5(480, 640, CV_8UC1, Scalar(128));		// initial values, 128
	Mat img6(480, 640, CV_8UC3, Scalar(0, 0, 255));	// initial values, red (B, G, R)순서

	// 정적 멤버 함수이므로 Mat::을 붙여서 사용
	Mat mat1 = Mat::zeros(3, 3, CV_32SC1);	// 0's matrix, sclar 값을 모두 0으로 변환
	Mat mat2 = Mat::ones(3, 3, CV_32FC1);	// 1's matrix, sclar 값을 모두 1으로 변환
	Mat mat3 = Mat::eye(3, 3, CV_32FC1); 
	// mat3 = 1, 0, 0
	//        0, 1, 0
	//	  0, 0, 1

	// Mat 객체를 생성할 때, 행렬 원소를 저장할 메모리 공간을 새로 할당하는 것이 아니라
	// 기존에 이미 할당되어 있는 메모리 공간의 데이터를 행렬 원소 값으로 사용할 수 있음
	// 자체적인 메모리 할당을 수행하지 않고 외부 메모리를 참조하는 방식이기에 객체 생성이 빠름
	float data[] = { 1, 2, 3, 4, 5, 6 };
	Mat mat4(2, 3, CV_32FC1, data);
	// mat4 = 1, 2, 3
	//        4, 5, 6
	// Mat 객체에는 참조 주소를 담고있기 때문에 서로 상호작용하여, 어느 한 곳의 값이 변할 경우 같이 변함

	Mat mat5 = (Mat_<float>(2, 3) << 1, 2, 3, 4, 5, 6);
	Mat mat6 = Mat_<uchar>({ 2, 3 }, { 1, 2, 3, 4, 5, 6 });

	mat4.create(256, 256, CV_8UC3);	// uchar, 3-channels
	mat5.create(4, 4, CV_32FC1);	// float, 1-channel

	mat4 = Scalar(255, 0, 0);
	mat5.setTo(1.f); // mat5의 전체 원소 값을 정의

}
