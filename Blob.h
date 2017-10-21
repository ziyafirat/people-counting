//
//  Blob.h
//  peoplecounting
//
//  Created by VicLee on 2017/8/11.
//  Copyright © 2017年 VicLee. All rights reserved.
//

#ifndef Blob_h
#define Blob_h

#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

///////////////////////////////////////////////////////////////////////////////////////////////////
class Blob {
public:
    // member variables ///////////////////////////////////////////////////////////////////////////
    std::vector<cv::Point> currentContour;
    
    cv::Rect currentBoundingRect;
    
    std::vector<cv::Point> centerPositions;
    
    double dblCurrentDiagonalSize;
    double dblCurrentAspectRatio;
    
    bool blnCurrentMatchFoundOrNewBlob;
    
    bool blnStillBeingTracked;
    
    int intNumOfConsecutiveFramesWithoutAMatch;
    
    cv::Point predictedNextPosition;
    
    // function prototypes ////////////////////////////////////////////////////////////////////////
    Blob(std::vector<cv::Point> _contour);
    void predictNextPosition(void);
    
};

#endif /* Blob_h */
