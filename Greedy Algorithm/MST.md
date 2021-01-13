# Spanning Tree

그래프 내의 **모든 정점**을 포함하는 트리

- Spanning Tree는 최소 연결 부분 그래프이다.

## MST

Spanning Tree 중에서 사용된 간선들의 가중치 합이 최소인 트리

**프림 알고리즘**과 **크루스칼 알고리즘**이 대표적이다.

# Prim’s MST Algorithm

 BFS와 같이 시작점을 기준으로 간선이 확장해나가는 방식

 대신 Prim's 알고리즘은 간선에 가중치가 있으며, 최소한의 비용을 갖는 트리를 만들어야 한다는 점에서 차이가 있다.

**최소 우선순위 큐**에서 **가중치가 가장 작은 정점**을 선택한 후 그 정점의 **인접한 정점**들에 대해 key 값과 연결된 가중치 값을 비교하여 key값을 갱신할 지 말지 결정한다.

<img src = "https://user-images.githubusercontent.com/59350891/104512735-02c8ce00-5632-11eb-9530-750ecc556d12.png" width = 50%>

# Kruskal’s MST Algorithm

가장 적은 비용으로 모든 노드를 연결하기 위해 사용하는 알고리즘 

흔히 여러 개의 도시가 있을 때 각 도시에 도로를 연결하고자 할 때 비용을 최소한으로 하고자 할 때 적용

모든 노드를 최대한 적은 비용으로 **연결**만 시키면 되기에 모든 **간선 정보를 오름차순으로 정렬**한 뒤에 **비용이 적은 간선부터 차근차근 그래프에 포함**시킨다.

1. 정렬된 순서에 맞게 프래프에 포함시킨다
2.  포함시키기전에 **사이클 테이블**을 확인한다
3. 사이클을 형성하는 경우 간선을 포함하지 않는다. 
   + 사이클이 발생하는지 여부는 Union-Find 알고리즘을 적용

시간복잡도는 Prim 알고리즘과 동일하다 -> O(ElogV)

<img src = "https://user-images.githubusercontent.com/59350891/104512951-4c191d80-5632-11eb-88ec-43e223fc281d.png" width = 50%>

[참고 - Prim](https://victorydntmd.tistory.com/102)

[참고 - Kruskcal](https://blog.naver.com/ndb796/221230994142) 