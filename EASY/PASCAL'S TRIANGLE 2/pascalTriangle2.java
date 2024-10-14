class pascalTriangle2 {
    public List<Integer> getRow(int rowIndex){
        List<Integer> row = new ArrayList<>();
        row.add(1);
        for (int i = 1; i <= rowIndex; i++) {
            row.add((int) ((long) row.get(i - 1) * (rowIndex - i + 1) / i));
        }
        return row;
    }    
    public static void main(String[] args) {
        pascalTriangle2 ob = new pascalTriangle2();
        System.out.println(ob.getRow(3));
    }
}
