class Solution {
public:
    
    unordered_map<string,string> h;

    int counter=0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        string amongus="http://tinyurl.com/";
        string s="";
        s=amongus+to_string(counter);
        counter++;
        
        h[s]=longUrl;
        return s;
        
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return h[shortUrl];
        
    }
};

                                                                     