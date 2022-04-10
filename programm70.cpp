//Write a C++ program which reads a sequence of integers and prints mode values of the sequence. The number of integers is greater than or equals to 1 and less than or equals to 100.
int main() {
    vector<int> nums(101, 0);
    int n, mode=0;

    while (cin >> n) {
        nums[n]++;
        if (nums[n] > mode) { mode=nums[n]; }
      }

    for (int i = 0; i != nums.size(); ++i) {
        if (nums[i] == mode)
        {
            cout << i << endl;

        }
    }

    return 0;
}
