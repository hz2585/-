struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    // 函数内部添加链表头结点，便于操作
    struct ListNode head_;
    head_.next = head;
    struct ListNode * p = &head_;
    struct ListNode * q = &head_;

    //p移动n步.此时p和q刚好相差n个节点，当p->next == NULL时，q指向倒数
    //第n个节点的前驱
    for (int i = 0; i < n; ++i)
    {
        p = p->next;
    }

    while(p->next != NULL)
    {
        p = p->next;
        q = q->next;
    }

    struct ListNode* del = q->next;
    q->next = q->next->next;
    free(del);

    return head_.next;
}
