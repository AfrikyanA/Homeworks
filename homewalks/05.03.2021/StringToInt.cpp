// Implement string to int conversation function

int StringToInt(const string& str){
	
	for(int i = 0; i < (int)str.length(); ++i){
		
		if(str[i] < 48 || str[i] > 57)
			return 0;
	}
	
	int size = str.length()-1;
	int tmp = 0;
	
	for(int i = 0; i < (int)str.length(); ++i){
		
			tmp += (str[i] - '0') * pow(10,size--);
	}
	
	return tmp;
}
