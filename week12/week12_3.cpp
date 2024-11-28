class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(0); //空包彈, 下一筆才是真的答案
        ListNode* now = ans;
        while(list1 != nullptr || list2 != nullptr) {
            if(list1==nullptr) { //左邊是空的
                now->next = list2; //就把右邊全接下
                break; //結束了
            }
            else if(list2==nullptr) { //右邊是空的
                now->next = list1; //就把左邊全接下
                break; //結束了
            }
            else if(list1->val < list2->val) { // list1比較小
                now->next = new ListNode(list1->val); //小的, 放入
                list1 = list1->next; //換下一筆
                now = now->next; //答案現在也換下一筆
            }
            else { //list2比較小
                now->next = new ListNode(list2->val); //小的, 放入
                list2 = list2->next; //換下一筆
                now = now->next; //答案現在也換下一筆
            }
        }
        return ans->next; //ans是空包彈, 下一筆才是真的答案
    }
};
