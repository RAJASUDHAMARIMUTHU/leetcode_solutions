bool isPalindrome(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

   
    struct ListNode* prev = NULL;
    struct ListNode* curr = slow;

    while (curr != NULL) {
        struct ListNode* next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }


    struct ListNode* arr1 = head;
    struct ListNode* arr2 = prev;

    while (arr2 != NULL) {
        if (arr1->val != arr2->val) {
            return false;
        }

        arr1 = arr1->next;
        arr2 = arr2->next;
    }

    return true;
}