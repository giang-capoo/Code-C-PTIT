#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Bỏ qua ký tự xuống dòng sau khi đọc số
    
    vector<string> topics;
    vector<int> counts;
    string current_topic = "";
    int question_count = 0;
    
    for (int i = 0; i < n; i++) {
        string line;
        getline(cin, line);
        
        // Nếu dòng trống => kết thúc chủ đề hiện tại
        if (line == "") {
            if (current_topic != "") {
                topics.push_back(current_topic);
                counts.push_back(question_count);
                current_topic = "";
                question_count = 0;
            }
        }
        // Nếu là chủ đề mới (chưa có chủ đề nào hoặc vừa kết thúc chủ đề trước)
        else if (current_topic == "") {
            current_topic = line;
            question_count = 0;
        }
        // Nếu là câu hỏi (đã có chủ đề)
        else {
            question_count++;
        }
    }
    
    // Thêm chủ đề cuối cùng (nếu có)
    if (current_topic != "") {
        topics.push_back(current_topic);
        counts.push_back(question_count);
    }
    
    // In kết quả
    for (int i = 0; i < topics.size(); i++) {
        cout << topics[i] << ": " << counts[i] << endl;
    }
    
    return 0;
}