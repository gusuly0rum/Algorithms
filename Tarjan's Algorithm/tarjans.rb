require '../Graphs/graph'

def topological_sort(nodes)
  result = []
  visited = Set.new
  nodes.each do |node|
    unless visited.include?(node)
      visit(node, visited, result)
    end
  end
  result
end

def visit(node, visited, result)
  visited.add(node)
  node.out_edges.each do |edge|
    unless visited.include?(edge.to_vertex)
      visit(edge.to_vertex, visited, result)
    end
  end
  result.unshift(node)
end