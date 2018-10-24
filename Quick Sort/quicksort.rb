class Array
  def quicksort(&prc)
    prc ||= Proc.new { |a, b| a <=> b }
    return self if self.length <= 1
    pivot_element = self[0]
    pivs = self.select { |el| prc.call(pivot_element, el) ==  0 }
    left = self.select { |el| prc.call(pivot_element, el) ==  1 }
    rite = self.select { |el| prc.call(pivot_element, el) == -1 }
    return left.quicksort(&prc) + pivs + rite.quicksort(&prc)
  end
end

p [5,4,3,2,1,0,0,1,2,3,4,5].quicksort