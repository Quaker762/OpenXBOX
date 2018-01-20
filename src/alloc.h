#ifndef ALLOC_H
#define ALLOC_H

#ifdef _WIN32
	#define valloc(size) _aligned_malloc((size), 4096)
	#define vfree _aligned_free
#else
	#define vfree free
#endif

#endif
