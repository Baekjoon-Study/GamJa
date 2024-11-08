#include <stdio.h>

int main(void) {
    int N;
    scanf("%d", &N);
    
    int totalScores[3] = {0};
    int threePointsCount[3] = {0};
    int twoPointsCount[3] = {0};

    // 학생들의 점수 입력
    for (int i = 0; i < N; i++) {
        int scores[3];
        for (int j = 0; j < 3; j++) {
            scanf("%d", &scores[j]);
            totalScores[j] += scores[j];
            if (scores[j] == 3) threePointsCount[j]++;
            else if (scores[j] == 2) twoPointsCount[j]++;
        }
    }

    // 최대 점수 찾기
    int maxScore = 0;
    int candidateCount = 0; // 최대 점수를 가진 후보 수
    int candidates[3]; // 최대 점수를 가진 후보의 인덱스 저장

    for (int i = 0; i < 3; i++) {
        if (totalScores[i] > maxScore) {
            maxScore = totalScores[i];
            candidateCount = 1; // 새로운 최대 점수 발견
            candidates[0] = i; // 후보 인덱스 저장
        } else if (totalScores[i] == maxScore) {
            candidates[candidateCount] = i; // 후보 인덱스 저장
            candidateCount++;
        }
    }

    // 회장 결정
    if (candidateCount == 1) {
        // 유일한 최대 점수 후보
        printf("%d %d\n", candidates[0] + 1, maxScore);
    } else {
        // 여러 후보가 최대 점수를 가진 경우
        int maxThreePoints = -1;
        int winnerIndex = -1;

        for (int i = 0; i < candidateCount; i++) {
            int index = candidates[i];
            if (threePointsCount[index] > maxThreePoints) {
                maxThreePoints = threePointsCount[index];
                winnerIndex = index;
            } else if (threePointsCount[index] == maxThreePoints) {
                // 동률일 경우 2점 비교
                if (twoPointsCount[index] > twoPointsCount[winnerIndex]) {
                    winnerIndex = index;
                } else if (twoPointsCount[index] == twoPointsCount[winnerIndex]) {
                    winnerIndex = -1; // 동률인 경우
                }
            }
        }

        if (winnerIndex != -1) {
            printf("%d %d\n", winnerIndex + 1, maxScore);
        } else {
            printf("0 %d\n", maxScore);
        }
    }

    return 0;
}
