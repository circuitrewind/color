#ifndef INLINE
#define INLINE		inline __attribute__ ((always_inline))
#endif


#ifndef PACKED
#define PACKED		__attribute__ ((packed))
#endif


#ifndef CONST
#define CONST		const PROGMEM
#endif


#ifndef nullbyte
#define nullbyte	(0x00)
#endif


#ifndef _max
#define _max(a,b) ({ \
	__typeof__ (a) _a = (a); \
	__typeof__ (b) _b = (b); \
	_a > _b ? _a : _b; \
})
#endif


#ifndef _min
#define _min(a,b) ({ \
	__typeof__ (a) _a = (a); \
	__typeof__ (b) _b = (b); \
	_a < _b ? _a : _b; \
})
#endif
