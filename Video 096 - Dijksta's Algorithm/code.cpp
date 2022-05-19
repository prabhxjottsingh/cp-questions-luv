void dijkstra(int source)
{
    vector<int> dist(n, INF);
    vector<bool> isVis(n, false);

    set<pair<int, int>> st;

    st.insert({0, source});
    dist[source] = 0;

    while (!st.empty())
    {
        auto node = *st.begin();

        int v = node.second;
        int v_dist = node.first;

        st.erase(*st.begin());

        if (isVis[v])
            continue;

        isVis[v] = 1;

        for (auto &child : graph[v])
        {

            int child_v = child.first;
            int wt = child.second;

            if (((dist[v] + wt) < dist[child_v]))
            {
                dist[child_v] = dist[v] + wt;
                st.insert({dist[child_v], child_v});
            }
        }
    }
}