 void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
 int i=0,j=0,k=0,c[400];
while(i<m && j<n)
{
    if(nums1[i]>=nums2[j])
    {
        c[k]=nums2[j];
        j++;
    }
    else if(nums2[j]>nums1[i])
    {
        c[k]=nums1[i];
        i++;
    }
    k++;
}

    while(j!=n)
    {
        c[k]=nums2[j];
        k++;
        j++;
    }

    while(i!=m)
    {
        c[k]=nums1[i];
        k++;
        i++;
    }
   for(int i=0;i<k;i++)
  {
    nums1[i]=c[i];
   }
}