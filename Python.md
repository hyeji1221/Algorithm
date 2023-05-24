콤마(,)로 구분하여 입력받기

```python
n = int(input())
for i in range(n):
    a,b = map(int, input().split(","))
    print(a+b)
```

