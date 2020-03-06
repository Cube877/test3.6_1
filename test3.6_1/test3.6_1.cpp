// test3.6_1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
	cv:Mat src_color = imread("E:\\Picture\\p1.png");
	std::vector<cv::Mat> channels;
	cv::split(src_color, channels);
	cv::Mat B = channels.at(0);
	cv::Mat G = channels.at(1);
	cv::Mat R = channels.at(2);
	cv::imshow("red", R);
	cv::imshow("green", G);
	cv::imshow("blue", B);
	cv::imshow("original Mat", src_color);
	waitKey(0);
    return 0;
}

