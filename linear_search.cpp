void linear_search (int a[], int num, int key)
{
  bool find_status = false;
  for (int i=0, i<num, i++)
    {
      if(a[i] == key)
        { find_status = True;
          cout<< "The" << key << "found in the index of" <<i ;
          break;
        }
    }
    if (find_status == false)
    {
      cout<<" No element found";
    }
}

void main()
{
  int array [6];
  int value;
  for (int i=0, i<6; i++)
  {
    cout<<"enther the " << i+1 << "element";
    cin>>array[i];
  }

  cout<<"Enter the element to search" ;
  cin>> value;
  linear_search(array, 6, value);
  return 0;
}
