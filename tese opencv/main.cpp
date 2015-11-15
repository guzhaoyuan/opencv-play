//
//  main.cpp
//  tese opencv
//
//  Created by zion on 15/11/15.
//  Copyright © 2015年 zion. All rights reserved.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main(int argc, const char * argv[]) {

  cout << "OpenCV Version " << CV_VERSION <<std::endl;
  
  cv::VideoCapture cap(0);
  
  while(1){
    cv::Mat Webcam;
    cap.read(Webcam);
    cv::imshow("Webcam", Webcam);
  }
  
  
  
  return 0;
  
  
  
}
