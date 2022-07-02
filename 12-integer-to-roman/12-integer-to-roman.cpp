class Solution {
public:
    string intToRoman(int num) {
        std::string s;
     while(num>=1000)
     {
         s+='M';
         num-=1000;
     }
    if(num>=900)
    {
        s+="CM";
        num-=900;
    }
    if(num>=500){
        s+='D';
        num-=500;
    }
       if(num>=400)
        {
            
            num-=400;
            s+="CD";
        }
        while(num>=100)
        {
            num-=100;
            s+="C";
            
        }
        if(num>=90)
        {
            num-=90;
            s+="XC";
        }
        if(num>=50)
        {
            num-=50;
            s+="L";
        }
        if(num>=40)
        {
            num-=40;
            s+="XL";
        }
        while(num>=10)
        {
            num-=10;
            s+="X";
        }
        if(num>=9)
        {
            num-=9;
            s+="IX";
        }
        if(num>=5)
        {
            num-=5;
            s+="V";
        }
        if(num>=4)
        {
            num-=4;
            s+="IV";
        }
        while(num)
        {
            num--;
            s+="I";
        }
        
        return s;
    }
};