@echo on
title post_process script

rem copy c file is there any
copy .\C\include\mpack\*.c  .\generated_wrapper\c\src

rem copy Makefile script
copy Makefile-win.SH  .\generated_wrapper\c\src 

cd generated_wrapper/eiffel/
del /f iobuf_struct_api.e
del /f mpack_functions_api.e

cd ..
cd ..

cd generated_wrapper/c/src/
finish_freezing -library
