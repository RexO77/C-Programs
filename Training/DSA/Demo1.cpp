#include <iostream>
#include <vector>
#include <algorithm>

// Structure to represent an activity
struct Activity {
    int start, finish;
};

// Function to compare activities based on their finish time
bool compareActivities(const Activity& a, const Activity& b) {
    return a.finish < b.finish;
}

// Function to find the maximum number of activities
int findMaxActivities(const std::vector<Activity>& activities) {
    // Sort the activities based on their finish time
    std::vector<Activity> sortedActivities = activities;
    std::sort(sortedActivities.begin(), sortedActivities.end(), compareActivities);

    int maxActivities = 1; // At least one activity can be performed
    int lastFinishTime = sortedActivities[0].finish;

    // Iterate through the sorted activities and count the maximum number of activities
    for (int i = 1; i < sortedActivities.size(); i++) {
        if (sortedActivities[i].start >= lastFinishTime) {
            maxActivities++;
            lastFinishTime = sortedActivities[i].finish;
        }
    }

    return maxActivities;
}

int main() {
    // Example usage
    std::vector<Activity> activities = {
        {1, 4}, {3, 5}, {0, 6}, {5, 7}, {3, 8}, {5, 9},
        {6, 10}, {8, 11}, {8, 12}, {2, 13}, {12, 14}
    };

    int maxActivities = findMaxActivities(activities);
    std::cout << "Maximum number of activities: " << maxActivities << std::endl;

    return 0;
}