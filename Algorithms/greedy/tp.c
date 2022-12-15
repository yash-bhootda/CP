#include <stdio.h>
#include <stdlib.h>
void insert(int[], int, int[], int[]);
void p_insert(int[], int, int[], int[], int[]);
void waitingTime(int[], int, int[], int[], int[]);
void turnAroundTime(int[], int, int[], int[], int[], int[]);
void avgTime(int[], int, int[], int[], int[], int[]);
void ganttChart(int[], int, int[], int[]);
void sort(int[], int, int[], int[]);
void fcfs();
void sjf();
void sjrf();
void np_priority();
void p_priority();
void roundRobin();
void insert(int proc[], int n, int bt[], int at[])
{
    for (int i = 0; i < n; i++)
    {
        proc[i] = i + 1;
        printf("\nEnter The Arrival Time Of Process %d : ", i + 1);
        scanf(" %d", &at[i]);
        printf("Enter The Burst Time Of Process %d : ", i + 1);
        scanf(" %d", &bt[i]);
    }
}
void p_insert(int proc[], int n, int bt[], int at[], int pr[])
{
    for (int i = 0; i < n; i++)
    {
        proc[i] = i + 1;
        printf("\nEnter The Arrival Time Of Process %d : ", i + 1);
        scanf(" %d", &at[i]);
        printf("Enter The Burst Time Of Process %d : ", i + 1);
        scanf(" %d", &bt[i]);
        printf("Enter The Priority Of Process %d : ", i + 1);
        scanf(" %d", &pr[i]);
    }
}
void waitingTime(int proc[], int n, int bt[], int wt[], int at[])
{
    int sum = 0;
    // waiting time for first process is 0
    wt[0] = 0;
    // calculating waiting time
    for (int i = 1; i < n; i++)
    {
        sum = sum + bt[i - 1];
        wt[i] = sum - at[i];
    }
}
// Function to calculate turn around time
void turnAroundTime(int proc[], int n, int bt[], int wt[], int at[], int tat[])
{
    int ta = 0;
    // calculating turnaround time by adding bt[i] + wt[i]
    for (int i = 0; i < n; i++)
    {
        ta = ta + bt[i];
        tat[i] = ta - at[i];
    }
}
void avgTime(int proc[], int n, int bt[], int wt[], int at[], int tat[])
{
    int total_wt = 0, total_tat = 0;
    // Calculate total waiting time and total turnaround time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf(" %d ", proc[i]);
        printf("\t\t%d ", bt[i]);
        printf("\t\t%d", tat[i]);
        printf("\t\t\t%d", wt[i]);
        printf("\t\t\t%d\n", at[i]);
    }
    float avg_wt = (float)total_wt / (float)n;
    float avg_tat = (float)total_tat / (float)n;
    printf("\nAverage waiting time = %.2f ms\n", avg_wt);
    printf("Average turn around time = %.2f ms\n\n", avg_tat);
}
void ganttChart(int proc[], int n, int bt[], int wt[])
{
    printf("\n\t\tGANTT CHART\n\n");
    for (int i = 0; i < n; i++)
    {
        printf("|\tP%d\t", proc[i]);
    }
    printf("|\n");
    printf("0");
    for (int i = 0; i < n; i++)
    {
        printf("\t\t%d", bt[i] + wt[i]);
    }
    printf("\n");
}
void sort(int proc[], int n, int bt[], int at[])
{
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (at[i] < at[j])
            {
                int temp = proc[j];
                proc[j] = proc[i];
                proc[i] = temp;

                temp = at[j];
                at[j] = at[i];
                at[i] = temp;

                temp = bt[j];
                bt[j] = bt[i];
                bt[i] = temp;
            }
        }
    }
    for (int j = 0; j < n; j++)
    {
        int b = b + bt[j];
        int min = bt[k];
        for (int i = k; i < n; i++)
        {
            if (b >= at[i] && bt[i] < min)
            {
                int temp = proc[k];
                proc[k] = proc[i];
                proc[i] = temp;
                temp = at[k];
                at[k] = at[i];
                at[i] = temp;
                temp = bt[k];
                bt[k] = bt[i];
                bt[i] = temp;
            }
        }
        k++;
    }
}
void fcfs()
{
    int n;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    int proc[n], burst_time[n], arrival_time[n], wt[n], tat[n];
    insert(proc, n, burst_time, arrival_time);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrival_time[i] < arrival_time[j])
            {
                int temp = proc[j];
                proc[j] = proc[i];
                proc[i] = temp;

                temp = arrival_time[j];
                arrival_time[j] = arrival_time[i];
                arrival_time[i] = temp;

                temp = burst_time[j];
                burst_time[j] = burst_time[i];
                burst_time[i] = temp;
            }
            if (arrival_time[i] == arrival_time[j])
            {
                int temp = proc[j];
                proc[j] = proc[i];
                proc[i] = temp;
            }
        }
    }
    waitingTime(proc, n, burst_time, wt, arrival_time);
    ganttChart(proc, n, burst_time, wt);
    turnAroundTime(proc, n, burst_time, wt, arrival_time, tat);
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\n");
    avgTime(proc, n, burst_time, wt, arrival_time, tat);
}
void sjf()
{
    int n;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    int proc[n], burst_time[n], arrival_time[n], wt[n], tat[n];
    insert(proc, n, burst_time, arrival_time);
    sort(proc, n, burst_time, arrival_time);
    // Function to find waiting time for all processes
    waitingTime(proc, n, burst_time, wt, arrival_time);
    // print gantt chart
    ganttChart(proc, n, burst_time, wt);
    // Function to find turn around time for all processes
    turnAroundTime(proc, n, burst_time, wt, arrival_time, tat);
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\n");
    avgTime(proc, n, burst_time, wt, arrival_time, tat);
}
void sjrf()
{
    int arrival_time[10], burst_time[10], temp[10], wt[10], tat[10], proc[10];
    int i, smallest, count = 0, time, n;
    float wait_time = 0, turnaround_time = 0, end;
    float average_waiting_time, average_turnaround_time;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    insert(proc, n, burst_time, arrival_time);
    for (i = 0; i < n; i++)
    {
        temp[i] = burst_time[i];
    }
    burst_time[9] = 1000;
    for (time = 0; count != n; time++)
    {
        smallest = 9;
        for (i = 0; i < n; i++)
        {
            if (arrival_time[i] <= time && burst_time[i] < burst_time[smallest] && burst_time[i] > 0)
            {
                smallest = i;
            }
        }
        burst_time[smallest]--;
        if (burst_time[smallest] == 0)
        {
            count++;
            end = time + 1;
            wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
            wt[smallest] = end - arrival_time[smallest] - temp[smallest];
            turnaround_time = turnaround_time + end - arrival_time[smallest];
            tat[smallest] = end - arrival_time[smallest];
        }
    }
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", i + 1);
        printf("\t\t%d ", temp[i]);
        printf("\t\t%d", tat[i]);
        printf("\t\t\t%d", wt[i]);
        printf("\t\t\t%d\n", arrival_time[i]);
    }
    average_waiting_time = wait_time / n;
    average_turnaround_time = turnaround_time / n;
    printf("\nAverage Waiting Time : %.2f ms\n", average_waiting_time);
    printf("Average Turnaround Time : %.2f ms\n\n", average_turnaround_time);
}
void p_priority()
{
    int i, smallest, count = 0, time, n;
    float wait_time = 0, turnaround_time = 0, end;
    float avg_wt, avg_tat;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    int arrival_time[n], burst_time[n], temp[n], wt[n], tat[n], proc[n], pr[n];
    p_insert(proc, n, burst_time, arrival_time, pr);
    for (i = 0; i < n; i++)
    {
        temp[i] = burst_time[i];
    }
    pr[9] = 1000;
    for (time = 0; count != n; time++)
    {
        smallest = 9;
        for (i = 0; i < n; i++)
        {
            if (arrival_time[i] <= time && pr[i] < pr[smallest] && burst_time[i] > 0)
            {
                smallest = i;
            }
        }
        burst_time[smallest]--;
        if (burst_time[smallest] == 0)
        {
            count++;
            end = time + 1;
            wait_time = wait_time + end - arrival_time[smallest] - temp[smallest];
            wt[smallest] = end - arrival_time[smallest] - temp[smallest];
            turnaround_time = turnaround_time + end - arrival_time[smallest];
            tat[smallest] = end - arrival_time[smallest];
        }
    }
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\n");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", i + 1);
        printf("\t\t%d ", temp[i]);
        printf("\t\t%d", tat[i]);
        printf("\t\t\t%d", wt[i]);
        printf("\t\t\t%d\n", arrival_time[i]);
    }
    avg_wt = wait_time / n;
    avg_tat = turnaround_time / n;
    printf("\nAverage Waiting Time : %.2f ms\n", avg_wt);
    printf("Average Turnaround Time : %.2f ms\n\n", avg_tat);
}
void np_priority()
{
    int n;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    int proc[n], burst_time[n], arrival_time[n], wt[n], tat[n], pr[n];
    p_insert(proc, n, burst_time, arrival_time, pr);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arrival_time[i] < arrival_time[j])
            {
                int temp = proc[j];
                proc[j] = proc[i];
                proc[i] = temp;

                temp = arrival_time[j];
                arrival_time[j] = arrival_time[i];
                arrival_time[i] = temp;

                temp = burst_time[j];
                burst_time[j] = burst_time[i];
                burst_time[i] = temp;
                temp = pr[j];
                pr[j] = pr[i];
                pr[i] = temp;
            }
        }
    }
    waitingTime(proc, n, burst_time, wt, arrival_time);
    turnAroundTime(proc, n, burst_time, wt, arrival_time, tat);
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\tPriority\n");
    int total_wt = 0, total_tat = 0;
    // Calculate total waiting time and total turnaround time
    for (int i = 0; i < n; i++)
    {
        total_wt = total_wt + wt[i];
        total_tat = total_tat + tat[i];
        printf(" %d ", proc[i]);
        printf("\t\t%d ", burst_time[i]);
        printf("\t\t%d", tat[i]);
        printf("\t\t\t%d", wt[i]);
        printf("\t\t\t%d", arrival_time[i]);
        printf("\t\t%d\n", pr[i]);
    }
    float avg_wt = (float)total_wt / (float)n;
    float avg_tat = (float)total_tat / (float)n;
    printf("\nAverage waiting time = %.2f ms\n", avg_wt);
    printf("Average turn around time = %.2f ms\n\n", avg_tat);
}
void roundRobin()
{

    int i, j, n, time, rem, f = 0, quantum;
    int wait_time = 0, turnaround_time = 0;
    float avg_wt, avg_tat;
    printf("\nEnter the number of processes : ");
    scanf("%d", &n);
    int proc[n], burst_time[n], arrival_time[n], wt[n], r[n];
    rem = n;
    insert(proc, n, burst_time, arrival_time);
    for (i = 0; i < n; i++)
        r[i] = burst_time[i];
    printf("\nEnter the Time Quantum in ms: ");
    scanf("%d", &quantum);
    printf("\nProcesses \tBurst time \tTurn around time \tWaiting time \tArrival time\n");
    for (time = 0, i = 0; rem != 0;)
    {
        if (r[i] <= quantum && r[i] > 0)
        {
            time += r[i];
            r[i] = 0;
            f = 1;
        }
        else if (r[i] > 0)
        {
            r[i] -= quantum;
            time += quantum;
        }
        if (r[i] == 0 && f == 1)
        {
            rem--;
            printf(" %d ", proc[i]);
            printf("\t\t%d ", burst_time[i]);
            printf("\t\t%d", time - arrival_time[i]);
            printf("\t\t\t%d", time - arrival_time[i] - burst_time[i]);
            printf("\t\t\t%d\n", arrival_time[i]);

            wait_time += time - arrival_time[i] - burst_time[i];
            turnaround_time += time - arrival_time[i];
            f = 0;
        }
        if (i == n - 1)
            i = 0;
        else if (arrival_time[i + 1] <= time)
            i++;
        else
            i = 0;
    }
    avg_wt = (float)wait_time / (float)n;
    avg_tat = (float)turnaround_time / (float)n;
    printf("\nAverage waiting time = %.2f ms\n", avg_wt);
    printf("Average turn around time = %.2f ms\n\n", avg_tat);
}
int main()
{
    int ch;
    while (1)
    {
        printf("\n\tMENU:\n");
        printf("\t1. FCFS algorithm\n\t2. SJF algorithm\n\t3. SJRF algorithm\
 \n\t4. Non preemptive Priority algorithm\n\t5. Preemptive Priority algorithm\
 \n\t6. Round Robin algorithm\n\t7. Exit");
        printf("\nEnter your choice :");
        scanf("%d", &ch);
        if (ch == 1)
        {
            printf("\n\t\tFIRST COME FIRST SERVE ALGORITHM\n\n");
            fcfs();
        }
        if (ch == 2)
        {
            printf("\n\t\tSHORTEST JOB FIRST ALGORITHM\n\n");
            sjf();
        }
        if (ch == 3)
        {
            printf("\n\t\tSHORTEST JOB REMAINING FIRST ALGORITHM\n\n");
            sjrf();
        }
        if (ch == 4)
        {
            printf("\n\t\tNON PREEMPTIVE PRIORITY ALGORITHM\n\n");
            np_priority();
        }
        if (ch == 5)
        {
            printf("\n\t\tPREEMPTIVE PRIORITY ALGORITHM\n\n");
            p_priority();
        }
        if (ch == 6)
        {
            printf("\n\t\tROUND ROBIN ALGORITHM\n\n");
            roundRobin();
        }
        if (ch == 7)
        {
            exit(0);
        }
    }
    return 0;
}