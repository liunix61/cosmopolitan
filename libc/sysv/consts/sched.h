#ifndef COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_
#define COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_
COSMOPOLITAN_C_START_

extern const int SCHED_BATCH;
extern const int SCHED_DEADLINE;
extern const int SCHED_FIFO;
extern const int SCHED_IDLE;
extern const int SCHED_OTHER;
extern const int SCHED_RESET_ON_FORK;
extern const int SCHED_RR;

#define SCHED_BATCH         SCHED_BATCH
#define SCHED_DEADLINE      SCHED_DEADLINE
#define SCHED_FIFO          SCHED_FIFO
#define SCHED_IDLE          SCHED_IDLE
#define SCHED_NORMAL        SCHED_OTHER
#define SCHED_OTHER         SCHED_OTHER
#define SCHED_RESET_ON_FORK SCHED_RESET_ON_FORK
#define SCHED_RR            SCHED_RR


COSMOPOLITAN_C_END_
#endif /* COSMOPOLITAN_LIBC_SYSV_CONSTS_SCHED_H_ */
