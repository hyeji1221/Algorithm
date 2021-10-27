def solution(numbers, target):
    answer = 0
    def dfs(index, result):
        if index == len(numbers): # 트리 깊이가 리스트 길이까지 내려가면
            if result == target:
                nonlocal answer
                # 사용된 함수 바로 한단계 바깥쪽에 위치한 변수와 바인딩
                answer += 1
            return
        else:
            dfs(index+1, result + numbers[index])
            dfs(index + 1, result - numbers[index])

    dfs(0,0)
    return answer
