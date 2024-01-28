#include <stdio.h>

int countFriendshipSuggestions(int N, char friendship_matrix[2000][2000]) {
    int count = 0;

    for (int u = 0; u < N; u++) {
        for (int v = 0; v < N; v++) {
            if (u != v && friendship_matrix[u][0] == '0' && friendship_matrix[v][0] == '0') {
                int mutual_friends = 0;
                for (int w = 0; w < N; w++) {
                    if (u != w && v != w && friendship_matrix[u][w] == '1' && friendship_matrix[v][w] == '1') {
                        mutual_friends++;
                    }
                }

                if (mutual_friends > 0) {
                    count += mutual_friends;
                }
            }
        }
    }

    return count;
}

int main() {
    int N;
    scanf("%d", &N);

    char friendship_matrix[2000][2000];
    for (int i = 0; i < N; i++) {
        scanf("%s", friendship_matrix[i]);
    }

    int suggestions = countFriendshipSuggestions(N, friendship_matrix);
    printf("%d\n", suggestions);

    return 0;
}