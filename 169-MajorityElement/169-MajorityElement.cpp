// Last updated: 3/25/2025, 6:49:19 PM
class Solution {
public:
int majorityElement(vector<int> nums)
{
    int n = nums.size();
    int count = 1;

    sort(nums.begin(), nums.end());
    int majority_element = nums.at(0);

    for (int i = 1; i < n;i++)
    {
        if (nums.at(i) == nums.at(i - 1))
        {
            count++;
        }
        else
        {
            count = 1;
            majority_element = nums.at(i);
        }

        if (count > n / 2)
        {
            return majority_element;
        }
    }
    return majority_element;
}
};