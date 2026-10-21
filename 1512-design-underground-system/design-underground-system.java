import java.util.*;

class UndergroundSystem {

    class CheckIn {
        String station;
        int time;

        CheckIn(String station, int time) {
            this.station = station;
            this.time = time;
        }
    }

    class Route {
        long totalTime;
        int count;

        Route() {
            totalTime = 0;
            count = 0;
        }
    }

    private Map<Integer, CheckIn> checkIns;
    private Map<String, Route> routes;

    public UndergroundSystem() {
        checkIns = new HashMap<>();
        routes = new HashMap<>();
    }

    public void checkIn(int id, String stationName, int t) {
        checkIns.put(id, new CheckIn(stationName, t));
    }

    public void checkOut(int id, String stationName, int t) {
        CheckIn start = checkIns.get(id);

        String route = start.station + "->" + stationName;
        int duration = t - start.time;

        routes.putIfAbsent(route, new Route());

        Route r = routes.get(route);
        r.totalTime += duration;
        r.count++;

        checkIns.remove(id);
    }

    public double getAverageTime(String startStation, String endStation) {
        String route = startStation + "->" + endStation;

        Route r = routes.get(route);

        return (double) r.totalTime / r.count;
    }
}