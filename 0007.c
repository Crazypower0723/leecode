//
// Created by Dell on 2023/7/28.
//

int reverse(int x) {
    int b = 0;
    if (x < 0) {
        int min = INT_MIN / 10;
        while (x) {
            if (b < min) {
                return 0;
            }
            if (b == min && x % 10 < -8) {
                return 0;
            }
            b = b * 10 + x % 10;
            x /= 10;
        }
        return b;
    }
    else{
        int max = INT_MAX / 10;
        while (x) {
            if (b > max) {
                return 0;
            }
            if (b == max && x %10 > 8) {
                return 0;
            }
            b = b * 10 + x % 10;
            x /= 10;
        }
        return b;
    }
}

int main() {
    cout << reverse(INT_MAX) << endl;
    return 0;
}