#include <stdio.h>
 
int main(void) {
    int max_limit;
    long total_sum = 0;
 
    // 入力値を受け取る
    scanf("%d", &max_limit);
 
    // 負の値が入力された場合はエラーとして "NG" を出力して終了する
    if (max_limit < 0) {
        printf("NG");
        return 0;
    }
 
    // 1 から入力された値まで順に数値を走査する
    for (int current_number = 1;; current_number++) {
        if (current_number > max_limit) {
            break;
        }
 
        // 3の倍数または5の倍数は合計の対象外とするためスキップする
        if (current_number % 3 == 0 || current_number % 5 == 0) {
            continue;
        }
 
        // 3の倍数でも5の倍数でもない残りの整数の総和を計算して蓄積する
        total_sum += (long)current_number;
    }
 
    // 計算された総和を出力する
    printf("%ld", total_sum);
 
    return 0;
}