#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n;
    vector<int> processes;

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        processes.push_back(p);
        sum += processes[i];
    }
    cin >> m;

    // write from here
    int hsh[n + 1] = {0};
    for (size_t i = 1; i <= n; i++)
    {
        hsh[i] = hsh[i - 1] + processes[i - 1];
    }
    int max = 0;
    for (size_t i = m; i <= n; i++)
    {
        if (max < (hsh[i] - hsh[i - m]))
        {
            max = hsh[i] - hsh[i - m];
        }
    }
    cout << sum - max;

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans=0;
    int count=k-parcels.size();
    for (size_t i = 1; i <=k; i++){
        if(count==0){
            break;
        }
        if(find(parcels.begin(), parcels.end(), i)  != parcels.end()){
            ans+=i;
            count-+1;
        }
    }
return ans;
    

      ans=0
    count=k-len(parcels)
    for i in range(1,k+1):
        if(count==0):
            break
        if(i not in parcels):
            ans+=i
            count-=1
                
    return ans
    return 0;
}