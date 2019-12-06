add_executable(colorDetect colordet.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)

target_include_directories(colorDetect PUBLIC ${CMAKE_SOURCE_DIR}/include
						${OpenCV_INCLUDE_DIRS})

target_link_libraries(colorDetect ${OpenCV_LIBS} )
