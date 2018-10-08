def quicksort! (&prc)
  prc ||= Proc.new { |a, b| a <=> b }
  return self if self.length <= 1
  pivot_element = self[0]
  pivs = self.select { |el| prc.call(pivot_element, el) ==  0 }
  left = self.select { |el| prc.call(pivot_element, el) ==  1 }
  rite = self.select { |el| prc.call(pivot_element, el) == -1 }
  return left.quicksort!(&prc) + pivs + rite.quicksort!(&prc)
end