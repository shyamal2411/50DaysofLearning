#include <bits/stdc++.h>
using namespace std;

// https://leetcode.com/problems/trapping-rain-water/

class Solution
{
public:
    int trap(vector<int> &height)
    {
        // corner case covered
        if (height.size() <= 1)
            return 0;
        stack<int> st;
        int water = 0, i = 0;
        // until i doesn't reach height
        while (i < height.size())
        {
            // while stack isn't empty or height[i] is smaller than the top of the stack
            if (st.empty() || height[i] <= height[st.top()])
            {
                st.push(i++); //go on pushing in stack
            }
            else
            {
                int currIndex = st.top(); //assign present index to top
                st.pop();
                if (!st.empty())
                {                                                                             // if stack is not empty
                    int distance = i - st.top() - 1;                                          // calculating distance between top and current index
                    int currentHeight = min(height[st.top()], height[i]) - height[currIndex]; // calculate bounded height between 2 poles
                    water += distance * currentHeight;                                        // add water
                }
            }
        }
        return water;
    }
};
// https://youtu.be/EdR3V5DBgyo?t=365

int main()
{
    Solution ss;
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << ss.trap(height) << endl;
    return 0;
}
/*
First, we don't consider the first bar, as it won't be able to store water on its left.
Then, we consider the second bar. We can't store water on its left, as the first bar is already on the stack.
After that, we go on finding the left max bar and when we find the left max bar, we can calculate the water that can be stored on the left.
when we encounter some bar which is higher than the left max bar, we pop the left max bar from the stack.
Then take the current bar and take the min of both
iterate further and do the same
calculate the water further and do the same
Now go on to the right bar
now to find the right max bar, we need to iterate from right side,
so start from right side and find the max bar
when we encounter some bar which is higher than the right max bar, we pop the right max bar from the stack.
Then take the current bar and take the min of both.
After that, we calculate the water that can be stored on the right.
*/

/*
Day-1 30 mins extra activity
Learned OOPS- Multi threading and multitasking.
Difference between both
Learned and solved OOPS questions on Infosys site
Podcast on spotify discussing about How big and interesting Cyber world is. 
Few insights were How vulnerable our data is. 
Got to know about "State sponsored hackers" and how kids of 16 years spoof into Chinese websites and hack them.
How Governments are using data to make decisions.
DATA IS THE NEW OIL.
Now, Hackers will fight more than soldiers.
SOMETHING SEEMS THREATENING BECAUSE WE'VE NOT LEARNT IT TO ITS DEEPEST.
HACKING MEANS TO OPERATE SOMETHING THE WAY IT WAS NOT MEANT TO BE
iF YOU USE A TOOTH BRUSH TO CLEAN THE MIRROR, YOU'VE HACKED THE TOOTHBRUSH - AS IT WAS NOT MEANT TO CLEAN THE MIRROR BUT YOU DID! 
*/