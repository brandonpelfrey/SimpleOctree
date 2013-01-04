#ifndef _WIN32
#include <sys/time.h>

double stopwatch()
{
	struct timeval time;
	gettimeofday(&time, 0 );
	return 1.0 * time.tv_sec + time.tv_usec / (double)1e6;
}

#else

#include <windows.h>
double stopwatch() 
{
	unsigned long long ticks;
	unsigned long long ticks_per_sec;
	QueryPerformanceFrequency( (LARGE_INTEGER *)&ticks_per_sec);
	QueryPerformanceCounter((LARGE_INTEGER *)&ticks);
	return ((float)ticks) / (float)ticks_per_sec;
}

#endif
