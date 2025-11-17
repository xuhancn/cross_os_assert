#include "pytorch_header_file/Macros.h"

int __spirv_GlobalInvocationId_x()
{
	return 0;
}

int __spirv_GlobalInvocationId_y()
{
	return 0;
}

int __spirv_GlobalInvocationId_z()
{
	return 0;
}

int __spirv_LocalInvocationId_x()
{
	return 0;
}

int __spirv_LocalInvocationId_y()
{
	return 0;
}

int __spirv_LocalInvocationId_z()
{
	return 0;
}

void __devicelib_assert_fail(const char *e, const char *f, int32_t l, const char * p,
	uint64_t gx, uint64_t gy, uint64_t gz, uint64_t lx, uint64_t ly, uint64_t lz)
{

}

int main()
{
	SYCL_KERNEL_ASSERT(1>2);

    return 0;
}