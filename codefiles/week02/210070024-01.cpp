#include <iostream>
#include <vector>
using namespace std;

int main() {
int machines, products;
cin >> machines >> products;

vector<int> time(machines);
for (int i = 0; i < machines; ++i) 
{cin >> time[i];}

long long l = 0;
long long r = 1e18;
long long ans = LLONG_MAX;

while (l <= r) {
long long m = (l + r) / 2;
long long count = 0;

for (int i = 0; i < machines; ++i) 
{count += m / time[i];}

if (count >= products) 
{
ans = m;
r = m - 1;
} 
else {l = m + 1;}
   }

cout << ans << endl;

return 0;
}
