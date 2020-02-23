cmake_minimum_required(VERSION 3.7)

if(MSVC)
	set(CMAKE_CXX_FLAGS_RELEASE "${CMAKE_CXX_FLAGS_RELEASE} /MT")
	set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} /MTd")
	
endif()
add_definitions(/ZI)

add_library(websocket_server
	websocket_server.h
		websocket_server.cpp
	)

target_include_directories(websocket_server PRIVATE 
	$<BUILD_INTERFACE:${BOOST_LIB}>
	PUBLIC
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}>
	)

target_link_directories( websocket_server PUBLIC

	$<BUILD_INTERFACE:${BOOST_LIB}/stage/lib>

)
	
target_link_libraries(websocket_server PUBLIC 
func_thread_handler
)
