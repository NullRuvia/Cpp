#ifndef UI_H
#define UI_H

class UI {
public:
	static int main_memu() {
		int n;
		cout << "����:1, ����:2, ��κ���:3, ����:4 >> ";
		cin >> n;
		return n;
	}
	static int shape_menu() {
		int n;
		cout << "��:1, ��:2, �簢��:3 >> ";
		cin >> n;
		return n;
	}
	static int delete_menu() {
		int n;
		cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
		cin >> n;
		return n;
	}
};

#endif