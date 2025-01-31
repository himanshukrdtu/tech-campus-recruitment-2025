 #include <iostream>
#include <fstream>
#include <string>

using namespace std;

void extract_logs(const string& log_file, const string& target_date, const string& output_file) {
    ifstream infile(log_file);   
    ofstream outfile(output_file);  

    if (!infile) {
        cerr << "Error: Unable to open log file: " << log_file << endl;
        return;
    }
    if (!outfile) {
        cerr << "Error: Unable to create output file: " << output_file << endl;
        return;
    }

    string line;
    bool found_logs = false;
    
    while (getline(infile, line)) {  
        if (line.find(target_date) == 0) {   
            outfile << line << "\n";   
            found_logs = true;
        }
    }

    infile.close();
    outfile.close();

    if (found_logs) {
        cout << "Logs for " << target_date << " saved in " << output_file << endl;
    } else {
        cout << " No logs found for " << target_date << endl;
    }
}

int main(int argc, char* argv[]) {
    if (argc != 2) {
        cerr << "Usage: ./extract_logs YYYY-MM-DD" << endl;
        return 1;
    }

    string target_date = argv[1];
 
    string log_file = "C:\\Users\\HIMANSHU\\Desktop\\Test\\tech-campus-recruitment-2025\\logs_2024.log";
    string output_file = "C:\\Users\\HIMANSHU\\Desktop\\Test\\tech-campus-recruitment-2025\\output\\" + target_date + ".txt";

    extract_logs(log_file, target_date, output_file);
    return 0;
}
