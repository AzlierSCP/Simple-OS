#include"oslabs.h"

void setup_pcb(struct PCB* inpcb, int process_id, int arrival_timestamp, 
	int total_bursttime, int execution_starttime,
	int execution_endtime, int remaining_bursttime, int process_priority) 
{
	(*inpcb).process_id = process_id;
	(*inpcb).arrival_timestamp = arrival_timestamp;
	(*inpcb).total_bursttime = total_bursttime;
	(*inpcb).execution_starttime = execution_starttime;
	(*inpcb).execution_endtime = execution_endtime;
	(*inpcb).remaining_bursttime = remaining_bursttime;
	(*inpcb).process_priority = process_priority;
}

int main(int argc, char** argv) 
{
	struct PCB current_process;
	struct PCB new_process;
	struct PCB returned_process;
	struct PCB ready_queue[QUEUEMAX];
	int queue_cnt = 0;
	setup_pcb(&current_process, 1, 1, 4, 5, 1, 4, 1);
	setup_pcb(&new_process, 2, 2, 2, 2, 2, 4, 2);
	handle_process_arrival_pp(ready_queue, &queue_cnt, current_process, new_process, 2);
}