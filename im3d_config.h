#pragma once
#ifndef im3d_config_h
#define im3d_config_h

// User-defined assertion handler (default is cassert assert()).
//#define IM3D_ASSERT(e) assert(e)

// User-defined malloc/free. Define both or neither (default is cstdlib malloc()/free()).
//#define IM3D_MALLOC(size) malloc(size)
//#define IM3D_FREE(ptr) free(ptr) 

// Use row-major internal matrix layout. 
//#define IM3D_MATRIX_ROW_MAJOR 1

// Conversion to/from user math types.
//#define IM3D_VEC2_USER \
//	Vec2(const glm::vec2& _v)          { x = _v.x; y = _v.y;     } \
//	operator glm::vec2() const         { return glm::vec2(x, y); }
//#define IM3D_VEC3_USER \
//	Vec3(const glm::vec3& _v)          { x = _v.x; y = _v.y; z = _v.z } \
//	operator glm::vec3() const         { return glm::vec3(x, y, z);   }
//#define IM3D_VEC4_USER \
//	Vec3(const glm::vec4& _v)          { x = _v.x; y = _v.y; z = _v.z; w = _v.w } \
//	operator glm::vec4() const         { return glm::vec4(x, y, z, w);          }
//#define IM3D_MAT4_USER \
//	Vec3(const glm::mat4& _m)          { for (int i = 0; i < 16; ++i) m[i] = *(&(_m[0][0]) + i); } \
//	operator glm::mat4() const         { glm::mat4 ret; for (int i = 0; i < 16; ++i) *(&(ret[0][0]) + i) = m[i]; } \
	
#endif // im3d_config_h