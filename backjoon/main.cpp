//
//  main.cpp
//  bk
//
//  Created by byeongkwan on 2017. 10. 6..
//  Copyright © 2017년 byeongkwan. All rights reserved.
//

//#include <iostream>
//using namespace std;
//int p[10000];
//int d[10000];
//int main(int argc, const char * argv[]) {
//    int n;
//
//    cin>>n;
//    for(int i=1; i<=n; i++){
//        cin>>p[i];
//    }
//    for(int i=1; i<=n; i++){
//        for(int j=1; j<=i; j++){
//            if(d[i]<p[j]+d[i-j])
//                d[i] = p[j]+d[i-j];
//        }
//    }
//    cout<<d[n];
//
//    return 0;
//}

// 11053번

//#include <iostream>
//#include <vector>
//#include <algorithm>
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//
//    vector<int> a(n);
//    vector<int> d(n);
//
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    for(int i=0; i<n; i++){
//        d[i]=1;
//        for(int j=0; j<i; j++){
//            if(a[j]<a[i] && d[i]<d[j]+1)
//                d[i] = d[j]+1;
//        }
//    }
//    cout<<*max_element(d.begin(), d.end());
//    return 0;
//}
//

// 11055번

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//
//    vector<int> a(n);
//    vector<int> d(n);
//
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//    for(int i=0; i<n; i++){
//        d[i] = a[i];
//        for(int j=0; j<i; j++){
//            if(a[i]>a[j] && d[i]<d[j]+a[i])
//                d[i] = d[j]+a[i];
//        }
//    }
//    cout<<*max_element(d.begin(), d.end());
//}

//11722번

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int main(){
//    int n;
//    cin>>n;
//    vector<int> a(n);
//    vector<int> d(n);
//
//    for(int i=0; i<n; i++){
//        cin>>a[i];
//    }
//
//    for(int i=0; i<n; i++){
//        d[i] = 1;
//        for(int j=0; j<i; j++){
//            if(a[i]<a[j] && d[i]<d[j]+1)
//                d[i] = d[j]+1;
//        }
//    }
//    cout<<*max_element(d.begin(), d.end());
//}

// 11054번

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//int main(){
//    int n;
//    int max=0;
//    cin>>n;
//    vector<int> d(n);
//    vector<int> d2(n);
//    vector<int> a(n);
//
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//
//    for(int i=0; i<n; i++){
//        d[i]=1;
//        for(int j=0; j<i; j++){
//            if(a[i]>a[j] && d[i]<d[j]+1){
//                d[i] = d[j]+1;
//                //cout<<"d["<<i<<"] = "<<d[i]<<'\n';
//            }
//        }
//    }
//    for(int i=n-1; i>=0; i--){
//        d2[i] = 1;
//        for(int j=n-1; j>i; j--){
//            if(a[i]>a[j] && d2[i]<d2[j]+1)
//                d2[i] = d2[j]+1;
//                //cout<<"d2["<<i<<"] = "<<d2[i]<<'\n';
//        }
//    }
//    for(int i=0; i<n; i++){
//        if(max<d[i]+d2[i]-1)
//            max = d[i]+d2[i]-1;
//    }
//    cout<<max;
//
//}
//1912번

//#include <iostream>
//#include <vector>
//
//using namespace std;
//int main(){
//    int n;
//    cin>>n;
//    vector<int> d(n);
//    vector<int> a(n);
//
//    for(int i=0; i<n; i++)
//        cin>>a[i];
//    d[0] = a[0];
//    for(int i=1; i<n; i++){
//        d[i] = a[i];
//        if(d[i]<d[i-1]+a[i])
//            d[i] = d[i-1]+a[i];
//    }
//    int max = d[0];
//    for(int i=1; i<n; i++){
//        if(max<d[i])
//            max = d[i];
//    }
//    cout<<max;
//}

//2579번

//#include <iostream>
//#include <vector>
//
//using namespace std;
//int d[300][2];
//int main(){
//    int stair;
//    cin>>stair;
//
//    vector<int> a(stair);
//    for(int i=0; i<stair; i++){
//        cin>>a[i];
//    }
//    d[0][0] = a[0];
//    for(int i=1; i < stair; i++){
//        d[i][1] = d[i-1][0]+a[i];
//        if(d[i-2][0] > d[i-2][1])
//            d[i][0] = d[i-2][0]+a[i];
//        else
//            d[i][0] = d[i-2][1]+a[i];
//    }
//
//    if(d[stair-1][0]>d[stair-1][1])
//        cout<<d[stair-1][0];
//    else
//        cout<<d[stair-1][1];
//}

