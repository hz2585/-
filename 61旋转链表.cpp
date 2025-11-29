class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode * p = head;
        ListNode * q = head;

        int number = 0;
        for (ListNode * k = head; k != nullptr; k = k->next)
        {
            number++;
        }

        if(head == nullptr || k == 0)
        {
            return head;
        }

        k = k % number;

        for (int i = 0; i < k; ++i)
        {
            p = p->next;
        }

        while(p->next != nullptr)
        {
            p = p->next;
            q = q->next;
        }

        p->next = head;
        head = q->next;
        q->next = nullptr;

        return head;
    }
};
