#define	_CRT_SECURE_NO_WARNINGS
#include <stdio.h>
/*
    4면 2^4 - 1: 1개 이상을 선택하야 하니까.
*/

int arr[21];

int main() {
	freopen("input.txt", "r", stdin);
	setbuf(stdout, NULL);

	int tc;
	scanf("%d", &tc);
	for (int t = 0; t < tc; t++) {
		int Ans = 0;
		int n, k; scanf(" %d %d", &n, &k);

		for (int i = 0; i < n; i++) { scanf(" %d", arr + i); }//1 2 1 2
		
		for (int i = 1; i < (1<<n); i++) { //1 ~ 15 까지 
			int sum = 0;
			for (int j = 0; j < n; j++) {
				if (i & (1 << j))//0001 ~ 1111 을 확인 
					sum += arr[j];
			}
			if (sum == k)
				Ans++;
		}

		for (int j = 0; j < n; j++) { //배열 초기화
			arr[j] = 0;
		}
		printf("#%d %d\n", t + 1, Ans);
	}
}





//int arr[20] = {0};
//int num[20] = {0};
//void f(int i){
//    int t = 0;
//    while(i!=0){
//        arr[t] = i % 2;
//        i = i/2;
//        t++;
//    }
//}
//int power(int n) {
//	int Ans = 1;
//	for (int i = 0; i < n; i++)
//		Ans *= 2;
//	return Ans;
//}
//
//int main(){
//    int tc;
//	freopen("input.txt", "r", stdin);
//	setbuf(stdout, NULL);
//
//    scanf("%d",&tc);
//    for(int t=0;t<tc;t++){
//        int Ans = 0;
//        int n,k; scanf(" %d %d",&n, &k);
//
//        for(int i=0;i<n;i++){scanf(" %d",num+i);}
//
//        for(int i=1;i<=power(n) -1;i++) //16번 
//		{
//               f(i); // 1 ~ 15를 이진수로 만들어(0001 ~ 1111) arr[20] 배열에 저장
//                
//                int mul = 0;
//                for(int t = 0;t<n;t++)
//				{
//                    mul += arr[t] * num[t];
//                }
//                if(mul == k) Ans ++;
//
//				//for (int j = 0; j < n; j++) { //배열 초기화
//				//	arr[j] = 0;
//				//}
//        }
//
//        printf("#%d %d\n",t+1,Ans);
//    }
//
//    return 0;
//}   



//vector<int> v;
//int check[21][1005];
//int test, ttt = 0, num, n, cnt = 0;
//void dfs(int index, int sum) {
//
//	if (sum == num) {
//		cnt++;
//		return;
//	}
//
//	if (sum > num) {
//		return;
//	}
//	for (int i = index + 1; i < n; i++) {
//		dfs(i, sum + v[i]);
//	}
//}
//
//int main() {
//	scanf("%d", &test);
//	while (test--) {
//		scanf("%d %d", &n, &num);
//		ttt++;
//		int a;
//		cnt = 0;
//		v.clear();
//		memset(check, -1, sizeof(check));
//		for (int i = 0; i < n; i++) {
//			scanf("%d", &a);
//			v.push_back(a);
//		}
//
//		for (int i = 0; i < n; i++) {
//			dfs(i, v[i]);
//		}
//
//		cout << "#" << ttt << " " << cnt << "\n";
//	}
//	return 0;
//}
