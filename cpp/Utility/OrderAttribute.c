// Type: Utility.OrderAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/OrderAttribute.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/OrderAttribute.cs
// --------------------------------

// Utility.OrderAttribute$$get_Order
// il2cpp: int32_t Utility_OrderAttribute__get_Order (Utility_OrderAttribute_o* __this, const MethodInfo* method);
// 0x180546860

int32_t
Utility_OrderAttribute__get_Order(Utility_OrderAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields).order;
}


// Utility.OrderAttribute$$.ctor
// il2cpp: void Utility_OrderAttribute___ctor (Utility_OrderAttribute_o* __this, int32_t order, const MethodInfo* method);
// 0x181a29130

void
Utility_OrderAttribute___ctor(Utility_OrderAttribute_o* __this, int32_t order, MethodInfo* method)

{
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields).order = nativeType;
  return;
}


