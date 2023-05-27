import java.util.*;
import java.io.*;

public class LinkedList {

    ListNode head;

    public void insertNode(int val) {
        ListNode newNode = new ListNode(val);
        newNode.next = head;
        head = newNode;
    }

    public void insertArrNodes(int arr[]) {
        for (int i = arr.length - 1; i >= 0; i--) {
            insertNode(arr[i]);
        }
    }

    public static void printList(ListNode list) {
        while (list != null) {
            System.out.print(list.val + " ");
            list = list.next;
        }
        System.out.println();
    }

    public void segregateEvenOdd() {
        ListNode even = new ListNode(0); // LL to store odd values
        ListNode odd = new ListNode(0); // LL to store even values
        ListNode evenPtr = even; // Ptr for even LL
        ListNode oddPtr = odd; // Ptr for odd LL

        while (head != null) {
            if (head.val % 2 == 0) {
                evenPtr.next = new ListNode(head.val); // Adding even values to even LL
                evenPtr = evenPtr.next;
            } else {
                oddPtr.next = new ListNode(head.val); // Adding odd values to odd LL
                oddPtr = oddPtr.next;
            }
            head = head.next;
        }

        evenPtr.next = odd.next; // Appending odd LL to even LL
        head = even.next; // Making head as even LL
    }

    public static void main(String[] args) {
        LinkedList list = new LinkedList();
        list.insertArrNodes(new int[]{17,15,8,12,10,5,4,1,7,6});

        list.segregateEvenOdd();

        printList(list.head);
    }
}

class ListNode {
    int val;
    ListNode next;
    ListNode() {}
    ListNode(int val) { 
        this.val = val; 
        next = null;
    }
}
