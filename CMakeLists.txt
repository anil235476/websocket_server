cmake_minimum_required(VERSION 3.7)
#set(BOOST_LIB "D:/boost_1_69_0/boost_1_69_0")

if(MSVC)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
	
endif()
add_definitions(/ZI)

add_library(websocket_server
	websocket_server.h
		websocket_server.cpp
	)

target_include_directories(websocket_server PUBLIC 
	$<BUILD_INTERFACE:${BOOST_LIB}>
	#$<BUILD_INTERFACE:${ABSL_PATH}>
	${CMAKE_CURRENT_SOURCE_DIR}/../
	)
	
target_link_libraries(websocket_server 
func_thread_handler
)
