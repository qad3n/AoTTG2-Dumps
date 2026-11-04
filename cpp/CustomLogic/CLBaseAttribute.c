// Type: CustomLogic.CLBaseAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CLBaseAttribute.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CLBaseAttribute$$get_Name
// il2cpp: System_String_o* CustomLogic_CLBaseAttribute__get_Name (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
CustomLogic_CLBaseAttribute__get_Name(CustomLogic_CLBaseAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CLBaseAttribute$$set_Name
// il2cpp: void CustomLogic_CLBaseAttribute__set_Name (CustomLogic_CLBaseAttribute_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
CustomLogic_CLBaseAttribute__set_Name(CustomLogic_CLBaseAttribute_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
  return;
}


// CustomLogic.CLBaseAttribute$$get_Static
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Static (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x18111ad30

bool
CustomLogic_CLBaseAttribute__get_Static(CustomLogic_CLBaseAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Static_k__BackingField;
}


// CustomLogic.CLBaseAttribute$$set_Static
// il2cpp: void CustomLogic_CLBaseAttribute__set_Static (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x18111c9f0

void
CustomLogic_CLBaseAttribute__set_Static(CustomLogic_CLBaseAttribute_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Static_k__BackingField = value;
  return;
}


// CustomLogic.CLBaseAttribute$$get_Hybrid
// il2cpp: bool CustomLogic_CLBaseAttribute__get_Hybrid (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x180e8f450

bool
CustomLogic_CLBaseAttribute__get_Hybrid(CustomLogic_CLBaseAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Hybrid_k__BackingField;
}


// CustomLogic.CLBaseAttribute$$set_Hybrid
// il2cpp: void CustomLogic_CLBaseAttribute__set_Hybrid (CustomLogic_CLBaseAttribute_o* __this, bool value, const MethodInfo* method);
// 0x1818c3360

void
CustomLogic_CLBaseAttribute__set_Hybrid(CustomLogic_CLBaseAttribute_o* __this, bool value, MethodInfo* method)

{
  (__this->fields)._Hybrid_k__BackingField = value;
  return;
}


// CustomLogic.CLBaseAttribute$$.ctor
// il2cpp: void CustomLogic_CLBaseAttribute___ctor (CustomLogic_CLBaseAttribute_o* __this, const MethodInfo* method);
// 0x181ecd490

void
CustomLogic_CLBaseAttribute___ctor(CustomLogic_CLBaseAttribute_o* __this, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434513f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434513f = '\x01';
  }
  (__this->fields)._Name_k__BackingField = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,"");
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


