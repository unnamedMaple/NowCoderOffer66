//��ʵ�������������ֱ��������л��ͷ����л�������
class Solution {
public:
	char* Serialize(TreeNode *pRoot) {
		string s;
		if (!pRoot)
			return NULL;
		deque<TreeNode*> q;
		q.push_back(pRoot);
		while (!q.empty()) {
			int n = q.size();
			for (int i = 0; i < n; ++i) {
				if (q.front()) {
					q.push_back(q.front()->left);
					q.push_back(q.front()->right);
					s += to_string(q.front()->val) + ' ';
				}
				else {
					s += "# ";
				}
				q.pop_front();
			}
		}
		char* chr = strdup(s.c_str());
		return  chr;
	}
	TreeNode* Deserialize(char *str) {
		if (!str)
			return nullptr;
		int k = 0;
		auto ret = nextNode(str, k);
		deque<TreeNode*> q;
		q.push_back(ret);
		while (!q.empty()) {
			int n = q.size();
			for (int i = 0; i < n; ++i) {
				q.front()->left = nextNode(str, k);
				q.front()->right = nextNode(str, k);
				if (q.front()->left)
					q.push_back(q.front()->left);
				if (q.front()->right)
					q.push_back(q.front()->right);
				q.pop_front();
			}
		}
		return ret;
	}
	TreeNode* nextNode(char *str, int &i) {
		string s;
		while (str[i] != '\0'&&str[i] != ' ') {
			if (str[i] == '#') {
				i += 2;
				return nullptr;
			}
			s += str[i];
			i++;
		}
		if (str[i] == ' ')
			i++;
		if (!s.empty())
			return new TreeNode(stoi(s));
		return nullptr;
	}
};