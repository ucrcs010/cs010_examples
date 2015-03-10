// If the vector oldData is the same as the vector newData, 
// print "Data matches!" ended with a newline. 
// Otherwise, assign oldData with newData. Ex: If oldData = {10, 12, 18} 
// and newData = {25, 27, 29, 23}, then oldData becomes {25, 27, 29, 23}. 

//   bool isSame = true;
//   if (newData.size() == oldData.size())
//   {
//       for(i=0; i < newData.size(); i++)
//       {
//             if(oldData.at(i) != newData.at(i))
//             {
//                 isSame = false;
//                 oldData.at(i) = newData.at(i);
//             }
//       }
//   }
//   else
//   {
//       oldData.clear();
//       for(i=0; i < newData.size(); i++)
//       {
//             oldData.push_back(newData.at(i));
//       }
//   }
//   if(isSame)
//   {
//       cout << "data matches" << endl;
//   }