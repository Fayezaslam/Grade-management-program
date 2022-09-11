#include<iostream>
using namespace std;

int main()
{
 int size=100,n=50,c=0;
 int arr5[size],arr3[size];
 float arr2[size],arr4[size];
 char arr[size],ch;
{
 for(int i=0;i<50;i++)
{arr5[i]=i;}
 for(int j=0;j<50;j++)
/*{cout<<arr5[j]<<endl;}
}*/
{
 for(int i2=0;i2<10;i2++)
{arr2[i2]=10.5;}
for(int i2=10;i2<20;i2++)
{arr2[i2]=20;}
for(int i2=20;i2<30;i2++)
{arr2[i2]=30;}
for(int i2=30;i2<40;i2++)
{arr2[i2]=40;}
for(int i2=40;i2<50;i2++)
{arr2[i2]=50;}
 /*for(int j2=0;j2<50;j2++)
{cout<<arr2[j2]<<endl;}
}*/
{
 for(int i2=0;i2<10;i2++)
{arr3[i2]=10;}
for(int i2=10;i2<20;i2++)
{arr3[i2]=20;}
for(int i2=20;i2<30;i2++)
{arr3[i2]=30;}
for(int i2=30;i2<40;i2++)
{arr3[i2]=40;}
for(int i2=40;i2<50;i2++)
{arr3[i2]=50;}
 /*for(int j2=0;j2<50;j2++)
{cout<<arr3[j2]<<endl;}
}*/
{for(int i2=0;i2<10;i2++)
{arr4[i2]=80.5;}
for(int i2=10;i2<20;i2++)
{arr4[i2]=61.7;}
for(int i2=20;i2<30;i2++)
{arr4[i2]=70.9;}
for(int i2=30;i2<40;i2++)
{arr4[i2]=58.2;}
for(int i2=40;i2<50;i2++)
{arr4[i2]=87.5;}
/* for(int j2=0;j2<50;j2++)
{cout<<arr4[j2]<<endl;}
}*/

while(ch<'15')
 {cout<<"enter alphabet from a to p(e to end program)"<<endl;
 cout<<"a=ascending (all records) b=descending (all records) c=ascending (mids based)"<<endl;
 cout<<"d=descending (mids based) e=end program f=ascending (finals based) g=descending (finals based) "<<endl;
cout<<"h=ascending (grades) i=descending (grades) j=delete entry k=descending wrt x(finals)"<<endl;
cout<<"l=ascending>x(finals) n=descending<=x(finals) m=ascending <=x(finals) o=descending>x(grades)"<<endl;
cout<<"p=descending>x(grades)"<<endl;
cin>>ch;
if(ch=='e'||ch=='E')
{return 0;}
{if(ch=='a')
{

 int i, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr5[j] < arr5[i])
            {
                temp = arr5[i];
                arr5[i] = arr5[j];
                arr5[j] = temp;
            }
        }
    }
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
 
}
if(ch=='b')
{
  
    int i, j, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr5[i] < arr5[j])
            {
                desc = arr5[i];
                arr5[i] = arr5[j];
                arr5[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
}
if(ch=='c')
{

 int i, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr2[j] < arr2[i])
            {
                temp = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = temp;
            }
        }
    }
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
 
}
if(ch=='d')
{
  
    int i, j, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr2[i] < arr2[j])
            {
                desc = arr2[i];
                arr2[i] = arr2[j];
                arr2[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
}
{if(ch=='f')
{

 int i, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr4[j] < arr4[i])
            {
                temp = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = temp;
            }
        }
    }
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
 
}}
if(ch=='g')
{
  
    int i, j, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr4[i] < arr4[j])
            {
                desc = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
}
{if(ch=='h')
{

 int i, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr4[j] < arr4[i])
            {
                temp = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = temp;
            }
        }
    }
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
 
}}
if(ch=='i')
{
  
    int i, j, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr4[i] < arr4[j])
            {
                desc = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = desc;
            }
        }
    }
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
    }
}
if(ch=='k')
{
  
    int i, j,x, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr4[i] < arr4[j])
            {
                desc = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = desc;
            }
        }
    }cout<<"enter a number";
    cin>>x;
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {if(arr4[i]>x)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
}
{if(ch=='l')
{

 int i,x, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr4[j] < arr4[i])
            {
                temp = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = temp;
            }
        }
    }cout<<"enter a number";
    cin>>x;
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {if(arr4[i]>x){
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
 
}}
{if(ch=='n')
{

 int i,x, j, temp,c=65;
 
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr4[j] < arr4[i])
            {
                temp = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = temp;
            }
        }
    }cout<<"enter a number";
    cin>>x;
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {if(arr4[i]<=x){
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
 
}}
if(ch=='m')
{
  
    int i, j,x, desc,size;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr4[i] < arr4[j])
            {
                desc = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = desc;
            }
        }
    }cout<<"enter a number";
    cin>>x;
    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {if(arr4[i]<=x)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
}
if(ch=='o')
{
  
    int i, j, desc,size;
    char x,z;

    for (i = 0; i < 50; ++i)   //  'for' loop is used for sorting the numbers in descending order
    {
        for (j = i + 1; j < 50; ++j)
        {
            if (arr4[i] < arr4[j])
            {
                desc = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = desc;
            }
        }
    }cout<<"enter grade";
    cin>>x;
    if(x=='a'||x=='A')
{x=87;
z=100;}
if(x=='b'||x=='B')
{x=74;
z=85;}
if(x=='c'||x=='C')
{x=61;
z=73;}
if(x=='d'||x=='D')
{x=51;
z=60;}
if(x=='f'||x=='F')
{x=10;
z=50;}

    cout<<"\n Numbers in Descending Order : \n";
    for (i = 0; i <50; ++i)
    {if(arr4[i]>x)
    {
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
}
{if(ch=='p')
{

 int i, j, temp,c=65;
 char x,z;
    
    //sorting an array in ascending order
    for(i=0; i<50; i++)
    {
        for(j=i+1; j<50; j++)
        {
            //if there is a smaller element found on right of the array then swap it.
            if(arr4[j] < arr4[i])
            {
                temp = arr4[i];
                arr4[i] = arr4[j];
                arr4[j] = temp;
            }
        }
    }cout<<"enter a grade";
    cin>>x;
    if(x=='a'||x=='A')
{x=87;
z=100;}
if(x=='b'||x=='B')
{x=74;
z=85;}
if(x=='c'||x=='C')
{x=61;
z=73;}
if(x=='d'||x=='D')
{x=51;
z=60;}
if(x=='f'||x=='F')
{x=10;
z=50;}
    //printing the sorted array in ascending order
    cout<<"elements of array in sorted ascending order:"<<endl;
    for(i=0; i<50; i++)
    {if(arr4[i]>x){
        cout<<"roll#"<<arr5[i]<<endl;
        cout<<"class="<<arr3[i]<<endl;
        cout<<"mid marks="<<arr2[i]<<endl;
        cout<<"final marks="<<arr4[i]<<endl;
        if(arr4[i]>86)
        {cout<<"grade A"<<endl;}
        if(arr4[i]>73&&arr4[i]<86)
        {cout<<"grade B"<<endl;}
        if(arr4[i]>60&&arr4[i]<72)
        {cout<<"grade C"<<endl;}
        if(arr4[i]>50&&arr4[i]<59)
        {cout<<"grade D"<<endl;}
        if(arr4[i]<50)
        {cout<<"grade F"<<endl;}
   } }
 
}}
if(ch=='j')
{
    int tot=10, i, elem, j, found=0;

    cout<<"\nEnter roll no. to Delete an entry: ";
    cin>>elem;
    
    for(i=0;arr5[i]!=elem; i++)
    {}
    for(j=i;arr5[j]!='\0';j++)
    {arr5[j]=arr5[j+1];
    arr3[j]=arr3[j+1];
    arr2[j]=arr2[j+1];
    arr4[j]=arr4[j+1];
     }
    
    
    
      
    for(int itr=0;itr<50;itr++)
    {
    cout<<"roll#"<<arr5[itr]<<endl;
    cout<<"class="<<arr3[itr]<<endl;
    cout<<"mid marks="<<arr2[itr]<<endl;
    cout<<"final marks="<<arr4[itr]<<endl;
    }
    
}
}}}}}}}