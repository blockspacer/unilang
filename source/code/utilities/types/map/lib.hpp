#pragma once
#include <utility>
#include <map>
#include <unordered_map>
#include <iostream>

//overloading on map type
template <typename X, typename Y>
bool Exists_In_Map(std::map<X,Y> const& m, X const& item);

template <typename X, typename Y>
bool Exists_In_Unordered_Map(std::unordered_map<X,Y> const& m, X const& item);

template <typename X, typename Y>
void Add_To_Map(std::map<X,Y> & m, X const& key, Y const& val);

template <typename T, typename Y>
void Delete_From_Unordered_Map(std::unordered_map<T,Y> & s, T const& item_to_delete);


//overloading on map types
template <typename X, typename Y>
bool Exists_In_Map(std::map<X,Y> const& m, X const& item){
  return m.count(item);
}
template <typename X, typename Y>
bool Exists_In_Unordered_Map(std::unordered_map<X,Y> const& m, X const& item){
  return m.count(item);
}

//some maps don't allow duplicates
//throw if we've attempted to add a duplicate
template <typename Container, typename First, typename Second, typename Exception>
void Throw_On_Failure_To_Insert_Item(Container & c, First f, Second s, Exception e){
  auto build = std::make_pair(f,s);
  auto result = c.insert(build);
  if (!result.second){
    throw e;
  }
}

template <typename T>
T Get_Value_Add_Zero_If_Missing(std::map<T,T> & m, T const& key){
    if (Exists_In_Map(m,key)){
        return m[key];
    }
    m[key] = "0";
    //std::cout << "out {K: " << key << " V: " << m[key] << "}" << std::endl;
    return m[key];
}

template <typename X, typename Y>
void Add_To_Map(std::map<X,Y> & m, X const& key, Y const& val){
  m[key] = val;
  std::cout << "in {K: " << key << " V: " << m[key] << "}" << std::endl;
}

template <typename T, typename Y>
void Delete_From_Unordered_Map(std::unordered_map<T,Y> & s, T const& item_to_delete){
  if (Exists_In_Unordered_Map(s,item_to_delete)){
    s.erase(s.find(item_to_delete));
  }
}

//overloading on map types
template <typename X, typename Y>
std::string To_String(std::map<X,Y> const& m){
  std::string str;
  
  for (auto const& it: m){
    str += std::to_string(it.first) + ": " + std::to_string(it.second) + "\n";
  }
  
  return str;
}