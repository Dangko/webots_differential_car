execute_process(COMMAND "/home/dango/dango_file/software/webots/web_con_ws/build/base_local_planner/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/dango/dango_file/software/webots/web_con_ws/build/base_local_planner/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
