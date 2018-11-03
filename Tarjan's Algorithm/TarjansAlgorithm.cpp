#include <map>
#include <queue>
#include "../Graphs/Node.hpp"
#include "../Graphs/Edge.hpp"
#include "TarjansAlgorithm.hpp"


std::vector<Node*> kahn(std::vector<Node*> nodes) {
  std::queue<Node*> queue;
  std::vector<Node*> result;
  std::map<Node*, int> numEdges;
  
  for (int k = 0; k < nodes.size(); k++) {
    Node* node = nodes[k];
    numEdges[node] = (int) node->prevEdges.size();
  }
  
  for (int k = 0; k < nodes.size(); k++) {
    Node* node = nodes[k];
    if (numEdges[node] == 0) queue.push(node);
  }
  
  while (!queue.empty()) {
    Node* node = queue.front();
    queue.pop();
    result.push_back(node);
    
    std::list<Edge*>::iterator iter;
    std::list<Edge*> edges = node->nextEdges;
    
    for (iter = edges.begin(); iter != edges.end(); iter++) {
      Edge* edge = *iter;
      numEdges[edge->nextNode]--;
      
      if (edge->nextNode->prevEdges.size() == 0) {
        queue.push(edge->nextNode);s
      }
    }
  }
  
  if (result.size() != nodes.size()) result.clear();
  return result;
}





//# def topological_sort(vertices)
//#   queue = []
//#   sorted = []
//
//#   vertices.each do |vertex|
//#     if vertex.in_edges.empty?
//#       queue.push(vertex)
//#     end
//#   end
//
//#   until queue.empty?
//#     vertex = queue.shift
//#     sorted.push(vertex)
//
//#     vertex.out_edges.dup.each do |edge|
//#       destination = edge.to_vertex
//#       edge.destroy!
//#       if destination.in_edges.empty?
//#         queue.push(destination)
//#       end
//#     end
//#   end
//#   sorted.length == vertices.length ? sorted : []
//# end
