
#include "platform.h"
#include <stdio.h>

/*!
 * Set current thread to a lower priority
 */
void LOWPRIORITY()
{
	 sched_param param;
	 int policy, rc;
	 pthread_getschedparam(pthread_self(), &policy, &param);
	 param.sched_priority = 1;
	 rc = pthread_setschedparam(pthread_self(), policy, &param);
//	 printf("pthread_setschedparam(): %d\n", rc);
}

/*!
 * Set current thread to a higher priority
 */
void HIGHPRIORITY()
{
	 sched_param param;
	 int policy, rc;
	 pthread_getschedparam(pthread_self(), &policy, &param);
	 param.sched_priority = 1;
	 policy = SCHED_FIFO;
	 rc = pthread_setschedparam(pthread_self(), policy, &param);
	 printf("HI pthread_setschedparam(): %d\n", rc);
}