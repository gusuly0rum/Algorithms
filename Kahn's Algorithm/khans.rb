require '../Graphs/graph'

def topological_sort(nodes)
  stack = []
  result = []

  nodes.each do |node|
    stack.push(node) if node.in_edges.empty?
  end

  until stack.empty?
    node = stack.pop
    result.push(node)

    node.out_edges.dup.each do |edge|
      node = edge.to_vertex
      edge.destroy!
      stack.push(node) if node.in_edges.empty?
    end
  end
  result.length == nodes.length ? result : []
end
