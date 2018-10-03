class PolyTreeNode
  attr_reader :value, :parent, :children

  def initialize(value)
    @value = value
    @parent = nil
    @children = [];
  end

  def parent=(node)
    @parent.children.delete(self) if @parent
    @parent = node
    if node && !node.include?(self)
      node.children.push(self)
    end
  end

  def add_child(node)
    @children.push(node) unless include?(node)
    node.parent = self
  end

  def remove_child(node)
    raise 'node is not a child' unless include?(node)
    @children.delete(node)
    node.parent = nil
  end

  def include?(node)
    @children.include?(node)
  end

  def dfs(value)
    return self if self.value == value
    self.children.each do |child|
      node = child.dfs(value)
      return node if node
    end
    nil
  end

  def bfs(value)
    queue = [self]
    until queue.empty?
      node = queue.shift
      return node if node.value == value
      node.children.each { |child| queue.push(child) }
    end
    nil
  end
end