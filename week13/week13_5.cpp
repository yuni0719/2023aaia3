class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode(); // 準備一個新的 ListNode 要放答案
        ListNode* now = ans; //會移動的小的指標, 下一步 下一步 用的
        while(list1 != nullptr || list2 != nullptr) { //只要還有東西 (不是空的)
            if(list1==nullptr) { //左邊空了, 接右邊
                now->next = list2; //接上右邊
                list2 = nullptr; //右邊順手清空, 要結束
            }else if(list2 == nullptr) { //右邊空了, 接左邊
                now->next = list1; //接上左邊
                list1 = nullptr; //左邊順手清空, 要結束
            }else if(list1->val < list2->val) { //兩邊都有值, 就要比大小, 小的塞進答案
                now->next = new ListNode(list1->val); //小的, 塞進答案
                list1 = list1->next; 
            }else {
                now->next = new ListNode(list2->val);
                list2 = list2->next;
            }
            now = now->next;
        }
        return ans->next;

    }
};