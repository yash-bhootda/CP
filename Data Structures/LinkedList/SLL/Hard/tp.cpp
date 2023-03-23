// Helper function: Reverse singly linked list in O(length) time and O(1) extra space.
void reverse_linked_list(LinkedListNode *cur)
{
    LinkedListNode *prev = NULL;
    LinkedListNode *next;
    while (cur)
    {
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
}

LinkedListNode *reverse_linked_list_in_groups_of_k(LinkedListNode *head, int k)
{
    /*
    Input:
    list: 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> NULL
    k: 3
    Output:
    3 -> 2 -> 1 -> 6 -> 5 -> 4 -> 8 -> 7-> NULL
    Groups to be reversed are (1 -> 2 -> 3), (4 -> 5 -> 6) and (7 -> 8).

    We will call reverse_linked_list function when (start = 1 and stop = 3),
    (start = 4 and stop = 6) and (start = 7 and stop = 8).
    */
    // Points to previous start node.
    LinkedListNode *prev_of_start = NULL;
    LinkedListNode *start = head;
    LinkedListNode *stop = head;
    int count = 0;
    // Traverse whole linked list.
    while (stop)
    {
        count++;
        /*
        If we have covered k nodes in between start
        and stop (inclusive) or we are at the last node.
        */
        if (count == k || stop->next == NULL)
        {
            // Points to next node of start.
            LinkedListNode *next_of_stop = stop->next;
            /*
            We want to reverse start to stop nodes,
            set stop->next = NULL so we know where to stop.
            */
            stop->next = NULL;
            // Reverse start to stop nodes.
            reverse_linked_list(start);
            if (prev_of_start == NULL)
            {
                // Head will change when we are reversing the linked list first time.
                head = stop;
            }
            else
            {
                /*
                We have reversed start to stop nodes, hence now stop will be next node of
                prev_of_start.
                */
                prev_of_start->next = stop;
            }
            /*
            We have reversed start to stop nodes, hence next_of_stop will be next node of start.
            */
            start->next = next_of_stop;
            /*
            In the above example, after we have reversed first k nodes list will be:
            3 -> 2 -> 1 -> 4 -> 5 -> 6 -> 7 -> 8 -> NULL,
            start will point to 1, next_of_stop will point to 4.

            Now we will set start and stop to point at 4.
            And prev_of_start should be previous of 4 that is 1.
            */
            prev_of_start = start;
            start = next_of_stop;
            stop = next_of_stop;
            // Reset counter.
            count = 0;
        }
        else
        {
            stop = stop->next;
        }
    }
    return head;
}