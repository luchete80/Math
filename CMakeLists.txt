cmake_minimum_required(VERSION 3.2)
include_directories(${PROJECT_SOURCE_DIR}/include)
add_library (Math src/Matrix.C src/Vec3D.C src/Tensor2.C src/SymTensor2.C)

