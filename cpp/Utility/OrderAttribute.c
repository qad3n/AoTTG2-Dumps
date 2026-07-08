// Type: Utility.OrderAttribute
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Utility/OrderAttribute.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Utility/CSV/OrderAttribute.cs  [prior source available (delta unverified)]
// --------------------------------

// Utility.OrderAttribute$$get_Order
// il2cpp: int32_t Utility_OrderAttribute__get_Order (Utility_OrderAttribute_o* __this, const MethodInfo* method);
// 0x4153d80

int32_t Utility_OrderAttribute__get_Order(Utility_OrderAttribute_o *__this,MethodInfo *method)

{
  return (__this->fields).order;
}


// Utility.OrderAttribute$$.ctor
// il2cpp: void Utility_OrderAttribute___ctor (Utility_OrderAttribute_o* __this, int32_t order, const MethodInfo* method);
// 0x4153d90

void Utility_OrderAttribute___ctor
               (Utility_OrderAttribute_o *__this,int32_t order,MethodInfo *method)

{
  System_Attribute___ctor((System_Attribute_o *)__this,(MethodInfo *)0x0);
  (__this->fields).order = order;
  return;
}


