class Solution:
    def pascal_triangle(self, numRows: int) -> list[list[int]]:
        triangle = []
        for i in range(numRows):
            row = [1] * (i+1)
            for j in range(1, i):
                row[j] = triangle[i-1][j-1] + triangle[i-1][j]
            triangle.append(row)
        return triangle
    
    def getRows(self, rowIndex: int) -> list[int]:
        triangle = self.pascal_triangle(rowIndex+1)
        return triangle[rowIndex]
    
ob = Solution()
print(ob.getRows(3))