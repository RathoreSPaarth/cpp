class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        
        for(int i = 0; i<board.size(); i++){
            if(isValidRow(board.at(i)))
                continue;
            else
                return false;
        }
                        
        for(int i = 0; i<board.size(); i++){
            vector<char> col;
            for(int j = 0; j<board.size(); j++){
                col.push_back(board.at(j).at(i));
            }
            
            if(isValidCol(col))
                continue;
            else
                return false;
        }
                
        vector<vector<char>> matrix1;
        
        for(int i = 0; i<board.size(); i++){
            vector<char> minMatrix;
            for(int j = 0; j<3; j++){
                minMatrix.push_back(board.at(i).at(j));
            }
            matrix1.push_back(minMatrix);
    }
    
        
        if(!isMatrixValid(matrix1))
                return false;
        
        
        vector<vector<char>> matrix2;
        
        for(int i = 0; i<board.size(); i++){
            vector<char> minMatrix;
            for(int j = 3; j<6; j++){
                minMatrix.push_back(board.at(i).at(j));
            }
            matrix2.push_back(minMatrix);
        }
        
        if(!isMatrixValid(matrix2))
                return false;
                
        vector<vector<char>> matrix3;
        
        for(int i = 0; i<board.size(); i++){
            vector<char> minMatrix;
            for(int j = 6; j<9; j++){
                minMatrix.push_back(board.at(i).at(j));
            }
            matrix3.push_back(minMatrix);
        }
        
        if(!isMatrixValid(matrix3))
                return false;
                
        return true;
    }
    
    bool isValidRow(vector<char> row){
        map<char,int> counter;
        
        for(int i = 0; i<row.size(); i++){
            counter[row.at(i)]++;
        }
        for(auto it = counter.begin(); it!=counter.end(); it++){
            if(it->second >1 && it->first != '.')
                return false;
        }
       
        return true;
    }
    
    bool isValidCol(vector<char> col){
        map<char,int> counter;
        
        for(int i = 0; i<col.size(); i++){
            counter[col.at(i)]++;
        }
        for(auto it = counter.begin(); it!=counter.end(); it++){
            if(it->second >1 && it->first != '.')
                return false;
        }
        
        return true;
    }
    
    bool isMatrixValid(vector<vector<char>> matrix){
        map<char,int> counter;
   
        for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                counter[matrix.at(i).at(j)]++;
            }
        }
        for(auto it = counter.begin(); it!=counter.end(); it++){
            if(it->second >1 && it->first != '.')
                return false;
        }
        
        return true;
    }
};
