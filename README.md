# Competitive Programming

- [Watermelon](https://codeforces.com/problemset/problem/4/A)
- [Way too long words](https://codeforces.com/problemset/problem/71/A)

## DP

- [From Zero to Y](https://codeforces.com/problemset/problem/1488/A)


# Template
To add template,
1. ctrl + shift + p
2. Select configure user snippets
3. Select language
4. Paste in the json, e.g. in cpp.json:
```
{
    "Competitive Programming Template": {
    "prefix": ["cp", "temp", "contest"],
    "body": [
      "#include <bits/stdc++.h>",
      "using namespace std;",
      "",
      "int main() {",
      "    ios::sync_with_stdio(false);",
      "    cin.tie(NULL);",
      "",
      "    int t;",
      "    cin >> t;",
      "",
      "    while (t--) {",
      "        int n, target;",
      "        cin >> n >> target;",
      "",
      "        // cin.ignore();",
      "        // string s;",
      "        // getline(cin, s);",
      "        // cin >> s;",
      "",
      "        vector<int> arr(n);",
      "",
      "        for (int i = 0; i < n; i++)",
      "            cin >> arr[i];",
      "    }",
      "}",

    ],
        "description": "Standard CP template with fast IO + test case loop"
    }
}
```