#ifndef INLINE
#define INLINE		inline __attribute__ ((always_inline))
#endif


#ifndef PACKED
#define PACKED		__attribute__ ((packed))
#endif


#ifndef CONST
#define CONST		const PROGMEM
#endif


#ifndef max
#define max(a,b) ({ \
	__typeof__ (a) _a = (a); \
	__typeof__ (b) _b = (b); \
	_a > _b ? _a : _b; \
})
#endif


#ifndef min
#define min(a,b) ({ \
	__typeof__ (a) _a = (a); \
	__typeof__ (b) _b = (b); \
	_a < _b ? _a : _b; \
})
#endif