#include <iostream>
#include "opencv2/opencv.hpp"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

int main() {
	
	cv::Mat image = cv::imread("/home/pruthvi/color_detection/image_exp.png", 1);
	// cv::namedWindow("image", WINDOW_AUTOSIZE);
  cv::namedWindow("image");
	cv::imshow("image", image);
	cv::waitKey(0);
  cv::Mat OutputImage;
	cv::inRange(image, cv::Scalar(10, 10, 50), cv::Scalar(100, 100, 255), OutputImage);

  // cv::namedWindow("Output", WINDOW_AUTOSIZE);
  cv::namedWindow("image");	
  cv::imshow("Output", OutputImage);
	cv::waitKey(0);
}
