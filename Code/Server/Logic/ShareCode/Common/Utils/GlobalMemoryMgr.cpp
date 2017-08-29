#include "GlobalMemoryMgr.h"
#include "MemoryPool/MemoryPoolMgr.h"
#include <algorithm>

MemoryPoolMgr *global_memory_pool = nullptr;

void InitGlobalMemoryPool()
{
	std::vector<uint32_t> block_sizes;
	for (int i = 0 + 8; i <= 128; i = i + 8) // (0, 128]
	{
		block_sizes.push_back(i);
	}
	for (int i = 128 + 16; i <= 512; i = i + 16) // (128, 512]
	{
		block_sizes.push_back(i);
	}
	for (int i = 512 + 32; i <= 4096; i = i + 64) // (512, 4096)
	{
		block_sizes.push_back(i);
	}

	global_memory_pool = new MemoryPoolMgr(block_sizes, 4 * 1024, 8, 64);
}

void DestoryGlobalMemoryPool()
{
	delete global_memory_pool;
	global_memory_pool = nullptr;
}

void *Malloc(size_t size)
{
	return global_memory_pool->Malloc(size);
}

void Free(void *ptr)
{
	global_memory_pool->Free(ptr);
}

void * Realloc(void *ptr, size_t size)
{
	void *new_ptr = global_memory_pool->Malloc(size);
	if (nullptr != ptr)
	{
		void *real_ptr = (char *)ptr - MemoryPoolMgr::BLOCK_SIZE_DESCRIPT_LEN;
		uint32_t old_size = *(uint32_t *)real_ptr;
		uint32_t copy_size = std::min(old_size, size);
		memcpy(new_ptr, ptr, copy_size);
		global_memory_pool->Free(ptr);
	}
	return new_ptr;
}