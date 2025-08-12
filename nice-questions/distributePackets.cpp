#include <bits/stdc++.h>

using namespace std;

int total(vector<int>&packets){
    int sum = 0;
    for(int packet : packets){
        sum+=packet;
    }    
    return sum;
}

int minimumPackets(vector<int>&packets){
    int maxi = INT_MIN;
    for(int packet : packets){
        maxi = max(maxi,packet);
    }    
    return maxi;
}

bool isPossible(vector<int>& packets, int kids, int maxPack) {
    int packsDistributed = 1;
    int sum = 0;

    for (int packet : packets) {
        if (sum + packet > maxPack) {
            packsDistributed++;
            sum = packet;
            if (packsDistributed > kids) {
                return false;
            }
        } else {
            sum += packet;
        }
    }
    return true;
    }

int maxMiniPacks(vector<int>&packets , int kids){
    
    if(packets.size() < kids){
        return -1;
    }
    
    int low = minimumPackets(packets);
    int high = total(packets);
    int maxPackets = INT_MIN;
    while(low <= high){
        int mid = (high+low)>>1;
        if(isPossible(packets , kids , mid)){
            high = mid-1;
            maxPackets = mid;
        }else{
            low = mid+1;
        }
    }
    return maxPackets;
}

int main() {
    vector<int>packets = {1,2,3,4,5};
    int kids = 3;
    cout<<maxMiniPacks(packets,kids);

    return 0;
}