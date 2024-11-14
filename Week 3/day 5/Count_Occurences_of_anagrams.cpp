public:
    int search(string pat, string txt) {
        vector<int> v(256, 0);
        vector<int> sf(256, 0);
        // int np = pat.size(), ns = txt.size();
        int p_size = pat.size(), t_size = txt.size();
        for (int i = 0; i < p_size; i++) {
            v[pat[i]]++;
            sf[txt[i]]++;
        }
        int cnt = 0;
        if (v == sf) {
            cnt++;
        }
        for (int i = 0, j = p_size; j < t_size; i++, j++) {
            sf[txt[j]]++;
            sf[txt[i]]--;
            if (v == sf) {
                cnt++;
            }
        }
        return cnt;
    }
};