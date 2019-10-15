#pragma once

#include "ofMain.h"
#include "ofxCv.h"
#include "ofxOpenCv.h"
#include "ofxGui.h"

using namespace ofxCv;
using namespace cv;

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
		void mouseEvent(int evt, int x, int y, int flags, void* param);
		

		ofVideoGrabber myVideoGrabber;
		ofImage imgCam;
		Mat matCam;

		bool isClicked;
		int xCord;
		int yCord;
		int temp;
		//Mat temp;

		Mat hist;

		Mat histImage;

		ofPolyline histogram;

		ofPolyline histCols[256];
};
