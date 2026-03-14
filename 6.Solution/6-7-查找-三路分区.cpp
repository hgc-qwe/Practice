#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int func(vector<int> nums, int left, int right, int k) {
	if (left >= right) return nums[left];

	int pivot = nums[left + rand() % (right - left + 1)];

	vector<int> small, equal, large;

	for (int i = left; i <= right; i++) {
		if (nums[i] < pivot) {
			small.push_back(nums[i]);
		} else if (nums[i] == pivot) {
			equal.push_back(nums[i]);
		} else {
			large.push_back(nums[i]);
		}
	}

	if (k < small.size()) {
		nums.clear();
		nums.insert(nums.end(), small.begin(), small.end());
		return func(nums, 0, nums.size() - 1, k);
	} else if (k < small.size() + equal.size()) {
		return pivot;
	} else {
		int new_k = k - small.size() - equal.size();
		nums.clear();
		nums.insert(nums.end(), large.begin(), large.end());
		return func(nums, 0, nums.size() - 1, new_k);
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, k;
	cin >> n >> k;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	
	srand(time(nullptr));

	int res = func(nums, 0, nums.size() - 1, k);

	cout << res << endl;

	return 0;
}