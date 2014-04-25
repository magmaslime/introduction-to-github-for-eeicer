//
//  main.cpp
//  test
//
//  Created by r.k on 2014/04/25.
//  Copyright (c) 2014年 r.k. All rights reserved.
//

#include <iostream>
#include "opencv2/opencv.hpp"

using namespace cv;
using namespace std;

int main()
{
    Mat frame(cv::Size(400, 80), CV_8UC3, cv::Scalar(0,0,0));
    namedWindow("window", CV_WINDOW_AUTOSIZE);
    cv::putText(frame, "Hello, World" , cv::Point(50,50), cv::FONT_HERSHEY_SIMPLEX,1.2,
                cv::Scalar(255,0,255), 2, CV_AA);
    while(waitKey(1)!='q'){
    imshow("window", frame);
    }
    
    return 0;
}
