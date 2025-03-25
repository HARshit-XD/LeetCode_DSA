// Last updated: 3/25/2025, 7:00:01 PM
class Solution {
public:
int majorityElement(vector<int> nums)
{
        int n = nums.size();
    int i, majority_element;
    int count = 0;

    for (i = 0; i < n; i++)
    {
        if (count == 0)
        {
            majority_element = nums.at(i);
        }

        if (majority_element == nums.at(i))
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return majority_element;
}
};