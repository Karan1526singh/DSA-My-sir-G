#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
#include <climits>
#include <algorithm> // added header for reverse()

using namespace std;

struct Station {
    string name;
    unordered_map<string, int> connections;
};

class bhopalMetro {
    private:
        unordered_map<string, Station> stations;

    public:
        void add_station(string name) {
            Station station;
            station.name = name;
            stations[name] = station;
        }

        void add_connection(string from, string to, int time) {
            stations[from].connections[to] = time;
            stations[to].connections[from] = time;
        }

        void remove_station(string name) {
            stations.erase(name);
            for (auto& station : stations) {
                station.second.connections.erase(name);
            }
        }

        void remove_connection(string from, string to) {
            stations[from].connections.erase(to);
            stations[to].connections.erase(from);
        }

        void display_stations() {
            cout << "Stations:" << endl;
            for (auto& station : stations) {
                cout << "  " << station.first << endl;
            }
        }

        void display_connections() {
            cout << "Connections:" << endl;
            for (auto& station : stations) {
                cout << "  " << station.first << ":" << endl;
                for (auto& connection : station.second.connections) {
                    cout << "    " << connection.first << " (" << connection.second << " minutes)" << endl;
                }
            }
        }

        void find_route(string start, string end) {
            unordered_map<string, int> distances;
            unordered_map<string, string> prev;
            priority_queue<pair<int, string>> pq;

            for (auto& station : stations) {
                distances[station.first] = INT_MAX;
                prev[station.first] = "";
            }

            distances[start] = 0;
            pq.push(make_pair(0, start));

            while (!pq.empty()) {
                string current = pq.top().second;
                pq.pop();

                if (current == end) {
                    break;
                }

                for (auto& connection : stations[current].connections) {
                    string next = connection.first;
                    int time = connection.second;

                    int new_distance = distances[current] + time;
                    if (new_distance < distances[next]) {
                        distances[next] = new_distance;
                        prev[next] = current;
                        pq.push(make_pair(-new_distance, next));
                    }
                }
            }

            if (prev[end] == "") {
                cout << "No route found." << endl;
            } else {
                string current = end;
                vector<string> path;
                while (current != "") {
                    path.push_back(current);
                    current = prev[current];
                }
                reverse(path.begin(), path.end());

                cout << "Route:" << endl;
                for (int i = 0; i < path.size(); i++) {
                    cout << "  " << path[i];
                    if (i < path.size() - 1) {
                        cout << " -> " << stations[path[i]].connections[path[i+1]] << " minutes -> ";
                    }
                }
                cout << endl;
            }
        }
};

int main() {
    bhopalMetro metro;

    metro.add_station("Rajiv Chowk");
    metro.add_station("New Delhi");
    metro.add_station("Chandni Chowk");
    metro.add_station("Kashmere Gate");
    metro.add_station("Central Secretariat");
    metro.add_station("Jor Bagh");

    metro.add_connection("Rajiv Chowk", "New Delhi", 2);
    metro.add_connection("Rajiv Chowk", "Chandni Chowk", 3);
    metro.add_connection("Chandni Chowk", "Kashmere Gate", 2);
    metro.add_connection("Kashmere Gate", "Central Secretariat", 10);
    metro.add_connection("Central Secretariat", "Jor Bagh", 5);

    metro.display_stations();
    metro.display_connections();

    metro.find_route("Rajiv Chowk", "Jor Bagh");

    return 0;
}
