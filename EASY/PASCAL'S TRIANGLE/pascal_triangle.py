class Solution:
    def generate(self, numRows: int) -> list[list[int]]:
        triangle = []

        for row_num in range(numRows):
            row = [1] * (row_num + 1)
            for j in range(1, row_num):
                row[j] = triangle[row_num - 1][j - 1] + triangle[row_num - 1][j]
            triangle.append(row)

        return triangle

ob = Solution()
print(ob.generate(5))