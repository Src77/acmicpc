#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
    for(scanf("%d", &T);T>0;T--){
        priority_queue<int> max_pq;
        priority_queue<int, vector<int>, greater<int> > min_pq;
        multiset<int> lp_max, lp_min;
        int k, i, ws;
        char work;
        for(scanf("%d", &ws);ws>0;ws--){
            do{
                scanf("%c", &work);
            }while(work != 'I' && work != 'D');
            if(work == 'I'){
                scanf("%d", &k);
                min_pq.push(k);
                max_pq.push(k);
            }
            if(work == 'D'){
                scanf("%d", &k);
                if(k==1){ // delete max
                    while(!max_pq.empty()){
                        if(lp_max.find(max_pq.top()) != lp_max.end()){
                            auto it = lp_max.find(max_pq.top());
                            lp_max.erase(it);
                            max_pq.pop();
                        }
                        else break;
                    }
                    if(max_pq.empty())continue;
                    lp_min.insert(max_pq.top());
                    max_pq.pop();
                }
                else { // delete min
                    while(!min_pq.empty()){
                        if(lp_min.find(min_pq.top()) != lp_min.end()){
                            auto it = lp_min.find(min_pq.top());
                            lp_min.erase(it);
                            min_pq.pop();
                        }
                        else break;
                    }
                    if(min_pq.empty())continue;
                    lp_max.insert(min_pq.top());
                    min_pq.pop();
                }
            }
        }
        while(!max_pq.empty()){
            if(lp_max.find(max_pq.top()) != lp_max.end()){
                auto it = lp_max.find(max_pq.top());
                lp_max.erase(it);
                max_pq.pop();
            }
            else break;
        }
        while(!min_pq.empty()){
            if(lp_min.find(min_pq.top()) != lp_min.end()){
                auto it = lp_min.find(min_pq.top());
                lp_min.erase(it);
                min_pq.pop();
            }
            else break;
        }
        if(max_pq.empty()){
            printf("EMPTY\n");
        }
        else{
            printf("%d %d\n", max_pq.top(), min_pq.top());
        }
    }
}