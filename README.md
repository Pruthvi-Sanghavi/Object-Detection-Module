# Object Detection Module

#### This module requires openCV as a dependency.
Therefore, install openCV using the command in the terminal
```
sudo apt-get update; sudo apt-get upgrade; sudo apt-get install build-essential cmake git libgtk2.0-dev pkg-config libavcodec-dev libavformat-dev libswscale-dev; sudo apt-get install python3.5-dev python3-numpy libtbb2 libtbb-dev; sudo apt-get install libopencv-dev libjpeg-dev libpng-dev libtiff5-dev libjasper-dev libdc1394-22-dev libeigen3-dev libtheora-dev libvorbis-dev; libxvidcore-dev libx264-dev sphinx-common libtbb-dev yasm libfaac-dev libopencore-amrnb-dev libopencore-amrwb-dev libopenexr-dev; libgstreamer-plugins-base1.0-dev libavutil-dev libavfilter-dev libavresample-dev; sudo apt-get install git; git clone https://github.com/opencv/opencv.git; cd opencv; mkdir build; cd build; cmake -D BUILD_TIFF=ON -D WITH_CUDA=OFF -D ENABLE_AVX=OFF -D WITH_OPENGL=OFF -D WITH_OPENCL=OFF -D WITH_IPP=OFF -D WITH_TBB=ON -D BUILD_TBB=ON -D WITH_EIGEN=OFF -D WITH_V4L=OFF -D WITH_VTK=OFF -D BUILD_TESTS=OFF -D BUILD_PERF_TESTS=OFF -D CMAKE_BUILD_TYPE=RELEASE -D CMAKE_INSTALL_PREFIX=/usr/local -D OPENCV_EXTRA_MODULES_PATH= ../ ../opencv_contrib/modules ../; make -j4; sudo make install; sudo ldconfig; sudo apt-get install python-opencv
```
## Build and Run instructions:
- Open a terminal and copy paste the below given command to open the software.(For first time)

```
mkdir workspace; cd workspace; git clone https://github.com/Pruthvi-Sanghavi/Object-Detection-Module.git
```
```
cd Object-Detection-Module; mkdir build; cd build; cmake ..; make; cd app; ./colorDetect
```
Once built
```
cd workspace; Object-Detection-Module; cd build; cd app; ./colorDetect
