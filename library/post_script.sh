#!/bin/sh
# Post processing script

# copy c file is there any
# cp ./manual_wrapper/c/src/*.c  ./generated_wrapper/c/src           --example
# cp ./manual_wrapper/c/include/*.h  ./generated_wrapper/c/include		
cp ./C/include/mpack/mpack.c  ./generated_wrapper/c/src

#copy Makefile
cp Makefile.SH  ./generated_wrapper/c/src           

cd generated_wrapper/eiffel/
rm mpack_functions_api.e
rm io_codecvt_struct_api.e
rm io_file_struct_api.e
rm io_marker_struct_api.e
rm io_wide_data_struct_api.e

cd ..
cd ..


cd generated_wrapper/c/src/
finish_freezing -library
