// Type: Gilzoide.FlexUi.FoldoutHeaderAttribute
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gilzoide.FlexUi/Gilzoide.FlexUi/FoldoutHeaderAttribute.cs
// Prior real C# source: none
// --------------------------------

// Gilzoide.FlexUi.FoldoutHeaderAttribute$$get_Title
// il2cpp: System_String_o* Gilzoide_FlexUi_FoldoutHeaderAttribute__get_Title (Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gilzoide_FlexUi_FoldoutHeaderAttribute__get_Title(Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, MethodInfo* method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gilzoide.FlexUi.FoldoutHeaderAttribute$$.ctor
// il2cpp: void Gilzoide_FlexUi_FoldoutHeaderAttribute___ctor (Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, System_String_o* title, const MethodInfo* method);
// 0x1812b8cd0

void
Gilzoide_FlexUi_FoldoutHeaderAttribute___ctor_12b8cd0(Gilzoide_FlexUi_FoldoutHeaderAttribute_o* __this, System_String_o* title, MethodInfo* method)

{
  System_Attribute___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Title_k__BackingField = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,method);
  return;
}


