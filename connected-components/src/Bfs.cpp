
#include <iostream>
#include <stack>
#include <vector>
#include "StopWatch.cpp"

using namespace std;

class Bfs {
	public: int run(const int numberOfVertices, const std::vector<std::pair<int,int> > &edges, std::vector<int> &outVertexToComponent, StopWatch &stopWatch) {
	    stopWatch.start(stopWatch.inputProcessing);
		std::vector<std::vector<int> > graph(numberOfVertices, std::vector<int>());
		for (unsigned int i = 0; i < edges.size(); ++i) {
			graph[edges[i].first].push_back(edges[i].second);
			graph[edges[i].second].push_back(edges[i].first);
		}
		stopWatch.stop(stopWatch.inputProcessing);
		stopWatch.start(stopWatch.mainSection);

		int componentCount = 0;
		stack<int> s;
		for (unsigned int i = 0; i < graph.size(); ++i) {
			if (outVertexToComponent[i] >= 0) continue;
			s.push(i);
			while(!s.empty()) {
				int cur = s.top();
				s.pop();
				if (outVertexToComponent[cur] >= 0) continue;
				outVertexToComponent[cur] = componentCount;

				for (unsigned int j = 0; j < graph[cur].size(); ++j) {
					int next = graph[cur][j];
					if (outVertexToComponent[next] >= 0) continue;
					s.push(next);
				}
			}
			++componentCount;
		}
		stopWatch.stop(stopWatch.mainSection);

		return componentCount;
	}
};
