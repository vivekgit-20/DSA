import java.util.Arrays;

class Solution {
    public int[][] kClosest(int[][] points, int k) {

        Arrays.sort(points, (a, b) -> {
            long distA = (long) a[0] * a[0] + (long) a[1] * a[1];
            long distB = (long) b[0] * b[0] + (long) b[1] * b[1];

            return Long.compare(distA, distB);
        });

        return Arrays.copyOfRange(points, 0, k);
    }
}